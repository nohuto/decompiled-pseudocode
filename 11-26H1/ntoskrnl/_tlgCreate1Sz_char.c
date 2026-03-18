/*
 * XREFs of _tlgCreate1Sz_char @ 0x1403EEB48
 * Callers:
 *     MmNotifyProcessInSwapTrigger @ 0x1402C7BAC (MmNotifyProcessInSwapTrigger.c)
 *     PopPlNotifyDeviceFState @ 0x1403AE02C (PopPlNotifyDeviceFState.c)
 *     PopPlNotifyDeviceDState @ 0x1403B39DC (PopPlNotifyDeviceDState.c)
 *     MiLogTrimWs @ 0x1403BAAAC (MiLogTrimWs.c)
 *     KiTraceLogHeteroRundown @ 0x1403EE744 (KiTraceLogHeteroRundown.c)
 *     EtwTelemetryCoverageReport @ 0x14048CFE0 (EtwTelemetryCoverageReport.c)
 *     MiLogWsAging @ 0x14050B9EC (MiLogWsAging.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052D790 (ExpTraceLogBadResourceAddress.c)
 *     CarEtwCrashEvent @ 0x1406488CC (CarEtwCrashEvent.c)
 *     CarEtwWriteBugCheckEvent @ 0x140648C28 (CarEtwWriteBugCheckEvent.c)
 *     CarEtwWriteLiveDumpEvent @ 0x140648D98 (CarEtwWriteLiveDumpEvent.c)
 *     ExpLogSecurePoolCreate @ 0x1406CC7F0 (ExpLogSecurePoolCreate.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x1406E4514 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1406E4664 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1406E473C (MiLogResetPagesCommitRelease.c)
 *     MiLogSystemDllUnmap @ 0x1406F7FD4 (MiLogSystemDllUnmap.c)
 *     MiLogHotPatchRundownForProcess @ 0x1406FC34C (MiLogHotPatchRundownForProcess.c)
 *     MiLogWsEmptyControl @ 0x14070433C (MiLogWsEmptyControl.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140772CFC (MiLogStrongCodeDriverLoadFailure.c)
 *     NtCreateIoRing @ 0x140798AC0 (NtCreateIoRing.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x1407D2B34 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopBatteryWorker @ 0x1407D7EF0 (PopBatteryWorker.c)
 *     PopPowerAdapterAdd @ 0x1407D94D0 (PopPowerAdapterAdd.c)
 *     PopPowerAdapterPublishRecState @ 0x1407D9848 (PopPowerAdapterPublishRecState.c)
 *     MiLogHotPatchOperation @ 0x140871AAC (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x140871F28 (MiLogHotPatchOperationStatus.c)
 *     MiLogCreateImageFileMapFailure @ 0x14087FD20 (MiLogCreateImageFileMapFailure.c)
 *     CmLoadAppKey @ 0x1408B2250 (CmLoadAppKey.c)
 *     PopSetBatteryDischargingState @ 0x140946E00 (PopSetBatteryDischargingState.c)
 *     PopBatteryApplyCompositeState @ 0x140946EB0 (PopBatteryApplyCompositeState.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x14094756C (PopDiagTraceBatteryTriggerFlags.c)
 *     PopAccountCbEnergyChange @ 0x14094762C (PopAccountCbEnergyChange.c)
 *     PopDiagTraceExecutePowerAction @ 0x140A382A0 (PopDiagTraceExecutePowerAction.c)
 *     TtmiLogError @ 0x140A3AAD8 (TtmiLogError.c)
 *     PopAccountBatteryEnergyChange @ 0x140B045EC (PopAccountBatteryEnergyChange.c)
 *     EtwpCoverageRecord @ 0x140B0E2F8 (EtwpCoverageRecord.c)
 *     VmpTracingEnabledCallback @ 0x140B1FF10 (VmpTracingEnabledCallback.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140CF4538 (MiFlushStrongCodeDriverLoadFailures.c)
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
