/*
 * XREFs of ?DismissRequested@CMultitaskingViewManager@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1804A04E0
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_c6fe57d054bc95e7b28407706926cdbb___::Invoke @ 0x1804A0B90 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1804A0B90.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     CMultitaskingViewManager::DismissRequested$_ResumeCoro$1 @ 0x1804A02D0 (CMultitaskingViewManager--DismissRequested$_ResumeCoro$1.c)
 */

_BYTE *__fastcall CMultitaskingViewManager::DismissRequested(
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
  *v6 = CMultitaskingViewManager::DismissRequested__ResumeCoro_1;
  *((_DWORD *)v6 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v6 + 80) = 0;
  CMultitaskingViewManager::DismissRequested__ResumeCoro_1((__int64)v6);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a3);
  return a2;
}
