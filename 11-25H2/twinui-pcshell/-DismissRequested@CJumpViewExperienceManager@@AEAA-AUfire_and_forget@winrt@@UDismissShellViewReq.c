/*
 * XREFs of ?DismissRequested@CJumpViewExperienceManager@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1803856EC
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_8ce5553f322d0698bc47a5a547d85e4a___::Invoke @ 0x1803861C0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1803861C0.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     CJumpViewExperienceManager::DismissRequested$_InitCoro$2 @ 0x1803854F8 (CJumpViewExperienceManager--DismissRequested$_InitCoro$2.c)
 */

_BYTE *__fastcall CJumpViewExperienceManager::DismissRequested(__int64 a1, _BYTE *a2, __int64 *a3)
{
  void *v6; // rax
  int v8; // [rsp+98h] [rbp+10h] BYREF

  v6 = operator new(0x50uLL);
  v8 = 0;
  CJumpViewExperienceManager::DismissRequested__InitCoro_2(&v8, (__int64)v6, a2, a3, a1);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a3);
  return a2;
}
