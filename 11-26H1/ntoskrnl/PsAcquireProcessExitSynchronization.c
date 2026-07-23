/*
 * XREFs of PsAcquireProcessExitSynchronization @ 0x1409D39E0
 * Callers:
 *     PopEtEnergyTrackerQueryProcessEnergyValues @ 0x1407E0674 (PopEtEnergyTrackerQueryProcessEnergyValues.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1409D1C14 (EtwQueryProcessTelemetryInfo.c)
 *     PopEtEnergyTrackerQueryDxgProcessEnergyValues @ 0x140B70848 (PopEtEnergyTrackerQueryDxgProcessEnergyValues.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 */

__int64 __fastcall PsAcquireProcessExitSynchronization(struct _EX_RUNDOWN_REF *a1)
{
  return ExAcquireRundownProtection_0(a1 + 61) == 0 ? 0xC000010A : 0;
}
