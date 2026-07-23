/*
 * XREFs of CcPrivateVolumeCacheMapTelemetryCallback @ 0x140B011D0
 * Callers:
 *     <none>
 * Callees:
 *     CcGetActiveWorkerCountInPartition @ 0x1403E7368 (CcGetActiveWorkerCountInPartition.c)
 */

char __fastcall CcPrivateVolumeCacheMapTelemetryCallback(__int64 a1, __int64 a2)
{
  ++EmpParseLock.WaitBlock[1].WaitListEntry.Flink;
  EmpParseLock.WaitBlock[1].WaitListEntry.Blink = (struct _LIST_ENTRY *)((char *)EmpParseLock.WaitBlock[1].WaitListEntry.Blink
                                                                       + *(unsigned int *)(a2 + 912));
  *(_QWORD *)&EmpParseLock.WaitBlockFill11[64] += *(_QWORD *)(a2 + 992);
  EmpParseLock.WaitBlock[1].SparePtr = (char *)EmpParseLock.WaitBlock[1].SparePtr + *(unsigned int *)(a2 + 776);
  EmpParseLock.WaitBlock[2].WaitListEntry.Blink = (struct _LIST_ENTRY *)((char *)EmpParseLock.WaitBlock[2].WaitListEntry.Blink
                                                                       + *(_QWORD *)(a2 + 1080));
  *(_QWORD *)&EmpParseLock.WaitBlockFill11[112] += *(_QWORD *)(a2 + 1088);
  CcGetActiveWorkerCountInPartition(a1, a2, &EmpParseLock.WaitBlock[2].WaitListEntry.Flink);
  return 1;
}
