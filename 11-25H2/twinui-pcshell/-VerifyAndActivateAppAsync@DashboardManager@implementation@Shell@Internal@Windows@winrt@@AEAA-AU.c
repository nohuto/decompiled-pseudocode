/*
 * XREFs of ?VerifyAndActivateAppAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x180222FCC
 * Callers:
 *     ?perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x180283760 (-perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_InitCoro$2 @ 0x180282C1C (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_In.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync(
        __int64 a1,
        __int64 a2)
{
  void *v4; // rax
  int v6; // [rsp+348h] [rbp+10h] BYREF

  v4 = operator new(0x310uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync__InitCoro_2(
    &v6,
    v4,
    a2,
    a1);
  return a2;
}
