/*
 * XREFs of MmGetNumberOfPhysicalPagesForPartitionObject @ 0x1404F3E00
 * Callers:
 *     CcPartitionTelemetryCallback @ 0x140B1C870 (CcPartitionTelemetryCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPagesForPartitionObject(unsigned __int16 **a1)
{
  return *(_QWORD *)(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * **a1) + 22288LL);
}
