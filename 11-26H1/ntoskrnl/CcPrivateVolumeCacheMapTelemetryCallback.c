/*
 * XREFs of CcPrivateVolumeCacheMapTelemetryCallback @ 0x140AFF450
 * Callers:
 *     <none>
 * Callees:
 *     CcGetActiveWorkerCountInPartition @ 0x1403E4178 (CcGetActiveWorkerCountInPartition.c)
 */

char __fastcall CcPrivateVolumeCacheMapTelemetryCallback(__int64 a1, __int64 a2)
{
  ++EmpParseLock.WaitBlock[0].SparePtr;
  EmpParseLock.WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)((char *)EmpParseLock.WaitBlock[1].WaitListEntry.Flink
                                                                       + *(unsigned int *)(a2 + 912));
  EmpParseLock.WaitBlock[1].WaitListEntry.Blink = (struct _LIST_ENTRY *)((char *)EmpParseLock.WaitBlock[1].WaitListEntry.Blink
                                                                       + *(_QWORD *)(a2 + 992));
  EmpParseLock.WaitBlock[1].Object = (char *)EmpParseLock.WaitBlock[1].Object + *(unsigned int *)(a2 + 776);
  EmpParseLock.WaitBlock[2].WaitListEntry.Flink = (struct _LIST_ENTRY *)((char *)EmpParseLock.WaitBlock[2].WaitListEntry.Flink
                                                                       + *(_QWORD *)(a2 + 1080));
  EmpParseLock.WaitBlock[2].WaitListEntry.Blink = (struct _LIST_ENTRY *)((char *)EmpParseLock.WaitBlock[2].WaitListEntry.Blink
                                                                       + *(_QWORD *)(a2 + 1088));
  CcGetActiveWorkerCountInPartition(a1, a2, &EmpParseLock.WaitBlock[1].SparePtr);
  return 1;
}
