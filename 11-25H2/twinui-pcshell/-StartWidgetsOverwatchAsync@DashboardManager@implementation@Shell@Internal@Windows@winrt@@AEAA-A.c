/*
 * XREFs of ?StartWidgetsOverwatchAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUIAsyncAction@Foundation@56@XZ @ 0x1805B4018
 * Callers:
 *     ?NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805B1248 (-NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync$_InitCoro$2 @ 0x1805B39A4 (winrt--Windows--Internal--Shell--implementation--DashboardManager--StartWidgetsOverwatchAsync$_I.c)
 */

__int64 *__fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync(
        __int64 a1,
        __int64 *a2)
{
  void *v4; // rax
  int v6; // [rsp+1C8h] [rbp+10h] BYREF

  v4 = operator new(0x190uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync__InitCoro_2(
    &v6,
    (__int64)v4 + 112,
    a2,
    a1);
  return a2;
}
