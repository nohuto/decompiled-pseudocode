/*
 * XREFs of ?SearchDismissRequested@XamlLauncher@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801F2CE0
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_4d81d6df990b8329ece9e4830fdca620___::Invoke @ 0x1801F2CA0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1801F2CA0.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     XamlLauncher::SearchDismissRequested$_ResumeCoro$1 @ 0x180244FA0 (XamlLauncher--SearchDismissRequested$_ResumeCoro$1.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

_BYTE *__fastcall XamlLauncher::SearchDismissRequested(
        __int64 a1,
        _BYTE *a2,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a3)
{
  _QWORD *v6; // rcx
  __int64 v7; // rax

  v6 = operator new(0xD0uLL);
  v6[23] = a1;
  v7 = *(_QWORD *)a3;
  *(_QWORD *)a3 = 0LL;
  v6[24] = v7;
  *v6 = XamlLauncher::SearchDismissRequested__ResumeCoro_1;
  *((_DWORD *)v6 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v6 + 176) = 0;
  XamlLauncher::SearchDismissRequested__ResumeCoro_1(v6);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a3);
  return a2;
}
