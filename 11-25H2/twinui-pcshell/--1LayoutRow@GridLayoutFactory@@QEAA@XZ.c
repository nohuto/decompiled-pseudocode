/*
 * XREFs of ??1LayoutRow@GridLayoutFactory@@QEAA@XZ @ 0x1804C2EB0
 * Callers:
 *     _GridLayoutFactory::_CalculateRowSize_::_1_::dtor$0 @ 0x1806C9896 (_GridLayoutFactory--_CalculateRowSize_--_1_--dtor$0.c)
 *     _GridLayoutFactory::_SplitIntoRows_::_1_::dtor$0 @ 0x1806C98BA (_GridLayoutFactory--_SplitIntoRows_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall GridLayoutFactory::LayoutRow::~LayoutRow(GridLayoutFactory::LayoutRow *this)
{
  CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::RemoveAll(this);
}
