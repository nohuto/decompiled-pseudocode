/*
 * XREFs of KeCancelTimer2 @ 0x1403B40F0
 * Callers:
 *     ExpSetTimerObject2 @ 0x1403B3598 (ExpSetTimerObject2.c)
 *     ExpShutdownWorkerFactory @ 0x1403B3AE0 (ExpShutdownWorkerFactory.c)
 *     ExCancelTimer @ 0x1403B3CE0 (ExCancelTimer.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x1404EABBC (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140501378 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopThermalEventTransitionEnableDeepSleep @ 0x14052B4C8 (PopThermalEventTransitionEnableDeepSleep.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405FB3A0 (KiForceParkDutyCycleDpcCallback.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x140606610 (PopDirectedDripsStartDisengageTimer.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x14060A834 (PopThermalUpdateTelemetryClientCount.c)
 *     DifKeCancelTimer2Wrapper @ 0x140664270 (DifKeCancelTimer2Wrapper.c)
 *     PopPowerRequestDebounceTimerWorker @ 0x1407CC4F0 (PopPowerRequestDebounceTimerWorker.c)
 *     PopNetLowPowerEpochCallback @ 0x1407DE550 (PopNetLowPowerEpochCallback.c)
 *     PopNetResiliencyPhaseStateChanged @ 0x1407DE7B0 (PopNetResiliencyPhaseStateChanged.c)
 *     PopAdaptiveStandbyCheckHibernateBudgetAction @ 0x1407E2E8C (PopAdaptiveStandbyCheckHibernateBudgetAction.c)
 *     PopAdaptiveStandbySessionStop @ 0x1407E5384 (PopAdaptiveStandbySessionStop.c)
 *     ExStartStopWorkQueueProvider @ 0x1408458FC (ExStartStopWorkQueueProvider.c)
 *     ExpPartitionDestroy @ 0x140845D08 (ExpPartitionDestroy.c)
 *     PopPowerRequestExecutionRequiredSettingCallback @ 0x1409C1C20 (PopPowerRequestExecutionRequiredSettingCallback.c)
 *     PopPowerRequestNotifySystemIdleStateChanged @ 0x1409F7C58 (PopPowerRequestNotifySystemIdleStateChanged.c)
 *     EtwpDisableKernelTrace @ 0x140A00180 (EtwpDisableKernelTrace.c)
 *     PpmCheckReInit @ 0x140AEBB2C (PpmCheckReInit.c)
 *     PopPowerAggregatorDozeTimerDisarm @ 0x140B2DD3C (PopPowerAggregatorDozeTimerDisarm.c)
 *     EtwpCoverageFlushPending @ 0x140B452E0 (EtwpCoverageFlushPending.c)
 *     PopDripsWatchdogStopTimer @ 0x140B54388 (PopDripsWatchdogStopTimer.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KiRemoveTimer2 @ 0x14037AC60 (KiRemoveTimer2.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x14037C760 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x14037C7E0 (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiTraceCancelTimer2 @ 0x1403B37F0 (KiTraceCancelTimer2.c)
 *     KiUpdateTimer2Flags @ 0x1403B4220 (KiUpdateTimer2Flags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int8 __fastcall KeCancelTimer2(__int64 a1)
{
  unsigned __int8 v1; // si
  unsigned int v2; // r15d
  __int64 v3; // rdi
  __int64 v4; // rbx
  char v5; // r14
  unsigned __int8 CurrentIrql; // bp

  v1 = 0;
  v2 = 0;
  v3 = a1;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 96);
    v5 = 1;
  }
  else
  {
    v5 = 0;
    v4 = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  if ( !KiAcquireTimer2LockUnlessDisabled(v3) )
  {
    if ( KiAcquireTimer2CollectionLockIfInserted(v3) )
    {
      KiRemoveTimer2(v3);
      KxReleaseSpinLock(&KiTimer2CollectionLock);
    }
    else
    {
      if ( (*(_BYTE *)(v3 + 1) & 0xA) == 0 )
        goto LABEL_11;
      v2 = 4;
    }
    v1 = 1;
LABEL_11:
    KiUpdateTimer2Flags(v3, v2, 2 * (v1 ^ 1u));
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( v5 && v1 )
    KiTraceCancelTimer2(
      v3,
      (unsigned __int64)stru_140FC11F0.WaitBlock[2].WaitListEntry.Blink ^ _byteswap_uint64(v3 ^ __ROL8__(
                                                                                                  KiWaitNever ^ v4,
                                                                                                  KiWaitNever)));
  return v1;
}
