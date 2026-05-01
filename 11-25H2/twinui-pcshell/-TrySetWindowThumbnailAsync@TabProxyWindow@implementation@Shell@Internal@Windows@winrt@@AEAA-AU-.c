/*
 * XREFs of ?TrySetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@56@XZ @ 0x1802145B4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$1 @ 0x18026EAC0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_InitCoro$2 @ 0x18026EE58 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Ini.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync(
        __int64 a1,
        __int64 a2)
{
  char *v4; // rax
  int v6; // [rsp+1E8h] [rbp+10h] BYREF

  v4 = (char *)operator new(0x1B0uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync__InitCoro_2(
    &v6,
    v4 + 112,
    a2,
    a1);
  return a2;
}
