/*
 * XREFs of ?UpdateWidgetsTelemetryAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@W4SessionType@123456@@Z @ 0x180293F10
 * Callers:
 *     ?perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x180283760 (-perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UE.c)
 *     ?PowerChangeCallback@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAKPEAXK0@Z @ 0x1805B1780 (-PowerChangeCallback@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAKPEAXK0@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_InitCoro$2 @ 0x1805B5C98 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTelemetryAsync$_.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync(
        __int64 a1,
        __int64 a2,
        int a3)
{
  void *v5; // rax
  int v7; // [rsp+288h] [rbp+10h] BYREF
  int v8; // [rsp+290h] [rbp+18h] BYREF

  v8 = a3;
  v5 = operator new(0x240uLL);
  v7 = 0;
  winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync__InitCoro_2(
    &v7,
    v5,
    a2,
    &v8,
    a1);
  return a2;
}
