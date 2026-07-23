/*
 * XREFs of MmGetNumberOfPhysicalPagesForPartitionObject @ 0x1404ED3E0
 * Callers:
 *     CcPartitionTelemetryCallback @ 0x140B1EA80 (CcPartitionTelemetryCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPagesForPartitionObject(unsigned __int16 **a1)
{
  return *(_QWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * **a1) + 22288LL);
}
