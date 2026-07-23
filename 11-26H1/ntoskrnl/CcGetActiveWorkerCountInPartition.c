/*
 * XREFs of CcGetActiveWorkerCountInPartition @ 0x1403E7368
 * Callers:
 *     CcPrivateVolumeCacheMapTelemetryCallback @ 0x140B011D0 (CcPrivateVolumeCacheMapTelemetryCallback.c)
 *     CcPartitionTelemetryCallback @ 0x140B1EA80 (CcPartitionTelemetryCallback.c)
 * Callees:
 *     CcForEachNumaNode @ 0x1403E7398 (CcForEachNumaNode.c)
 */

char __fastcall CcGetActiveWorkerCountInPartition(__int64 a1, __int64 a2, _QWORD *a3)
{
  *a3 = 0LL;
  CcForEachNumaNode(CcGetActiveWorkerCountPerNode, a1, a2, a3);
  return 1;
}
