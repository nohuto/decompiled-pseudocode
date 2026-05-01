/*
 * XREFs of ?ShowRequestedVirtualDesktopSwitcher@CMultitaskingViewManager@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801E231C
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_809da4074b2def485a571e5b447a149a___::Invoke @ 0x180490100 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_180490100.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_InitCoro$2 @ 0x18025A9C0 (CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher$_InitCoro$2.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher(
        __int64 a1,
        __int64 a2,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a3)
{
  void *v6; // rax
  int v8; // [rsp+108h] [rbp+10h] BYREF

  v6 = operator new(0xC0uLL);
  v8 = 0;
  CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher__InitCoro_2(&v8, v6, a2, a3, a1);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a3);
  return a2;
}
