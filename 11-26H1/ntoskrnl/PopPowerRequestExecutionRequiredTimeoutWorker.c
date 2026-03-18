/*
 * XREFs of PopPowerRequestExecutionRequiredTimeoutWorker @ 0x1407C9510
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404DE3B8 (PopOkayToQueueNextWorkItem.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1409467E0 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopAcquirePowerRequestPushLock @ 0x140AECCA4 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopPowerRequestExecutionRequiredTimeoutWorker(__int64 a1)
{
  LOBYTE(a1) = 1;
  PopAcquirePowerRequestPushLock(a1);
  PopPowerRequestHandleExecutionEnablementUpdate();
  PopOkayToQueueNextWorkItem((__int64)&stru_140F12D20.648);
  return PopReleaseRwLock(&stru_140F12D20);
}
