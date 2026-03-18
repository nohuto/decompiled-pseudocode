/*
 * XREFs of ?MonitorCleanupGlobal@@YAJXZ @ 0x140005854
 * Callers:
 *     DxgkUnload @ 0x1401D5860 (DxgkUnload.c)
 *     DriverEntry @ 0x14044C078 (DriverEntry.c)
 * Callees:
 *     Feature_Bugfix_DontUnregisterMonitorMgrPnPIfNotRegistered__private_IsEnabledDeviceUsageNoInline @ 0x140098658 (Feature_Bugfix_DontUnregisterMonitorMgrPnPIfNotRegistered__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DeleteGlobalCache@EDIDCACHE@DxgMonitor@@SAXXZ @ 0x1402706E4 (-DeleteGlobalCache@EDIDCACHE@DxgMonitor@@SAXXZ.c)
 *     ?DestroyStaticUSB4Class@MONITOR_MGR@@SAXXZ @ 0x140273B00 (-DestroyStaticUSB4Class@MONITOR_MGR@@SAXXZ.c)
 *     ?MonitorCleanupAdditionalTiming@@YAXXZ @ 0x140275ACC (-MonitorCleanupAdditionalTiming@@YAXXZ.c)
 */

__int64 MonitorCleanupGlobal(void)
{
  KIRQL v0; // al
  bool v1; // bl

  WdLogNewEntry5_WdTrace();
  WdLogGlobalForLineNumber = 189;
  if ( !(unsigned int)Feature_Bugfix_DontUnregisterMonitorMgrPnPIfNotRegistered__private_IsEnabledDeviceUsageNoInline()
    || MONITOR_MGR::_pInterfaceNotificationHandle )
  {
    IoUnregisterPlugPlayNotification(MONITOR_MGR::_pInterfaceNotificationHandle);
  }
  v0 = KeAcquireSpinLockRaiseToDpc(&MONITOR_MGR::_MonitorPendingEventTraceLock);
  v1 = MONITOR_MGR::_MonitorPendingEventTraceHead.Flink == &MONITOR_MGR::_MonitorPendingEventTraceHead;
  KeReleaseSpinLock(&MONITOR_MGR::_MonitorPendingEventTraceLock, v0);
  if ( !v1 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 218;
  }
  MONITOR_MGR::DestroyStaticUSB4Class();
  MonitorCleanupAdditionalTiming();
  DxgMonitor::EDIDCACHE::DeleteGlobalCache();
  return 0LL;
}
