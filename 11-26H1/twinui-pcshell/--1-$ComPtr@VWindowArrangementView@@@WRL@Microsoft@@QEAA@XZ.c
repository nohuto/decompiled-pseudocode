/*
 * XREFs of ??1?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@QEAA@XZ @ 0x180528028
 * Callers:
 *     _WindowArrangementView::CancelPlacement_::_1_::dtor$0 @ 0x1806F37E5 (_WindowArrangementView--CancelPlacement_--_1_--dtor$0.c)
 *     _WindowArrangementView::CancelPlacement_::_1_::dtor$1 @ 0x1806F37F7 (_WindowArrangementView--CancelPlacement_--_1_--dtor$1.c)
 *     _WindowArrangementView::Hide_::_1_::dtor$0 @ 0x1806F381B (_WindowArrangementView--Hide_--_1_--dtor$0.c)
 *     _WindowArrangementView::ShowView_::_1_::dtor$2 @ 0x1806F3863 (_WindowArrangementView--ShowView_--_1_--dtor$2.c)
 *     _WindowArrangementView::ShowView_::_1_::dtor$3 @ 0x1806F3875 (_WindowArrangementView--ShowView_--_1_--dtor$3.c)
 *     _WindowArrangementView::TickPlaceModeIdleAnimation_::_1_::dtor$2 @ 0x1806F3887 (_WindowArrangementView--TickPlaceModeIdleAnimation_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<WindowArrangementView>::~ComPtr<WindowArrangementView>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(a1);
}
