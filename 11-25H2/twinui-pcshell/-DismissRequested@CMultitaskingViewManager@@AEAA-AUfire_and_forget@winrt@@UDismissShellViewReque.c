/*
 * XREFs of ?DismissRequested@CMultitaskingViewManager@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x18048F95C
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_c6fe57d054bc95e7b28407706926cdbb___::Invoke @ 0x1804900C0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1804900C0.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     CMultitaskingViewManager::DismissRequested$_InitCoro$2 @ 0x18048F6D0 (CMultitaskingViewManager--DismissRequested$_InitCoro$2.c)
 */

_BYTE *__fastcall CMultitaskingViewManager::DismissRequested(__int64 a1, _BYTE *a2, __int64 *a3)
{
  void *v6; // rax
  int v8; // [rsp+B8h] [rbp+10h] BYREF

  v6 = operator new(0x70uLL);
  v8 = 0;
  CMultitaskingViewManager::DismissRequested__InitCoro_2(&v8, (__int64)v6, a2, a3, a1);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a3);
  return a2;
}
