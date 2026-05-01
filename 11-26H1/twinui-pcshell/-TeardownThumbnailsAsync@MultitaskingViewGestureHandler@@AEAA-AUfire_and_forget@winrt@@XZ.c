/*
 * XREFs of ?TeardownThumbnailsAsync@MultitaskingViewGestureHandler@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x18049D884
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_efc442667d9759efdb33142b8e7099d9___::Invoke @ 0x18049C830 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_efc442667d9.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     MultitaskingViewGestureHandler::TeardownThumbnailsAsync$_ResumeCoro$1 @ 0x18049D6F0 (MultitaskingViewGestureHandler--TeardownThumbnailsAsync$_ResumeCoro$1.c)
 */

_BYTE *__fastcall MultitaskingViewGestureHandler::TeardownThumbnailsAsync(void (__fastcall *a1)(__int64 a1), _BYTE *a2)
{
  void (__fastcall **v5)(__int64); // [rsp+40h] [rbp+8h]

  v5 = (void (__fastcall **)(__int64))operator new(0x50uLL);
  v5[9] = a1;
  *v5 = MultitaskingViewGestureHandler::TeardownThumbnailsAsync__ResumeCoro_1;
  *((_DWORD *)v5 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v5 + 64) = 0;
  MultitaskingViewGestureHandler::TeardownThumbnailsAsync__ResumeCoro_1((__int64)v5);
  return a2;
}
