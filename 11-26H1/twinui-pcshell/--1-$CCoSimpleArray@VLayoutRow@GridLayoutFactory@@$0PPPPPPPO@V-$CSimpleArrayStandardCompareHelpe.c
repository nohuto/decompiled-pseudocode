/*
 * XREFs of ??1?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@QEAA@XZ @ 0x1804D4ED4
 * Callers:
 *     _GridLayoutFactory::_CalculateRowSize_::_1_::dtor$1 @ 0x1806F17C6 (_GridLayoutFactory--_CalculateRowSize_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 CCoSimpleArray<GridLayoutFactory::LayoutRow,4294967294,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutRow>>::~CCoSimpleArray<GridLayoutFactory::LayoutRow,4294967294,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutRow>>()
{
  return CTSimpleArray<GridLayoutFactory::LayoutRow,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutRow>>::RemoveAll();
}
