/*
 * XREFs of ??1BatchDismissView@CMultitaskingViewControllerBase@@QEAA@XZ @ 0x1804B26C8
 * Callers:
 *     ?DragSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z @ 0x1804B28D0 (-DragSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@PEAUIExternalDragCallback.c)
 *     ?_DismissView@CMultitaskingViewControllerBase@@IEAAXXZ @ 0x1804B32AC (-_DismissView@CMultitaskingViewControllerBase@@IEAAXXZ.c)
 *     _CMultitaskingViewControllerBase::DragSwitchItem_::_1_::dtor$0 @ 0x1806C968F (_CMultitaskingViewControllerBase--DragSwitchItem_--_1_--dtor$0.c)
 * Callees:
 *     ?_CommitDismissView@CMultitaskingViewControllerBase@@AEAAXXZ @ 0x1804B3150 (-_CommitDismissView@CMultitaskingViewControllerBase@@AEAAXXZ.c)
 */

void __fastcall CMultitaskingViewControllerBase::BatchDismissView::~BatchDismissView(
        CMultitaskingViewControllerBase **this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)*this + 22, 0xFFFFFFFF) == 1 )
    CMultitaskingViewControllerBase::_CommitDismissView(*this);
}
