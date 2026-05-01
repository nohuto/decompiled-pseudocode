/*
 * XREFs of ?ShowRequested@CMultitaskingViewManager@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1802AC10C
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_694cec6c9198d8f39470d0c04c207483___::Invoke @ 0x180234470 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_180234470.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     CMultitaskingViewManager::ShowRequested$_InitCoro$2 @ 0x1804905F8 (CMultitaskingViewManager--ShowRequested$_InitCoro$2.c)
 */

__int64 __fastcall CMultitaskingViewManager::ShowRequested(
        __int64 a1,
        __int64 a2,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a3)
{
  unsigned int v6; // eax
  int v8; // [rsp+118h] [rbp+10h] BYREF

  v6 = (unsigned int)operator new(0xD0uLL);
  v8 = 0;
  CMultitaskingViewManager::ShowRequested__InitCoro_2((unsigned int)&v8, v6, a2, (_DWORD)a3, a1);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a3);
  return a2;
}
