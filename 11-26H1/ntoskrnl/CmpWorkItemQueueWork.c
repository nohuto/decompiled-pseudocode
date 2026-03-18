/*
 * XREFs of CmpWorkItemQueueWork @ 0x140356AAC
 * Callers:
 *     CmFcManagerRecordFeatureUsage @ 0x1402C56C8 (CmFcManagerRecordFeatureUsage.c)
 *     CmFcpManagerFlushUsageTimerRoutine @ 0x140354C70 (CmFcpManagerFlushUsageTimerRoutine.c)
 *     CmFcpManagerDrainUsageNotificationsDpc @ 0x140356A90 (CmFcpManagerDrainUsageNotificationsDpc.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x140356ED8 (CmFcManagerNotifyFeatureUsage.c)
 *     CmpNotifyMachineHiveLoaded @ 0x140523B2C (CmpNotifyMachineHiveLoaded.c)
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacityDpc @ 0x1406E2CE0 (CmFcpManagerPublishFeatureUsageDataIfNearCapacityDpc.c)
 *     CmFcpManagerPublishUsageTimerRoutine @ 0x1406E2D30 (CmFcpManagerPublishUsageTimerRoutine.c)
 *     CmFcpManagerRetryUsageNotificationsTimerRoutine @ 0x1406E2D50 (CmFcpManagerRetryUsageNotificationsTimerRoutine.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x140850A80 (CmRegisterMachineHiveLoadedNotification.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140ABF21C (CmFcpManagerPublishChangeNotifications.c)
 *     CmFcpManagerProcessUsageDataProviders @ 0x140ABF658 (CmFcpManagerProcessUsageDataProviders.c)
 *     CmFcpManagerPublishFeatureUsageData @ 0x140ABF83C (CmFcpManagerPublishFeatureUsageData.c)
 *     CmFcManagerFlushFeatureUsage @ 0x140B33E0C (CmFcManagerFlushFeatureUsage.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x140B482E0 (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void __fastcall CmpWorkItemQueueWork(PWORK_QUEUE_ITEM WorkItem)
{
  if ( (_InterlockedExchange((volatile __int32 *)&WorkItem[1].List.Blink, 3) & 1) == 0 )
  {
    ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&WorkItem[1]);
    ExQueueWorkItem(WorkItem, SHIDWORD(WorkItem[1].List.Blink));
  }
}
