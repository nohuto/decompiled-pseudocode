/*
 * XREFs of RaidUnitCheckAndAcquirePoFx @ 0x140018BD0
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 *     RaidUnitCompleteRequest @ 0x140017760 (RaidUnitCompleteRequest.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1400194CC (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1400196B8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1400197D8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaUnitScsiMiniportIoctl @ 0x140019FE0 (RaUnitScsiMiniportIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x14001A8BC (RaidPnPPassToMiniPort.c)
 *     RaidUnitCompleteIrpRequest @ 0x140021CC0 (RaidUnitCompleteIrpRequest.c)
 *     RaUnitDecrementOutstandingIrpRequests @ 0x140022CA0 (RaUnitDecrementOutstandingIrpRequests.c)
 *     RaidUnitCompleteResetRequest @ 0x140024200 (RaidUnitCompleteResetRequest.c)
 *     RaUnitStoragePowerIdle @ 0x140024E48 (RaUnitStoragePowerIdle.c)
 *     RaidUnitPoFxIdleComponentFromIoctl @ 0x1400250E0 (RaidUnitPoFxIdleComponentFromIoctl.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x140033520 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x140033610 (StorPortUnitPowerRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep2 @ 0x1400338AC (StorPortUnitPowerRequiredStep2.c)
 *     StorpCSExitTelemetry @ 0x140048DA4 (StorpCSExitTelemetry.c)
 *     RaidUnitPendingIrpDpcRoutine @ 0x140049A40 (RaidUnitPendingIrpDpcRoutine.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x140049E5C (RaidUnitCancelWaitWakeIrp.c)
 *     RaidUnitSubmitResetRequest @ 0x14004CED4 (RaidUnitSubmitResetRequest.c)
 *     StorPortUnitPoFxD3Completion @ 0x140051CE0 (StorPortUnitPoFxD3Completion.c)
 *     RaidAdapterPoFxSetDeviceIdleTimeout @ 0x140053B4C (RaidAdapterPoFxSetDeviceIdleTimeout.c)
 *     StorPortUnitPoFxD0Completion @ 0x14005B504 (StorPortUnitPoFxD0Completion.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x14007ECF0 (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitEndMaintenanceTime @ 0x140080780 (RaidUnitEndMaintenanceTime.c)
 *     RaidUnitIoCoalescingCallback @ 0x140080920 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitMaintenanceTime @ 0x1400809B4 (RaidUnitMaintenanceTime.c)
 *     RaidUnitPowerSettingCallback @ 0x140080B80 (RaidUnitPowerSettingCallback.c)
 *     StorPortUnitDirectedPowerDown @ 0x140081D30 (StorPortUnitDirectedPowerDown.c)
 *     StorPortUnitDirectedPowerDownCompletion @ 0x140081E50 (StorPortUnitDirectedPowerDownCompletion.c)
 *     StorPortUnitDirectedPowerUp @ 0x140082200 (StorPortUnitDirectedPowerUp.c)
 *     StorPortUnitDirectedPowerUpRequestD0 @ 0x1400823C8 (StorPortUnitDirectedPowerUpRequestD0.c)
 *     StorPortUnitPoFxWaitWakeCompletion @ 0x1400825A0 (StorPortUnitPoFxWaitWakeCompletion.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x14009F164 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitStartResetIo @ 0x1400A2224 (RaUnitStartResetIo.c)
 *     RaUnitStoragePowerActive @ 0x1400A39D8 (RaUnitStoragePowerActive.c)
 *     StorpCSEntryTelemetry @ 0x1400B7140 (StorpCSEntryTelemetry.c)
 *     StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged @ 0x1400BC4F8 (StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1400C17D8 (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     RaidUnitCreateDumpData @ 0x140183460 (RaidUnitCreateDumpData.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x14018DF50 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1401B4F4C (RaUnitQueryCapabilitiesIrp.c)
 *     RaUnitRegisterForIdleDetection @ 0x1401B7450 (RaUnitRegisterForIdleDetection.c)
 *     RaWmiPassToMiniPort @ 0x1401B8A40 (RaWmiPassToMiniPort.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidUnitCheckAndAcquirePoFx(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 504) & 0x8000) != 0 )
    return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
  return v1;
}
