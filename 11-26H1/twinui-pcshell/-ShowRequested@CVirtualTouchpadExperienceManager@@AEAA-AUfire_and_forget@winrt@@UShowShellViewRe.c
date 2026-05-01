/*
 * XREFs of ?ShowRequested@CVirtualTouchpadExperienceManager@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x180398CD4
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_341c9eb6bde2f5519c2c695a2218853a___::Invoke @ 0x180397670 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_180397670.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     CVirtualTouchpadExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x180398B00 (CVirtualTouchpadExperienceManager--ShowRequested$_ResumeCoro$1.c)
 */

_BYTE *__fastcall CVirtualTouchpadExperienceManager::ShowRequested(
        void (__fastcall *a1)(__int64 a1),
        _BYTE *a2,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a3)
{
  void (__fastcall **v6)(__int64); // rcx
  void (__fastcall *v7)(__int64); // rax

  v6 = (void (__fastcall **)(__int64))operator new(0x70uLL);
  v6[11] = a1;
  v7 = *(void (__fastcall **)(__int64))a3;
  *(_QWORD *)a3 = 0LL;
  v6[12] = v7;
  *v6 = CVirtualTouchpadExperienceManager::ShowRequested__ResumeCoro_1;
  *((_DWORD *)v6 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v6 + 80) = 0;
  CVirtualTouchpadExperienceManager::ShowRequested__ResumeCoro_1((__int64)v6);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a3);
  return a2;
}
