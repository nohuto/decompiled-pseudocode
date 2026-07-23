/*
 * XREFs of PopIdleArmAoAcDozeS4Timer @ 0x1405086E0
 * Callers:
 *     PopUpdateSmartUserPresencePredictions @ 0x14077F42C (PopUpdateSmartUserPresencePredictions.c)
 *     PopPowerAggregatorDozeTimerWorker @ 0x1407D9840 (PopPowerAggregatorDozeTimerWorker.c)
 *     PopIdleCsStateChanged @ 0x1407DE134 (PopIdleCsStateChanged.c)
 *     PopUpdateSystemIdleContext @ 0x1409C0E94 (PopUpdateSystemIdleContext.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     PopIdleChooseDozeS4Time @ 0x14060FCBC (PopIdleChooseDozeS4Time.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerArmed @ 0x1407D90B4 (PopTraceSystemIdleS0LowPowerDozeTimerArmed.c)
 *     PopFilterCapabilities @ 0x1409C06CC (PopFilterCapabilities.c)
 *     PopIsDozeSupported @ 0x140B30718 (PopIsDozeSupported.c)
 */

void PopIdleArmAoAcDozeS4Timer()
{
  char v0; // bl
  KIRQL v1; // si
  unsigned int v2; // edi
  _BYTE v3[80]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v4; // [rsp+80h] [rbp+8h] BYREF
  __int64 v5; // [rsp+88h] [rbp+10h] BYREF

  v5 = 0LL;
  v4 = 0;
  memset_0(v3, 0, 0x4CuLL);
  if ( *(_DWORD *)&stru_140E67200.WaitBlockFill11[88] )
  {
    if ( stru_140E67200.WaitBlockFill6[80] )
    {
      PopFilterCapabilities(&PpmIdlePolicyLock.Padding[1], v3);
      v0 = 0;
      if ( (unsigned __int8)PopIsDozeSupported(v3) )
      {
        if ( (unsigned __int8)PopIdleChooseDozeS4Time(&v5, &v4) )
        {
          v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopPdcDeviceListLock.SystemAffinityTokenListHead);
          v2 = v4;
          if ( !byte_140F10354 )
          {
            KeSetTimer2((__int64)&PopPdcDeviceListLock.SchedulerAssistLastYieldBoostTime, v5, 0LL, 0LL);
            v0 = 1;
            dword_140F10358 = v2;
            byte_140F10354 = 1;
          }
          KeReleaseSpinLock((PKSPIN_LOCK)&PopPdcDeviceListLock.SystemAffinityTokenListHead, v1);
          if ( v0 )
            PopTraceSystemIdleS0LowPowerDozeTimerArmed(v2, v5);
        }
      }
    }
  }
}
