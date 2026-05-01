/*
 * XREFs of ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x1800A53F0
 * Callers:
 *     ?RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z @ 0x1800A3F6C (-RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z.c)
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800A49F8 (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 *     ?Shutdown@RecentAppsCache@Discover@PenWorkspace@@QEAAXXZ @ 0x1800A539C (-Shutdown@RecentAppsCache@Discover@PenWorkspace@@QEAAXXZ.c)
 *     ?DismissTaskViewInRemote@CVirtualDesktopManager@@UEAAXPEAUIVirtualDesktop@@@Z @ 0x18052F720 (-DismissTaskViewInRemote@CVirtualDesktopManager@@UEAAXPEAUIVirtualDesktop@@@Z.c)
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x1805B5220 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 *     ?EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z @ 0x1805D6FC8 (-EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

bool __fastcall wil::handle_wait(wil *this, void *a2)
{
  DWORD v2; // eax
  const char *v3; // r9
  bool v4; // zf
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = WaitForSingleObjectEx(this, (DWORD)a2, 0);
  if ( v2 == 258 )
    return 0;
  v4 = v2 == 0;
  if ( v2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xAD4,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      v3);
  return v4;
}
