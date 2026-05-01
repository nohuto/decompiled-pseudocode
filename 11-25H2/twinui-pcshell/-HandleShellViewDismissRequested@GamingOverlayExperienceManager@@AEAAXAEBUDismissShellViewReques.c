/*
 * XREFs of ?HandleShellViewDismissRequested@GamingOverlayExperienceManager@@AEAAXAEBUDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@Z @ 0x180347D68
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_09d6a5938551e11ba4f4f6c676a8faa5___::Invoke @ 0x180348510 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_180348510.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Result@?$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x180229FFC (-Result@-$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequ.c)
 *     ?LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z @ 0x180349B9C (-LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z.c)
 *     ?ShellView_DismissRequested@GamingOverlayTelemetry@@SAXXZ @ 0x18034F960 (-ShellView_DismissRequested@GamingOverlayTelemetry@@SAXXZ.c)
 */

void __fastcall GamingOverlayExperienceManager::HandleShellViewDismissRequested(
        GamingOverlayExperienceManager *this,
        const struct winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs *a2)
{
  int v4; // eax
  const char *v5; // r9
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  GamingOverlayTelemetry::ShellView_DismissRequested();
  try
  {
    v4 = GamingOverlayExperienceManager::LaunchGameBar(this, L"ms-gamebar://launchPinnedOnly", 7LL);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x6BE,
        (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)(unsigned int)v4,
        v6);
    winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IDismissShellViewRequestedEventArgs>::Result((__int64 *)a2);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x6C2,
      (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
      v5);
  }
}
