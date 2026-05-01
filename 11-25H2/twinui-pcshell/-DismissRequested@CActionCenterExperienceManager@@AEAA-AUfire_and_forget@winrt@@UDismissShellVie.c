/*
 * XREFs of ?DismissRequested@CActionCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x18035E464
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_83890e468926a210e5a702c3404121d3___::Invoke @ 0x18035F0D0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_18035F0D0.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     CActionCenterExperienceManager::DismissRequested$_InitCoro$2 @ 0x18035E018 (CActionCenterExperienceManager--DismissRequested$_InitCoro$2.c)
 */

_BYTE *__fastcall CActionCenterExperienceManager::DismissRequested(__int64 a1, _BYTE *a2, __int64 *a3)
{
  char *v6; // rax
  int v8; // [rsp+268h] [rbp+10h] BYREF

  v6 = (char *)operator new(0x220uLL);
  v8 = 0;
  CActionCenterExperienceManager::DismissRequested__InitCoro_2(&v8, v6, a2, a3, a1);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a3);
  return a2;
}
