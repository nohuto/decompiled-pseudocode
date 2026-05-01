/*
 * XREFs of ?RaiseDesktop@MultitaskingViewGestureHandlerHelpers@@YAHXZ @ 0x1802B6480
 * Callers:
 *     _lambda_5f246d3d225ef97a552fc7098e7c8139_::operator() @ 0x180489680 (_lambda_5f246d3d225ef97a552fc7098e7c8139_--operator().c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723___::OnStoryboardStatusChanged @ 0x180495B60 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_7900d5c1cfc51d603dc477285f_ea_180495B60.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall MultitaskingViewGestureHandlerHelpers::RaiseDesktop(MultitaskingViewGestureHandlerHelpers *this)
{
  HWND WindowW; // rax

  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  return PostMessageW(WindowW, 0x579u, 3uLL, 0LL);
}
