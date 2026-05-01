/*
 * XREFs of ?ToggleDashboardVisibilityAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@Uguid@6@W4DashboardInvokeType@Dashboard@3UI@WindowsUdk@6@URect@Foundation@56@@Z @ 0x1805D8660
 * Callers:
 *     ?ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4DashboardInvokeType@Dashboard@3UI@WindowsUdk@6@URect@Foundation@56@@Z @ 0x1805D7E2C (-ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync$_ResumeCoro$1 @ 0x1805D81C0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ToggleDashboardVisibilityAsyn.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync(
        __int64 a1,
        _BYTE *a2,
        _OWORD *a3,
        __int64 a4,
        _OWORD *a5)
{
  char *v9; // [rsp+20h] [rbp-28h]

  v9 = (char *)operator new(0x180uLL);
  *((_QWORD *)v9 + 41) = a1;
  *((_OWORD *)v9 + 21) = *a3;
  *((_DWORD *)v9 + 88) = 1;
  *(_OWORD *)(v9 + 356) = *a5;
  *(_QWORD *)v9 = winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync__ResumeCoro_1;
  *((_DWORD *)v9 + 2) = 65538;
  *a2 = 0;
  v9[320] = 0;
  winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync__ResumeCoro_1(v9);
  return a2;
}
