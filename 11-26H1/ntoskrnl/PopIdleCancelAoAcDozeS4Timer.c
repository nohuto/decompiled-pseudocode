/*
 * XREFs of PopIdleCancelAoAcDozeS4Timer @ 0x1404F15DC
 * Callers:
 *     PopUpdateSmartUserPresencePredictions @ 0x14077C938 (PopUpdateSmartUserPresencePredictions.c)
 *     PopPowerAggregatorDozeTimerWorker @ 0x1407D66B0 (PopPowerAggregatorDozeTimerWorker.c)
 *     PopIdleCsStateChanged @ 0x1407DA1D0 (PopIdleCsStateChanged.c)
 *     PopIdleGlobalUserPresenceCallback @ 0x1407DA270 (PopIdleGlobalUserPresenceCallback.c)
 *     PopIdleTriggerAdaptiveStandbyAction @ 0x1407DA37C (PopIdleTriggerAdaptiveStandbyAction.c)
 *     PopUpdateSystemIdleContext @ 0x140945524 (PopUpdateSystemIdleContext.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer2 @ 0x1403AA4E0 (KeCancelTimer2.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerCancelled @ 0x1407D5FC0 (PopTraceSystemIdleS0LowPowerDozeTimerCancelled.c)
 */

char __fastcall PopIdleCancelAoAcDozeS4Timer(unsigned int a1)
{
  char v2; // bl
  KIRQL v3; // si

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  if ( BYTE4(stru_140F0F620.SchedulerAssistLastYieldBoostTime) )
  {
    KeCancelTimer2((__int64)&PopIdleAoAcDozeS4Timer);
    BYTE4(stru_140F0F620.SchedulerAssistLastYieldBoostTime) = 0;
    v2 = 1;
  }
  KeReleaseSpinLock(&PopIdleAoAcDozeS4Lock, v3);
  if ( v2 )
    PopTraceSystemIdleS0LowPowerDozeTimerCancelled(a1);
  return v2;
}
