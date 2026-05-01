/*
 * XREFs of ??$SortEx@VCBucketComparator@@@?$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUBUCKET@@@@V?$CSimpleArrayStandardCompareHelper@PEAUBUCKET@@@@V?$CSimpleArrayStandardMergeHelper@PEAUBUCKET@@@@@@QEAAJAEBVCBucketComparator@@@Z @ 0x1806A2768
 * Callers:
 *     ?_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z @ 0x1806A2D5C (-_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x18008CD48 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180150724 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ??$_MergeSort@VCBucketComparator@@@?$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUBUCKET@@@@V?$CSimpleArrayStandardCompareHelper@PEAUBUCKET@@@@V?$CSimpleArrayStandardMergeHelper@PEAUBUCKET@@@@@@QEAAXAEBVCBucketComparator@@_K1@Z @ 0x1806A280C (--$_MergeSort@VCBucketComparator@@@-$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@P.c)
 */

__int64 __fastcall CTSimpleArray<BUCKET *,4294967294,CTPolicyCoTaskMem<BUCKET *>,CSimpleArrayStandardCompareHelper<BUCKET *>,CSimpleArrayStandardMergeHelper<BUCKET *>>::SortEx<CBucketComparator>(
        __int64 a1,
        __int64 a2)
{
  int v3; // ebx
  unsigned __int64 v4; // rcx
  LPVOID *v6; // rsi
  __int64 v7; // rdx
  IMalloc *v8; // rcx
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 > 1 )
  {
    v10 = 0LL;
    v6 = (LPVOID *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = 0LL;
    v3 = ULongLongMult(v4 >> 1, 8uLL, &v10);
    if ( v3 >= 0 )
      v3 = CTCoAllocPolicy::Realloc(v8, v7, 0LL, v10, (void **)(a1 + 16));
    if ( v3 >= 0 )
    {
      CTSimpleArray<BUCKET *,4294967294,CTPolicyCoTaskMem<BUCKET *>,CSimpleArrayStandardCompareHelper<BUCKET *>,CSimpleArrayStandardMergeHelper<BUCKET *>>::_MergeSort<CBucketComparator>(
        a1,
        a2,
        0LL,
        *(_QWORD *)(a1 + 8));
      CoTaskMemFree(*v6);
      *v6 = 0LL;
    }
  }
  return (unsigned int)v3;
}
