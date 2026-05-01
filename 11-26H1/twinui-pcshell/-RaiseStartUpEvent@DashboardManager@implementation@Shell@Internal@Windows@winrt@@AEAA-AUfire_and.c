/*
 * XREFs of ?RaiseStartUpEvent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@W4StartUpEvent@Dashboard@3UI@WindowsUdk@6@@Z @ 0x18026DCB0
 * Callers:
 *     ?perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x18027AA80 (-perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UE.c)
 *     ?NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805D5110 (-NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync$_ResumeCoro$1 @ 0x1805D7800 (winrt--Windows--Internal--Shell--implementation--DashboardManager--StartWidgetsOverwatchAsync$_R.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent$_ResumeCoro$1 @ 0x18026DAF0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RaiseStartUpEvent$_ResumeCoro.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent(
        __int64 a1,
        _BYTE *a2,
        int a3)
{
  _QWORD *v7; // [rsp+20h] [rbp-28h]

  v7 = operator new(0x80uLL);
  v7[13] = a1;
  *((_DWORD *)v7 + 28) = a3;
  *v7 = winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent__ResumeCoro_1;
  *((_DWORD *)v7 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v7 + 96) = 0;
  winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent__ResumeCoro_1(v7);
  return a2;
}
