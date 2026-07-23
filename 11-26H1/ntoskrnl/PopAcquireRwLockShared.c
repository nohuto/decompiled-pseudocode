/*
 * XREFs of PopAcquireRwLockShared @ 0x140424A28
 * Callers:
 *     PpmIdleUpdateSystemLatencyLimit @ 0x14028F150 (PpmIdleUpdateSystemLatencyLimit.c)
 *     PopThermalSxEntry @ 0x14042408C (PopThermalSxEntry.c)
 *     PopFanSxExit @ 0x14042446C (PopFanSxExit.c)
 *     PopThermalTelemetryWorker @ 0x1404245E0 (PopThermalTelemetryWorker.c)
 *     PopThermalTraceRundownEvents @ 0x1404246B4 (PopThermalTraceRundownEvents.c)
 *     PopFanSxEntry @ 0x14042474C (PopFanSxEntry.c)
 *     PoIssueCoalescingNotification @ 0x1404247C8 (PoIssueCoalescingNotification.c)
 *     PpmQueryPlatformStateResidency @ 0x14042493C (PpmQueryPlatformStateResidency.c)
 *     PopThermalUpdateTimerPolicy @ 0x140425390 (PopThermalUpdateTimerPolicy.c)
 *     PopThermalSxExit @ 0x140516740 (PopThermalSxExit.c)
 *     PopBootBatteryStatusWorker @ 0x140773870 (PopBootBatteryStatusWorker.c)
 *     PoQueryPowerLimitAttributes @ 0x1407CD450 (PoQueryPowerLimitAttributes.c)
 *     PopBatteryWorker @ 0x1407DB910 (PopBatteryWorker.c)
 *     PopCurrentSystemPowerSourceState @ 0x1407DCBC8 (PopCurrentSystemPowerSourceState.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x1407E0A20 (PopEtProcessEnumSnapshotCallback.c)
 *     PopBSDiagSetTriageData @ 0x1407E0B90 (PopBSDiagSetTriageData.c)
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 *     PopEtGetNextEnergyTracker @ 0x1409CC6A4 (PopEtGetNextEnergyTracker.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x1409F88DC (PopDirectedDripsUmMarkTestDevices.c)
 *     PoThermalCounterSetCallback @ 0x140A761B0 (PoThermalCounterSetCallback.c)
 *     PopProcessorInformation @ 0x140A89700 (PopProcessorInformation.c)
 *     PpmWmiGetAllData @ 0x140A91568 (PpmWmiGetAllData.c)
 *     PopCurrentPowerState @ 0x140AAF340 (PopCurrentPowerState.c)
 *     PopBSDiagSetTriageThread @ 0x140ABC830 (PopBSDiagSetTriageThread.c)
 *     PopDiagTraceControlCallback @ 0x140AC29B0 (PopDiagTraceControlCallback.c)
 *     PopGetPowerRequestListInfo @ 0x140AECE04 (PopGetPowerRequestListInfo.c)
 *     PopAcquirePowerRequestPushLock @ 0x140AEFCB4 (PopAcquirePowerRequestPushLock.c)
 *     PopEtInternerLock @ 0x140AF6E30 (PopEtInternerLock.c)
 *     PopBatteryDeviceState @ 0x140AFDFA8 (PopBatteryDeviceState.c)
 *     PopFanReadFanNoiseInfo @ 0x140B1C7E8 (PopFanReadFanNoiseInfo.c)
 *     PopTransitionTelemetryOsState @ 0x140B23108 (PopTransitionTelemetryOsState.c)
 *     PopMeasureEnergyChange @ 0x140B23970 (PopMeasureEnergyChange.c)
 *     PoQueryProcessEnergyTrackingState @ 0x140B2C090 (PoQueryProcessEnergyTrackingState.c)
 *     PopGetEnergyCounter @ 0x140B3D67C (PopGetEnergyCounter.c)
 *     PopIsDetailedSleepReliabilityDiagEnabled @ 0x140B3EFE8 (PopIsDetailedSleepReliabilityDiagEnabled.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x140B418F8 (PopThermalZoneUpdateCoolingPolicy.c)
 *     PopEsStartTelemetry @ 0x140B51ECC (PopEsStartTelemetry.c)
 *     PopBatteryEtwCallback @ 0x140B524E0 (PopBatteryEtwCallback.c)
 *     PopEsEnterSleepShutdown @ 0x140B5FEF0 (PopEsEnterSleepShutdown.c)
 *     PopPowerAggregatorHandleModernStandbyIntent @ 0x140B761C0 (PopPowerAggregatorHandleModernStandbyIntent.c)
 *     PopQueryLastStateTransitionInfo @ 0x140C031FC (PopQueryLastStateTransitionInfo.c)
 *     PopIsStateTransitionBlockingThread @ 0x140C0BD4C (PopIsStateTransitionBlockingThread.c)
 *     PopDiagInitialize @ 0x140CD7AF8 (PopDiagInitialize.c)
 *     PopFanReportBootStartDevices @ 0x140CDB6C0 (PopFanReportBootStartDevices.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
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
