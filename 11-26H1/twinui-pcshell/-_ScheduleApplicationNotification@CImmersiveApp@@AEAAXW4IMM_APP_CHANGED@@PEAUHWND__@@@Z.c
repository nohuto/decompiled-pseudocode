/*
 * XREFs of ?_ScheduleApplicationNotification@CImmersiveApp@@AEAAXW4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x180064C80
 * Callers:
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x180059AFC (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@W4ReportVisibilityOverrideOptions@@@Z @ 0x180059BE0 (-ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE.c)
 *     ?ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z @ 0x1800AD230 (-ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z.c)
 *     ?SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@W4MonitorChangeOptions@@@Z @ 0x1801CFFA0 (-SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_D.c)
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x1802FDC80 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 *     ?HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x1802FDF90 (-HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x180300B7C (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180064CB0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 */

void __fastcall CImmersiveApp::_ScheduleApplicationNotification(CImmersiveApp *a1, int a2, __int64 a3)
{
  _DWORD v3[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+28h] [rbp-10h]

  v3[0] = a2;
  v4 = a3;
  v3[1] = 0;
  CImmersiveApp::_ScheduleApplicationNotifications(a1, (const struct APP_CHANGE_INFO *const)v3, 1uLL);
}
