/*
 * XREFs of ?UnhookEventForAllWindowsAsync@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@56@XZ @ 0x180639780
 * Callers:
 *     ?UnhookEventForAllWindowsAsync@?$produce@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@UIWindowsTracker@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180639730 (-UnhookEventForAllWindowsAsync@-$produce@UWindowsTracker@implementation@Shell@Internal@Windows@w.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::UnhookEventForAllWindowsAsync$_InitCoro$2 @ 0x180639428 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--UnhookEventForAllWindowsAsync$_.c)
 */

__int64 *__fastcall winrt::Windows::Internal::Shell::implementation::WindowsTracker::UnhookEventForAllWindowsAsync(
        __int64 a1,
        __int64 *a2)
{
  void *v4; // rax
  int v6; // [rsp+118h] [rbp+10h] BYREF

  v4 = operator new(0xE0uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::implementation::WindowsTracker::UnhookEventForAllWindowsAsync__InitCoro_2(
    &v6,
    (__int64)v4 + 112,
    a2,
    a1);
  return a2;
}
