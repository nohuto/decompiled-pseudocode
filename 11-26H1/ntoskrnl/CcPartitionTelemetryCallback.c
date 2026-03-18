/*
 * XREFs of CcPartitionTelemetryCallback @ 0x140B1C870
 * Callers:
 *     <none>
 * Callees:
 *     CcForEachPrivateVolumeCacheMap @ 0x1403E0938 (CcForEachPrivateVolumeCacheMap.c)
 *     CcGetActiveWorkerCountInPartition @ 0x1403E4178 (CcGetActiveWorkerCountInPartition.c)
 *     MmGetAvailablePagesForPartitionObject @ 0x1404CD960 (MmGetAvailablePagesForPartitionObject.c)
 *     MmGetNumberOfPhysicalPagesForPartitionObject @ 0x1404F3E00 (MmGetNumberOfPhysicalPagesForPartitionObject.c)
 */

char __fastcall CcPartitionTelemetryCallback(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // r9

  ++EmpParseLock.WaitBlock[0].Object;
  *(_QWORD *)&EmpParseLock.WaitBlockFill11[64] += MmGetAvailablePagesForPartitionObject(*(_QWORD *)(a1 + 8));
  EmpParseLock.WaitBlock[1].Thread = (struct _KTHREAD *)((char *)EmpParseLock.WaitBlock[1].Thread
                                                       + MmGetNumberOfPhysicalPagesForPartitionObject(*(unsigned __int16 ***)(v1 + 8)));
  if ( CcEnablePerVolumeLazyWriter )
  {
    CcForEachPrivateVolumeCacheMap(v2);
  }
  else
  {
    EmpParseLock.WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)((char *)EmpParseLock.WaitBlock[1].WaitListEntry.Flink
                                                                         + *(unsigned int *)(v2 + 976));
    EmpParseLock.WaitBlock[1].WaitListEntry.Blink = (struct _LIST_ENTRY *)((char *)EmpParseLock.WaitBlock[1].WaitListEntry.Blink
                                                                         + *(_QWORD *)(v2 + 1056));
    EmpParseLock.WaitBlock[1].Object = (char *)EmpParseLock.WaitBlock[1].Object + *(unsigned int *)(v2 + 840);
    EmpParseLock.WaitBlock[2].WaitListEntry.Flink = (struct _LIST_ENTRY *)((char *)EmpParseLock.WaitBlock[2].WaitListEntry.Flink
                                                                         + *(_QWORD *)(v2 + 1144));
    EmpParseLock.WaitBlock[2].WaitListEntry.Blink = (struct _LIST_ENTRY *)((char *)EmpParseLock.WaitBlock[2].WaitListEntry.Blink
                                                                         + *(_QWORD *)(v2 + 1152));
    CcGetActiveWorkerCountInPartition(v2, 0LL, &EmpParseLock.WaitBlock[1].SparePtr);
  }
  return 1;
}
