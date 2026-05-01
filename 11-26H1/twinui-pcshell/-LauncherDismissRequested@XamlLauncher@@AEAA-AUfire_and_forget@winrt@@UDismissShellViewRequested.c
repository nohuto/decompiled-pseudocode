/*
 * XREFs of ?LauncherDismissRequested@XamlLauncher@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x18045BC50
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_98adf11eaf318faf3b23b3a3a97862cc___::Invoke @ 0x18045B600 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_18045B600.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     XamlLauncher::LauncherDismissRequested$_ResumeCoro$1 @ 0x18045B890 (XamlLauncher--LauncherDismissRequested$_ResumeCoro$1.c)
 */

_BYTE *__fastcall XamlLauncher::LauncherDismissRequested(
        void (__fastcall *a1)(__int64 a1),
        _BYTE *a2,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a3)
{
  void (__fastcall **v6)(__int64); // rcx
  void (__fastcall *v7)(__int64); // rax

  v6 = (void (__fastcall **)(__int64))operator new(0xE0uLL);
  v6[25] = a1;
  v7 = *(void (__fastcall **)(__int64))a3;
  *(_QWORD *)a3 = 0LL;
  v6[26] = v7;
  *v6 = XamlLauncher::LauncherDismissRequested__ResumeCoro_1;
  *((_DWORD *)v6 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v6 + 192) = 0;
  XamlLauncher::LauncherDismissRequested__ResumeCoro_1((__int64)v6);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a3);
  return a2;
}
