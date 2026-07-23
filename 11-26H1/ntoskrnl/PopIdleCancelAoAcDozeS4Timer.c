/*
 * XREFs of PopIdleCancelAoAcDozeS4Timer @ 0x1404EABBC
 * Callers:
 *     PopUpdateSmartUserPresencePredictions @ 0x14077F42C (PopUpdateSmartUserPresencePredictions.c)
 *     PopPowerAggregatorDozeTimerWorker @ 0x1407D9840 (PopPowerAggregatorDozeTimerWorker.c)
 *     PopIdleCsStateChanged @ 0x1407DE134 (PopIdleCsStateChanged.c)
 *     PopIdleGlobalUserPresenceCallback @ 0x1407DE1C0 (PopIdleGlobalUserPresenceCallback.c)
 *     PopUpdateSystemIdleContext @ 0x1409C0E94 (PopUpdateSystemIdleContext.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer2 @ 0x1403B40F0 (KeCancelTimer2.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerCancelled @ 0x1407D9170 (PopTraceSystemIdleS0LowPowerDozeTimerCancelled.c)
 */

char __fastcall PopIdleCancelAoAcDozeS4Timer(unsigned int a1)
{
  char v2; // bl
  KIRQL v3; // si

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopPdcDeviceListLock.SystemAffinityTokenListHead);
  if ( byte_140F10354 )
  {
    KeCancelTimer2((__int64)&PopPdcDeviceListLock.SchedulerAssistLastYieldBoostTime);
    byte_140F10354 = 0;
    v2 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&PopPdcDeviceListLock.SystemAffinityTokenListHead, v3);
  if ( v2 )
    PopTraceSystemIdleS0LowPowerDozeTimerCancelled(a1);
  return v2;
}
