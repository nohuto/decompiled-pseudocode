/*
 * XREFs of PopIdleArmAoAcDozeS4Timer @ 0x14050EC70
 * Callers:
 *     PopUpdateSmartUserPresencePredictions @ 0x14077C938 (PopUpdateSmartUserPresencePredictions.c)
 *     PopPowerAggregatorDozeTimerWorker @ 0x1407D66B0 (PopPowerAggregatorDozeTimerWorker.c)
 *     PopIdleCsStateChanged @ 0x1407DA1D0 (PopIdleCsStateChanged.c)
 *     PopIdleTriggerAdaptiveStandbyAction @ 0x1407DA37C (PopIdleTriggerAdaptiveStandbyAction.c)
 *     PopUpdateSystemIdleContext @ 0x140945524 (PopUpdateSystemIdleContext.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetTimer2 @ 0x14037A500 (KeSetTimer2.c)
 *     PopIdleChooseDozeS4Time @ 0x14060CB5C (PopIdleChooseDozeS4Time.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerArmed @ 0x1407D5F04 (PopTraceSystemIdleS0LowPowerDozeTimerArmed.c)
 *     PopFilterCapabilities @ 0x140944D5C (PopFilterCapabilities.c)
 *     PopIsDozeSupported @ 0x140B2E7C8 (PopIsDozeSupported.c)
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
  if ( *(_DWORD *)&stru_140E66FF0.WaitBlockFill11[80] )
  {
    if ( stru_140E66FF0.WaitBlockFill6[84] )
    {
      PopFilterCapabilities(&stru_140F10828.WaitBlockFill11[24], v3);
      v0 = 0;
      if ( (unsigned __int8)PopIsDozeSupported(v3) )
      {
        if ( (unsigned __int8)PopIdleChooseDozeS4Time(&v5, &v4) )
        {
          v1 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
          v2 = v4;
          if ( !BYTE4(stru_140F0F620.SchedulerAssistLastYieldBoostTime) )
          {
            KeSetTimer2((__int64)&PopIdleAoAcDozeS4Timer, v5, 0LL, 0LL);
            v0 = 1;
            LODWORD(stru_140F0F620.Padding[0]) = v2;
            BYTE4(stru_140F0F620.SchedulerAssistLastYieldBoostTime) = 1;
          }
          KeReleaseSpinLock(&PopIdleAoAcDozeS4Lock, v1);
          if ( v0 )
            PopTraceSystemIdleS0LowPowerDozeTimerArmed(v2, v5);
        }
      }
    }
  }
}
