/*
 * XREFs of PopAcquireRwLockShared @ 0x140436298
 * Callers:
 *     PpmIdleUpdateSystemLatencyLimit @ 0x14028FBF0 (PpmIdleUpdateSystemLatencyLimit.c)
 *     PopThermalSxEntry @ 0x1404351B4 (PopThermalSxEntry.c)
 *     PopFanSxExit @ 0x1404352D4 (PopFanSxExit.c)
 *     PopThermalTelemetryWorker @ 0x140435450 (PopThermalTelemetryWorker.c)
 *     PopThermalTraceRundownEvents @ 0x14043572C (PopThermalTraceRundownEvents.c)
 *     PopFanSxEntry @ 0x140435910 (PopFanSxEntry.c)
 *     PopThermalSxExit @ 0x140435AC4 (PopThermalSxExit.c)
 *     PoIssueCoalescingNotification @ 0x140435CBC (PoIssueCoalescingNotification.c)
 *     PpmQueryPlatformStateResidency @ 0x1404361AC (PpmQueryPlatformStateResidency.c)
 *     PopThermalUpdateTimerPolicy @ 0x1404363F8 (PopThermalUpdateTimerPolicy.c)
 *     PopBootBatteryStatusWorker @ 0x140770870 (PopBootBatteryStatusWorker.c)
 *     PoQueryPowerLimitAttributes @ 0x1407CA3B0 (PoQueryPowerLimitAttributes.c)
 *     PopBatteryWorker @ 0x1407D7EF0 (PopBatteryWorker.c)
 *     PopCurrentSystemPowerSourceState @ 0x1407D91A8 (PopCurrentSystemPowerSourceState.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x1407DC800 (PopEtProcessEnumSnapshotCallback.c)
 *     PopBSDiagSetTriageData @ 0x1407DC970 (PopBSDiagSetTriageData.c)
 *     PpmEventTraceControlCallback @ 0x1407DCAD0 (PpmEventTraceControlCallback.c)
 *     PopEtGetNextEnergyTracker @ 0x140950D64 (PopEtGetNextEnergyTracker.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x140A3CEBC (PopDirectedDripsUmMarkTestDevices.c)
 *     PoThermalCounterSetCallback @ 0x140A691E0 (PoThermalCounterSetCallback.c)
 *     PopProcessorInformation @ 0x140A843AC (PopProcessorInformation.c)
 *     PpmWmiGetAllData @ 0x140A8C898 (PpmWmiGetAllData.c)
 *     PopCurrentPowerState @ 0x140AB1350 (PopCurrentPowerState.c)
 *     PopBSDiagSetTriageThread @ 0x140ABB370 (PopBSDiagSetTriageThread.c)
 *     PopDiagTraceControlCallback @ 0x140AC0910 (PopDiagTraceControlCallback.c)
 *     PopGetPowerRequestListInfo @ 0x140AEA314 (PopGetPowerRequestListInfo.c)
 *     PopAcquirePowerRequestPushLock @ 0x140AECCA4 (PopAcquirePowerRequestPushLock.c)
 *     PopEtInternerLock @ 0x140AF4790 (PopEtInternerLock.c)
 *     PopBatteryDeviceState @ 0x140AFC434 (PopBatteryDeviceState.c)
 *     PopFanReadFanNoiseInfo @ 0x140B1A538 (PopFanReadFanNoiseInfo.c)
 *     PopTransitionTelemetryOsState @ 0x140B20D08 (PopTransitionTelemetryOsState.c)
 *     PopMeasureEnergyChange @ 0x140B21570 (PopMeasureEnergyChange.c)
 *     PoQueryProcessEnergyTrackingState @ 0x140B2A010 (PoQueryProcessEnergyTrackingState.c)
 *     PopGetEnergyCounter @ 0x140B3B3FC (PopGetEnergyCounter.c)
 *     PopIsDetailedSleepReliabilityDiagEnabled @ 0x140B3CD68 (PopIsDetailedSleepReliabilityDiagEnabled.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x140B3F8C8 (PopThermalZoneUpdateCoolingPolicy.c)
 *     PopEsStartTelemetry @ 0x140B4F63C (PopEsStartTelemetry.c)
 *     PopBatteryEtwCallback @ 0x140B4FC50 (PopBatteryEtwCallback.c)
 *     PopEsEnterSleepShutdown @ 0x140B5CD70 (PopEsEnterSleepShutdown.c)
 *     PopQueryLastStateTransitionInfo @ 0x140BFD1FC (PopQueryLastStateTransitionInfo.c)
 *     PopIsStateTransitionBlockingThread @ 0x140C05B3C (PopIsStateTransitionBlockingThread.c)
 *     PopDiagInitialize @ 0x140CD1950 (PopDiagInitialize.c)
 *     PopFanReportBootStartDevices @ 0x140CD5320 (PopFanReportBootStartDevices.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 */

signed __int64 __fastcall PopAcquireRwLockShared(
        volatile signed __int64 *a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v6; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
  result = _InterlockedCompareExchange64(a1, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)a1, 0, v6, (struct _KTHREAD *)a1);
  if ( v6 )
  {
    result = KiAbpGlobalState;
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v6 + 33) |= 2u;
    else
      *((_BYTE *)v6 + 10) = 1;
  }
  return result;
}
