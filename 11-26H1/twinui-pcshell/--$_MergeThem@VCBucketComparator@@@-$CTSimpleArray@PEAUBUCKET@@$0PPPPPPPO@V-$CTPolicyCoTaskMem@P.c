/*
 * XREFs of ??$_MergeThem@VCBucketComparator@@@?$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUBUCKET@@@@V?$CSimpleArrayStandardCompareHelper@PEAUBUCKET@@@@V?$CSimpleArrayStandardMergeHelper@PEAUBUCKET@@@@@@QEAAXAEBVCBucketComparator@@_K1@Z @ 0x1806CA964
 * Callers:
 *     ??$_MergeSort@VCBucketComparator@@@?$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUBUCKET@@@@V?$CSimpleArrayStandardCompareHelper@PEAUBUCKET@@@@V?$CSimpleArrayStandardMergeHelper@PEAUBUCKET@@@@@@QEAAXAEBVCBucketComparator@@_K1@Z @ 0x1806CA8A0 (--$_MergeSort@VCBucketComparator@@@-$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@P.c)
 * Callees:
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 *     ?Compare@CBucketComparator@@QEBAHPEAUBUCKET@@0@Z @ 0x1806CAAC4 (-Compare@CBucketComparator@@QEBAHPEAUBUCKET@@0@Z.c)
 */

void *__fastcall CTSimpleArray<BUCKET *,4294967294,CTPolicyCoTaskMem<BUCKET *>,CSimpleArrayStandardCompareHelper<BUCKET *>,CSimpleArrayStandardMergeHelper<BUCKET *>>::_MergeThem<CBucketComparator>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v5; // r14
  char *v7; // rdi
  __int64 v8; // r10
  __int64 v9; // rbx
  unsigned __int64 v10; // rbp
  __int64 v11; // rsi
  struct BUCKET *v12; // r13
  void *result; // rax
  __int64 v14; // r10
  char v15; // r11
  CBucketComparator *v16; // [rsp+58h] [rbp+10h]

  v5 = a4 >> 1;
  v7 = (char *)(*(_QWORD *)a1 + 8 * a3);
  memcpy_0(*(void **)(a1 + 16), v7, 8 * (a4 >> 1));
  v8 = 0LL;
  v9 = 0LL;
  v10 = v5;
  do
  {
    v11 = v8 + 1;
    v16 = *(CBucketComparator **)&v7[8 * v10];
    v12 = *(struct BUCKET **)(*(_QWORD *)(a1 + 16) + 8 * v9);
    result = (void *)CBucketComparator::Compare(v16, v12, v16);
    if ( (int)result <= 0 )
    {
      ++v9;
      *(_QWORD *)&v7[8 * v14] = v12;
      if ( v9 == v5 )
        return result;
    }
    else
    {
      result = v16;
      ++v10;
      *(_QWORD *)&v7[8 * v14] = v16;
      if ( v10 == a4 )
      {
        result = memcpy_0(&v7[8 * v11], (const void *)(*(_QWORD *)(a1 + 16) + 8 * v9), 8 * (a4 - v11));
        v15 = 1;
      }
    }
    v8 = v11;
  }
  while ( !v15 );
  return result;
}
