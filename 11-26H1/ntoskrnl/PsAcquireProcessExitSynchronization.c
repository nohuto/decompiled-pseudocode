/*
 * XREFs of PsAcquireProcessExitSynchronization @ 0x140971910
 * Callers:
 *     PopEtEnergyTrackerQueryProcessEnergyValues @ 0x1407DC454 (PopEtEnergyTrackerQueryProcessEnergyValues.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14096F92C (EtwQueryProcessTelemetryInfo.c)
 *     PopEtEnergyTrackerQueryDxgProcessEnergyValues @ 0x140B6D478 (PopEtEnergyTrackerQueryDxgProcessEnergyValues.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 */

__int64 __fastcall PsAcquireProcessExitSynchronization(struct _EX_RUNDOWN_REF *a1)
{
  return ExAcquireRundownProtection_0(a1 + 61) == 0 ? 0xC000010A : 0;
}
