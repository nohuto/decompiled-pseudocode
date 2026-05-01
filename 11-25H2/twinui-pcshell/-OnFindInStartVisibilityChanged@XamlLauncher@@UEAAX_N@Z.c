/*
 * XREFs of ?OnFindInStartVisibilityChanged@XamlLauncher@@UEAAX_N@Z @ 0x180250050
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180250190 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x1801974C0 (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 *     ?OnSearchAppVisibilityChanged@XamlLauncher@@UEAAX_N@Z @ 0x1802500A0 (-OnSearchAppVisibilityChanged@XamlLauncher@@UEAAX_N@Z.c)
 */

void __fastcall XamlLauncher::OnFindInStartVisibilityChanged(XamlLauncher *this, unsigned __int8 a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2 ^ 1;
  winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
    (__int64 *)this + 49,
    (unsigned int *)&v4);
  if ( a2 )
    XamlLauncher::OnSearchAppVisibilityChanged(this, 0);
}
