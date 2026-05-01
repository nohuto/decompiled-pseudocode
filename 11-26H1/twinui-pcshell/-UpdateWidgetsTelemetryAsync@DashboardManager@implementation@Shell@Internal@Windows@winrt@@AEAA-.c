/*
 * XREFs of ?UpdateWidgetsTelemetryAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@W4SessionType@123456@@Z @ 0x1805D9D20
 * Callers:
 *     ?perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x18027AA80 (-perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UE.c)
 *     ?PowerChangeCallback@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAKPEAXK0@Z @ 0x1805D5610 (-PowerChangeCallback@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAKPEAXK0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x1805D9670 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTelemetryAsync$_.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync(
        void (__fastcall *a1)(__int64 *a1, __int64 a2, __int64 a3),
        _BYTE *a2,
        int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  void (__fastcall **v9)(__int64 *, __int64, __int64); // [rsp+20h] [rbp-28h]

  v9 = (void (__fastcall **)(__int64 *, __int64, __int64))operator new(0x240uLL);
  v9[69] = a1;
  *((_DWORD *)v9 + 140) = a3;
  *v9 = winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync__ResumeCoro_1;
  *((_DWORD *)v9 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v9 + 544) = 0;
  winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync__ResumeCoro_1(
    (__int64 *)v9,
    v6,
    v7);
  return a2;
}
