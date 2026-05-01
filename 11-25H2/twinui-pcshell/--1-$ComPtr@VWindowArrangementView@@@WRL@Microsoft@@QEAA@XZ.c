/*
 * XREFs of ??1?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@QEAA@XZ @ 0x180505C08
 * Callers:
 *     _WindowArrangementView::CancelPlacement_::_1_::dtor$0 @ 0x1806CB26A (_WindowArrangementView--CancelPlacement_--_1_--dtor$0.c)
 *     _WindowArrangementView::ShowView_::_1_::dtor$3 @ 0x1806CB27C (_WindowArrangementView--ShowView_--_1_--dtor$3.c)
 *     _WindowArrangementView::Hide_::_1_::dtor$0 @ 0x1806CB2B2 (_WindowArrangementView--Hide_--_1_--dtor$0.c)
 *     _WindowArrangementView::ShowView_::_1_::dtor$2 @ 0x1806CB2FA (_WindowArrangementView--ShowView_--_1_--dtor$2.c)
 *     _WindowArrangementView::TickPlaceModeIdleAnimation_::_1_::dtor$2 @ 0x1806CB30C (_WindowArrangementView--TickPlaceModeIdleAnimation_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<WindowArrangementView>::~ComPtr<WindowArrangementView>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(a1);
}
