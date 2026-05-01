/*
 * XREFs of ?TeardownThumbnailsAsync@MultitaskingViewGestureHandler@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x18048CCD4
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_efc442667d9759efdb33142b8e7099d9___::Invoke @ 0x18048BBF0 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_efc442667d9.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     MultitaskingViewGestureHandler::TeardownThumbnailsAsync$_InitCoro$2 @ 0x18048CAEC (MultitaskingViewGestureHandler--TeardownThumbnailsAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall MultitaskingViewGestureHandler::TeardownThumbnailsAsync(__int64 a1, _BYTE *a2)
{
  void *v4; // rax
  int v6; // [rsp+88h] [rbp+10h] BYREF

  v4 = operator new(0x50uLL);
  v6 = 0;
  MultitaskingViewGestureHandler::TeardownThumbnailsAsync__InitCoro_2(&v6, (__int64)v4, a2, a1);
  return a2;
}
