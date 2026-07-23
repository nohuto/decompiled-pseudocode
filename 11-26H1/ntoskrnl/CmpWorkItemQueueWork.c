/*
 * XREFs of CmpWorkItemQueueWork @ 0x14035884C
 * Callers:
 *     CmFcManagerRecordFeatureUsage @ 0x140310364 (CmFcManagerRecordFeatureUsage.c)
 *     CmFcpManagerFlushUsageTimerRoutine @ 0x140356A10 (CmFcpManagerFlushUsageTimerRoutine.c)
 *     CmFcpManagerDrainUsageNotificationsDpc @ 0x140358830 (CmFcpManagerDrainUsageNotificationsDpc.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x140358C78 (CmFcManagerNotifyFeatureUsage.c)
 *     CmpNotifyMachineHiveLoaded @ 0x14052619C (CmpNotifyMachineHiveLoaded.c)
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacityDpc @ 0x1406E6FC0 (CmFcpManagerPublishFeatureUsageDataIfNearCapacityDpc.c)
 *     CmFcpManagerPublishUsageTimerRoutine @ 0x1406E7010 (CmFcpManagerPublishUsageTimerRoutine.c)
 *     CmFcpManagerRetryUsageNotificationsTimerRoutine @ 0x1406E7030 (CmFcpManagerRetryUsageNotificationsTimerRoutine.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x140856D90 (CmRegisterMachineHiveLoadedNotification.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140AC12BC (CmFcpManagerPublishChangeNotifications.c)
 *     CmFcpManagerProcessUsageDataProviders @ 0x140AC16F8 (CmFcpManagerProcessUsageDataProviders.c)
 *     CmFcpManagerPublishFeatureUsageData @ 0x140AC18DC (CmFcpManagerPublishFeatureUsageData.c)
 *     CmFcManagerFlushFeatureUsage @ 0x140B3625C (CmFcManagerFlushFeatureUsage.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x140B4A070 (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void __fastcall CmpWorkItemQueueWork(PWORK_QUEUE_ITEM WorkItem)
{
  if ( (_InterlockedExchange((volatile __int32 *)&WorkItem[1].List.Blink, 3) & 1) == 0 )
  {
    ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&WorkItem[1]);
    ExQueueWorkItem(WorkItem, SHIDWORD(WorkItem[1].List.Blink));
  }
}
