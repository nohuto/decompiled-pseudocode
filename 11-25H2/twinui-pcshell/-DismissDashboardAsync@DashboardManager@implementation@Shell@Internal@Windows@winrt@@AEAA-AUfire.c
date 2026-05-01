/*
 * XREFs of ?DismissDashboardAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@UDismissShellViewRequestedEventArgs@3UI@WindowsUdk@6@@Z @ 0x1805AB4CC
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_698b04a468171e1edcec7d7cafdd70ba___::Invoke @ 0x1805B00E0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1805B00E0.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync$_InitCoro$2 @ 0x1805AACE8 (winrt--Windows--Internal--Shell--implementation--DashboardManager--DismissDashboardAsync$_InitCo.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync(
        __int64 a1,
        _BYTE *a2,
        __int64 *a3)
{
  char *v6; // rax
  int v8; // [rsp+318h] [rbp+10h] BYREF
  __int64 *v9; // [rsp+320h] [rbp+18h]

  v9 = a3;
  v6 = (char *)operator new(0x2C0uLL);
  v8 = 0;
  winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync__InitCoro_2(
    &v8,
    v6,
    a2,
    a3,
    a1);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a3);
  return a2;
}
