/*
 * XREFs of _tlgCreate1Sz_char @ 0x140453678
 * Callers:
 *     MmNotifyProcessInSwapTrigger @ 0x14031284C (MmNotifyProcessInSwapTrigger.c)
 *     PopPlNotifyDeviceFState @ 0x1403B7D3C (PopPlNotifyDeviceFState.c)
 *     PopPlNotifyDeviceDState @ 0x1403BD6EC (PopPlNotifyDeviceDState.c)
 *     MiLogTrimWs @ 0x1403C491C (MiLogTrimWs.c)
 *     KiTraceLogHeteroRundown @ 0x140453274 (KiTraceLogHeteroRundown.c)
 *     EtwTelemetryCoverageReport @ 0x140486B20 (EtwTelemetryCoverageReport.c)
 *     MiLogWsAging @ 0x14050545C (MiLogWsAging.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052FCB0 (ExpTraceLogBadResourceAddress.c)
 *     CarEtwCrashEvent @ 0x14064C4AC (CarEtwCrashEvent.c)
 *     CarEtwWriteBugCheckEvent @ 0x14064C808 (CarEtwWriteBugCheckEvent.c)
 *     CarEtwWriteLiveDumpEvent @ 0x14064C978 (CarEtwWriteLiveDumpEvent.c)
 *     ExpLogSecurePoolCreate @ 0x1406D0820 (ExpLogSecurePoolCreate.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x1406E91C4 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1406E9314 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1406E93EC (MiLogResetPagesCommitRelease.c)
 *     MiLogSystemDllUnmap @ 0x1406FCCA4 (MiLogSystemDllUnmap.c)
 *     MiLogHotPatchRundownForProcess @ 0x14070101C (MiLogHotPatchRundownForProcess.c)
 *     MiLogWsEmptyControl @ 0x14070900C (MiLogWsEmptyControl.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140775CFC (MiLogStrongCodeDriverLoadFailure.c)
 *     NtCreateIoRing @ 0x14079B5F0 (NtCreateIoRing.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x1407D5BA0 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopBatteryWorker @ 0x1407DB910 (PopBatteryWorker.c)
 *     PopPowerAdapterAdd @ 0x1407DCEF0 (PopPowerAdapterAdd.c)
 *     PopPowerAdapterPublishRecState @ 0x1407DD4A0 (PopPowerAdapterPublishRecState.c)
 *     PopPowerAdapterReinitialize @ 0x1407DD830 (PopPowerAdapterReinitialize.c)
 *     MiLogHotPatchOperation @ 0x140877E0C (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x140878288 (MiLogHotPatchOperationStatus.c)
 *     MiLogCreateImageFileMapFailure @ 0x140886120 (MiLogCreateImageFileMapFailure.c)
 *     CmLoadAppKey @ 0x1408B87F4 (CmLoadAppKey.c)
 *     PopSetBatteryDischargingState @ 0x1409C2770 (PopSetBatteryDischargingState.c)
 *     PopBatteryApplyCompositeState @ 0x1409C2820 (PopBatteryApplyCompositeState.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x1409C2EDC (PopDiagTraceBatteryTriggerFlags.c)
 *     PopAccountCbEnergyChange @ 0x1409C2F9C (PopAccountCbEnergyChange.c)
 *     PopDiagTraceExecutePowerAction @ 0x1409F3E60 (PopDiagTraceExecutePowerAction.c)
 *     TtmiLogError @ 0x1409F66D8 (TtmiLogError.c)
 *     PopAccountBatteryEnergyChange @ 0x140B061FC (PopAccountBatteryEnergyChange.c)
 *     EtwpCoverageRecord @ 0x140B0FA48 (EtwpCoverageRecord.c)
 *     VmpTracingEnabledCallback @ 0x140B22330 (VmpTracingEnabledCallback.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140CFA8B8 (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tlgCreate1Sz_char(__int64 a1, const CHAR *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( a2[v2] );
    result = (unsigned int)(v2 + 1);
  }
  else
  {
    a2 = &File;
    result = 1LL;
  }
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = result;
  *(_DWORD *)(a1 + 12) = 0;
  return result;
}
