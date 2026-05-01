/*
 * XREFs of ?LauncherShowRequested@XamlLauncher@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801FAB30
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_0f59bd4c249e80fc849f8df850cac31c___::Invoke @ 0x1801FAAF0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1801FAAF0.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     XamlLauncher::LauncherShowRequested$_ResumeCoro$1 @ 0x180243FD0 (XamlLauncher--LauncherShowRequested$_ResumeCoro$1.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

_BYTE *__fastcall XamlLauncher::LauncherShowRequested(
        __int64 a1,
        _BYTE *a2,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a3)
{
  _QWORD *v6; // rcx
  __int64 v7; // rax

  v6 = operator new(0xC0uLL);
  v6[21] = a1;
  v7 = *(_QWORD *)a3;
  *(_QWORD *)a3 = 0LL;
  v6[22] = v7;
  *v6 = XamlLauncher::LauncherShowRequested__ResumeCoro_1;
  *((_DWORD *)v6 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v6 + 160) = 0;
  XamlLauncher::LauncherShowRequested__ResumeCoro_1();
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a3);
  return a2;
}
