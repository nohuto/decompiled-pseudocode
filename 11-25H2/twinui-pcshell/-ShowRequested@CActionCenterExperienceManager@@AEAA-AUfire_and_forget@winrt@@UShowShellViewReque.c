/*
 * XREFs of ?ShowRequested@CActionCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x180361264
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_56b7454331c88da4d072938a526942b2___::Invoke @ 0x18035F150 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_18035F150.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     CActionCenterExperienceManager::ShowRequested$_InitCoro$2 @ 0x180360CD8 (CActionCenterExperienceManager--ShowRequested$_InitCoro$2.c)
 */

_BYTE *__fastcall CActionCenterExperienceManager::ShowRequested(__int64 a1, _BYTE *a2, __int64 *a3)
{
  char *v6; // rax
  int v8; // [rsp+2C8h] [rbp+10h] BYREF

  v6 = (char *)operator new(0x280uLL);
  v8 = 0;
  CActionCenterExperienceManager::ShowRequested__InitCoro_2(&v8, v6, a2, a3, a1);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a3);
  return a2;
}
