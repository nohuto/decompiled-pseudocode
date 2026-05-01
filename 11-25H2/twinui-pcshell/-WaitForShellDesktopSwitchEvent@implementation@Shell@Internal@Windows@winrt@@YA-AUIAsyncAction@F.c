/*
 * XREFs of ?WaitForShellDesktopSwitchEvent@implementation@Shell@Internal@Windows@winrt@@YA?AUIAsyncAction@Foundation@45@XZ @ 0x1805B6694
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180282C70 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::WaitForShellDesktopSwitchEvent$_InitCoro$2 @ 0x1805B63B4 (winrt--Windows--Internal--Shell--implementation--WaitForShellDesktopSwitchEvent$_InitCoro$2.c)
 */

__int64 *__fastcall winrt::Windows::Internal::Shell::implementation::WaitForShellDesktopSwitchEvent(__int64 *a1)
{
  void *v2; // rax
  int v4; // [rsp+120h] [rbp+8h] BYREF

  v2 = operator new(0xF0uLL);
  v4 = 0;
  winrt::Windows::Internal::Shell::implementation::WaitForShellDesktopSwitchEvent__InitCoro_2(
    &v4,
    (__int64)v2 + 112,
    a1);
  return a1;
}
