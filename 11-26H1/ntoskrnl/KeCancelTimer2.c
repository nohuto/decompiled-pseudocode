/*
 * XREFs of KeCancelTimer2 @ 0x1403AA4E0
 * Callers:
 *     ExpSetTimerObject2 @ 0x1403A9988 (ExpSetTimerObject2.c)
 *     ExpShutdownWorkerFactory @ 0x1403A9ED0 (ExpShutdownWorkerFactory.c)
 *     ExCancelTimer @ 0x1403AA0D0 (ExCancelTimer.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x1404F15DC (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x1405079A8 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopThermalEventTransitionEnableDeepSleep @ 0x140528ED8 (PopThermalEventTransitionEnableDeepSleep.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405F8980 (KiForceParkDutyCycleDpcCallback.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x140603B60 (PopDirectedDripsStartDisengageTimer.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140607C84 (PopThermalUpdateTelemetryClientCount.c)
 *     DifKeCancelTimer2Wrapper @ 0x140660690 (DifKeCancelTimer2Wrapper.c)
 *     PopPowerRequestDebounceTimerWorker @ 0x1407C9450 (PopPowerRequestDebounceTimerWorker.c)
 *     PopNetLowPowerEpochCallback @ 0x1407DA660 (PopNetLowPowerEpochCallback.c)
 *     PopNetResiliencyPhaseStateChanged @ 0x1407DA8C0 (PopNetResiliencyPhaseStateChanged.c)
 *     PopAdaptiveStandbyCheckHibernateBudgetAction @ 0x1407DE80C (PopAdaptiveStandbyCheckHibernateBudgetAction.c)
 *     PopAdaptiveStandbySessionStop @ 0x1407E05F8 (PopAdaptiveStandbySessionStop.c)
 *     ExStartStopWorkQueueProvider @ 0x14083F6BC (ExStartStopWorkQueueProvider.c)
 *     ExpPartitionDestroy @ 0x14083FAC8 (ExpPartitionDestroy.c)
 *     PopPowerRequestExecutionRequiredSettingCallback @ 0x1409462B0 (PopPowerRequestExecutionRequiredSettingCallback.c)
 *     EtwpDisableKernelTrace @ 0x14095A8C0 (EtwpDisableKernelTrace.c)
 *     PopPowerRequestNotifySystemIdleStateChanged @ 0x140A3C238 (PopPowerRequestNotifySystemIdleStateChanged.c)
 *     PpmCheckReInit @ 0x140A9D410 (PpmCheckReInit.c)
 *     PopPowerAggregatorDozeTimerDisarm @ 0x140B2BCBC (PopPowerAggregatorDozeTimerDisarm.c)
 *     EtwpCoverageFlushPending @ 0x140B433F0 (EtwpCoverageFlushPending.c)
 *     PopDripsWatchdogStopTimer @ 0x140B51AE8 (PopDripsWatchdogStopTimer.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KiRemoveTimer2 @ 0x140378EB0 (KiRemoveTimer2.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x14037A9B0 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x14037AA30 (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiTraceCancelTimer2 @ 0x1403A9BE0 (KiTraceCancelTimer2.c)
 *     KiUpdateTimer2Flags @ 0x1403AA610 (KiUpdateTimer2Flags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
      (unsigned __int64)stru_140FC01F0.WaitBlock[2].WaitListEntry.Flink ^ _byteswap_uint64(v3 ^ __ROL8__(
                                                                                                  KiWaitNever ^ v4,
                                                                                                  KiWaitNever)));
  return v1;
}
