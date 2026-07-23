/*
 * XREFs of PopPowerRequestExecutionRequiredTimeoutWorker @ 0x1407CC5B0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404D7A98 (PopOkayToQueueNextWorkItem.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1409C2150 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopAcquirePowerRequestPushLock @ 0x140AEFCB4 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopPowerRequestExecutionRequiredTimeoutWorker(__int64 a1)
{
  LOBYTE(a1) = 1;
  PopAcquirePowerRequestPushLock(a1);
  PopPowerRequestHandleExecutionEnablementUpdate();
  PopOkayToQueueNextWorkItem((__int64)&stru_140F12EA0.AffinityPrimaryGroup);
  return PopReleaseRwLock((struct _KTHREAD *)stru_140F12EA0.TracingPrivate);
}
