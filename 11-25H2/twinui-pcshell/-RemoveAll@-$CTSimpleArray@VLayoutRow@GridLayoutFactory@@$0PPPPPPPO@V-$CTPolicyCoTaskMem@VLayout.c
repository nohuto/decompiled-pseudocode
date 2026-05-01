/*
 * XREFs of ?RemoveAll@?$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutRow@GridLayoutFactory@@@@@@QEAAXXZ @ 0x1804C3768
 * Callers:
 *     ??1?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@QEAA@XZ @ 0x1804C2EBC (--1-$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelpe.c)
 *     ?_CalculateRowSize@GridLayoutFactory@@AEAA?AUCSize@Geometry@@XZ @ 0x1804C3C44 (-_CalculateRowSize@GridLayoutFactory@@AEAA-AUCSize@Geometry@@XZ.c)
 *     ?_SplitIntoRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@_KAEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEAH@Z @ 0x1804C4520 (-_SplitIntoRows@GridLayoutFactory@@AEAAJAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PP.c)
 * Callees:
 *     ?RemoveAll@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAXXZ @ 0x1804C36EC (-RemoveAll@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@VLayou.c)
 */

void __fastcall CTSimpleArray<GridLayoutFactory::LayoutRow,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutRow>>::RemoveAll(
        __int64 a1)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 v3; // rbp
  __int64 v4; // rsi

  v1 = (unsigned __int64 *)(a1 + 8);
  if ( *(_QWORD *)a1 )
  {
    v3 = 0LL;
    if ( *v1 )
    {
      v4 = 0LL;
      do
      {
        CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::RemoveAll(v4 + *(_QWORD *)a1);
        ++v3;
        v4 += 48LL;
      }
      while ( v3 < *v1 );
    }
    CoTaskMemFree(*(LPVOID *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *v1 = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
