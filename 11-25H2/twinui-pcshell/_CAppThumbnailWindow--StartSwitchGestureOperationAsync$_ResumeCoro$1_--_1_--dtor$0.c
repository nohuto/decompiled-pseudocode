/*
 * XREFs of _CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806C8E52
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$enable_shared_from_this@VCAppThumbnailWindow@@@std@@IEAA@XZ @ 0x1802D1D9C (--1-$enable_shared_from_this@VCAppThumbnailWindow@@@std@@IEAA@XZ.c)
 */

void __fastcall CAppThumbnailWindow::StartSwitchGestureOperationAsync__ResumeCoro_1_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 128) = *(_QWORD *)(a2 + 336) + 16LL;
  std::enable_shared_from_this<CAppThumbnailWindow>::~enable_shared_from_this<CAppThumbnailWindow>(*(_QWORD *)(a2 + 128));
}
