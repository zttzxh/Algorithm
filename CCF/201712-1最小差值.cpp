#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int a[10001]; 
int main()
{
	int i,j;//数组相互减法
	int n,min,mmin;//分别为数组总数，最小值，相减的差值
	while(scanf("%d",&n)!=EOF)//输入n个数，循环输入
	{
	    for(i=0;i<n;i++){
	    scanf("&d",&a[i]);//依次从键盘上输入比较的数
	     }
	
	int min=abs(a[0]-a[1]);//定义一个最小值
	for(i=0;i<n;i++){
	    for(j=i+1;j<n;j++){//内外循环求差值
	    mmin=abs(a[i]-a[j]);
	    if(mmin<min)//二者相互比较，取最小的那个数字
		    min=mmin;
	    }
	}
	
	printf("%d\n",min);//另起一趟，输出绝对值最小的那个
		
	}
	return 0;
	
	
	
	
	
} 
