/*
 * XREFs of ?DismissDashboardAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@UDismissShellViewRequestedEventArgs@3UI@WindowsUdk@6@@Z @ 0x1805CF6B4
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_698b04a468171e1edcec7d7cafdd70ba___::Invoke @ 0x1805D3FE0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1805D3FE0.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync$_ResumeCoro$1 @ 0x1805CEF40 (winrt--Windows--Internal--Shell--implementation--DashboardManager--DismissDashboardAsync$_Resume.c)
 */

// Hidden C++ exception states: #wind=3
_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync(
        void (__fastcall *a1)(char *a1),
        _BYTE *a2,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a3)
{
  void (__fastcall *v6)(char *); // rax
  void (__fastcall **v8)(char *); // [rsp+20h] [rbp-28h]

  v8 = (void (__fastcall **)(char *))operator new(0x2C0uLL);
  v8[85] = a1;
  v6 = *(void (__fastcall **)(char *))a3;
  *(_QWORD *)a3 = 0LL;
  v8[86] = v6;
  *v8 = winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync__ResumeCoro_1;
  *((_DWORD *)v8 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v8 + 672) = 0;
  winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync__ResumeCoro_1((char *)v8);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a3);
  return a2;
}
