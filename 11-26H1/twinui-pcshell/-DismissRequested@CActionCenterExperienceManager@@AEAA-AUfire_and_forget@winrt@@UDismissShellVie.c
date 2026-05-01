/*
 * XREFs of ?DismissRequested@CActionCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x180365230
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_ea60bc499ddb5270bf04f29d15e6f41a___::Invoke @ 0x180366070 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_180366070.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     CActionCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x180364E40 (CActionCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 */

_BYTE *__fastcall CActionCenterExperienceManager::DismissRequested(
        void (__fastcall *a1)(char *a1),
        _BYTE *a2,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a3)
{
  void (__fastcall **v6)(char *); // rcx
  void (__fastcall *v7)(char *); // rax

  v6 = (void (__fastcall **)(char *))operator new(0x220uLL);
  v6[65] = a1;
  v7 = *(void (__fastcall **)(char *))a3;
  *(_QWORD *)a3 = 0LL;
  v6[66] = v7;
  *v6 = CActionCenterExperienceManager::DismissRequested__ResumeCoro_1;
  *((_DWORD *)v6 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v6 + 512) = 0;
  CActionCenterExperienceManager::DismissRequested__ResumeCoro_1((char *)v6);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a3);
  return a2;
}
