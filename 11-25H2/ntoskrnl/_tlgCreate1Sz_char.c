/*
 * XREFs of _tlgCreate1Sz_char @ 0x140428104
 * Callers:
 *     MmNotifyProcessInSwapTrigger @ 0x1402F2AAC (MmNotifyProcessInSwapTrigger.c)
 *     PopPlNotifyDeviceDState @ 0x1403566D8 (PopPlNotifyDeviceDState.c)
 *     PopPlNotifyDeviceFState @ 0x140357D50 (PopPlNotifyDeviceFState.c)
 *     MiLogTrimWs @ 0x1403C4A28 (MiLogTrimWs.c)
 *     KiTraceLogHeteroRundown @ 0x1404277B0 (KiTraceLogHeteroRundown.c)
 *     MiLogWsAging @ 0x140449E2C (MiLogWsAging.c)
 *     EtwTelemetryCoverageReport @ 0x1404575C0 (EtwTelemetryCoverageReport.c)
 *     MiLogWsEmptyControl @ 0x1404AE0C0 (MiLogWsEmptyControl.c)
 *     CarEtwCrashEvent @ 0x140609830 (CarEtwCrashEvent.c)
 *     CarEtwWriteBugCheckEvent @ 0x140609B98 (CarEtwWriteBugCheckEvent.c)
 *     CarEtwWriteLiveDumpEvent @ 0x140609D08 (CarEtwWriteLiveDumpEvent.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x14065E3F8 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x14065E558 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x14065E640 (MiLogResetPagesCommitRelease.c)
 *     NtCreateIoRing @ 0x14070B060 (NtCreateIoRing.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x140749560 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopPowerAdapterAdd @ 0x14074ECF0 (PopPowerAdapterAdd.c)
 *     PopPowerAdapterPublishRecState @ 0x14074F05C (PopPowerAdapterPublishRecState.c)
 *     MiLogCreateImageFileMapFailure @ 0x1407DC1AC (MiLogCreateImageFileMapFailure.c)
 *     MiLogHotPatchOperation @ 0x1407E399C (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1407E3E1C (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchRundown @ 0x1407E463C (MiLogHotPatchRundown.c)
 *     CmLoadAppKey @ 0x1409122B0 (CmLoadAppKey.c)
 *     TtmiLogError @ 0x140A2DC20 (TtmiLogError.c)
 *     EtwpCoverageRecord @ 0x140A57C90 (EtwpCoverageRecord.c)
 *     PopSetBatteryDischargingState @ 0x140A6B0FC (PopSetBatteryDischargingState.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x140A6B418 (PopDiagTraceBatteryTriggerFlags.c)
 *     VmpTracingEnabledCallback @ 0x140A80370 (VmpTracingEnabledCallback.c)
 *     PopAccountBatteryEnergyChange @ 0x140A948F4 (PopAccountBatteryEnergyChange.c)
 *     PopDiagTraceExecutePowerAction @ 0x140A95BA8 (PopDiagTraceExecutePowerAction.c)
 *     PopAccountCbEnergyChange @ 0x140A97050 (PopAccountCbEnergyChange.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140AA5D1C (MiLogStrongCodeDriverLoadFailure.c)
 *     PopBatteryApplyCompositeState @ 0x140AC1ED8 (PopBatteryApplyCompositeState.c)
 *     PopBatteryWorker @ 0x140AC2900 (PopBatteryWorker.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140C3F6D0 (MiFlushStrongCodeDriverLoadFailures.c)
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
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
