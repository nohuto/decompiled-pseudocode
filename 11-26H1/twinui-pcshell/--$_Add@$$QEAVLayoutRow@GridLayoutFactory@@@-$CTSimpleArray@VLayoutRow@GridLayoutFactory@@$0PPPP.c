/*
 * XREFs of ??$_Add@$$QEAVLayoutRow@GridLayoutFactory@@@?$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutRow@GridLayoutFactory@@@@@@QEAAJ$$QEAVLayoutRow@GridLayoutFactory@@PEA_K@Z @ 0x1804D4BB4
 * Callers:
 *     ?_SplitIntoRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@_KAEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEAH@Z @ 0x1804D6578 (-_SplitIntoRows@GridLayoutFactory@@AEAAJAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PP.c)
 * Callees:
 *     ?RemoveAll@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAXXZ @ 0x1804D5758 (-RemoveAll@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@VLayou.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UPositionChangedInfo@ItemAnimationCoordinatorBase@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPositionChangedInfo@ItemAnimationCoordinatorBase@@@@V?$CSimpleArrayStandardCompareHelper@UPositionChangedInfo@ItemAnimationCoordinatorBase@@@@V?$CSimpleArrayStandardMergeHelper@UPositionChangedInfo@ItemAnimationCoordinatorBase@@@@@@QEAAJ_K0@Z @ 0x1804D5FF0 (-_EnsureCapacity@-$CTSimpleArray@UPositionChangedInfo@ItemAnimationCoordinatorBase@@$0PPPPPPPO@V.c)
 */

__int64 __fastcall CTSimpleArray<GridLayoutFactory::LayoutRow,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutRow>>::_Add<GridLayoutFactory::LayoutRow &&>(
        _QWORD *a1,
        __int64 *a2)
{
  int v3; // ebp
  __int64 v4; // rdx
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdi

  v3 = 0;
  v4 = a1[1];
  if ( v4 != a1[3]
    || (v3 = CTSimpleArray<ItemAnimationCoordinatorBase::PositionChangedInfo,4294967294,CTPolicyCoTaskMem<ItemAnimationCoordinatorBase::PositionChangedInfo>,CSimpleArrayStandardCompareHelper<ItemAnimationCoordinatorBase::PositionChangedInfo>,CSimpleArrayStandardMergeHelper<ItemAnimationCoordinatorBase::PositionChangedInfo>>::_EnsureCapacity(
               a1,
               v4 + 1),
        v3 >= 0) )
  {
    ++a1[1];
    v6 = 48LL * a1[1] + *a1 - 48LL;
    if ( v6 )
    {
      *(_QWORD *)v6 = 0LL;
      *(_QWORD *)(v6 + 8) = 0LL;
      *(_QWORD *)(v6 + 16) = 0LL;
      *(_QWORD *)(v6 + 24) = 0LL;
      v7 = *a2;
      v8 = a2[1];
      *a2 = 0LL;
      a2[1] = 0LL;
      a2[3] = 0LL;
      CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::RemoveAll(v6);
      *(_QWORD *)v6 = v7;
      *(_QWORD *)(v6 + 8) = v8;
      *(_QWORD *)(v6 + 24) = v8;
      *(_DWORD *)(v6 + 32) = *((_DWORD *)a2 + 8);
      *(_DWORD *)(v6 + 36) = *((_DWORD *)a2 + 9);
      *(_DWORD *)(v6 + 40) = *((_DWORD *)a2 + 10);
    }
  }
  return (unsigned int)v3;
}
