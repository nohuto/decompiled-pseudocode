/*
 * XREFs of ?HandleShellViewShowRequested@GamingOverlayExperienceManager@@AEAAXAEBUShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@Z @ 0x180347DD0
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_fbca4f682b4592a86644e763e0581c87___::Invoke @ 0x180348590 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_180348590.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Result@?$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x180229FFC (-Result@-$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequ.c)
 *     ?LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z @ 0x180349B9C (-LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z.c)
 *     ?ShellView_ShowRequested@GamingOverlayTelemetry@@SAXXZ @ 0x18034F98C (-ShellView_ShowRequested@GamingOverlayTelemetry@@SAXXZ.c)
 */

void __fastcall GamingOverlayExperienceManager::HandleShellViewShowRequested(
        GamingOverlayExperienceManager *this,
        const struct winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *a2)
{
  int v4; // eax
  const char *v5; // r9
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  GamingOverlayTelemetry::ShellView_ShowRequested();
  try
  {
    v4 = GamingOverlayExperienceManager::LaunchGameBar(this, L"ms-gamebar://launchForeground", 7LL);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x6B3,
        (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)(unsigned int)v4,
        v6);
    winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IDismissShellViewRequestedEventArgs>::Result((__int64 *)a2);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x6B7,
      (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
      v5);
  }
}
