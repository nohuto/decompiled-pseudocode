/*
 * XREFs of ?SearchShowRequested@XamlLauncher@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1802455E8
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_869fa904868b2f92bdcac70e21f9b9a0___::Invoke @ 0x1802A89F0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1802A89F0.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     XamlLauncher::SearchShowRequested$_ResumeCoro$1 @ 0x1802452C0 (XamlLauncher--SearchShowRequested$_ResumeCoro$1.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

_BYTE *__fastcall XamlLauncher::SearchShowRequested(
        void (__fastcall *a1)(char *a1),
        _BYTE *a2,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a3)
{
  void (__fastcall **v6)(char *); // rcx
  void (__fastcall *v7)(char *); // rax

  v6 = (void (__fastcall **)(char *))operator new(0x100uLL);
  v6[29] = a1;
  v7 = *(void (__fastcall **)(char *))a3;
  *(_QWORD *)a3 = 0LL;
  v6[30] = v7;
  *v6 = XamlLauncher::SearchShowRequested__ResumeCoro_1;
  *((_DWORD *)v6 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v6 + 224) = 0;
  XamlLauncher::SearchShowRequested__ResumeCoro_1((char *)v6);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a3);
  return a2;
}
