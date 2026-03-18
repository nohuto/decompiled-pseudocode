/*
 * XREFs of MmGetAvailablePagesForPartitionObject @ 0x1404CD960
 * Callers:
 *     CcPartitionTelemetryCallback @ 0x140B1C870 (CcPartitionTelemetryCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetAvailablePagesForPartitionObject(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)a1 + 22464LL);
}
