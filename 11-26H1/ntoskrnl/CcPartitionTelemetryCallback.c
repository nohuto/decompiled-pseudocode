/*
 * XREFs of CcPartitionTelemetryCallback @ 0x140B1EA80
 * Callers:
 *     <none>
 * Callees:
 *     CcForEachPrivateVolumeCacheMap @ 0x1403E3B28 (CcForEachPrivateVolumeCacheMap.c)
 *     CcGetActiveWorkerCountInPartition @ 0x1403E7368 (CcGetActiveWorkerCountInPartition.c)
 *     MmGetAvailablePagesForPartitionObject @ 0x1404C7390 (MmGetAvailablePagesForPartitionObject.c)
 *     MmGetNumberOfPhysicalPagesForPartitionObject @ 0x1404ED3E0 (MmGetNumberOfPhysicalPagesForPartitionObject.c)
 */

char __fastcall CcPartitionTelemetryCallback(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // r9

  ++EmpParseLock.WaitBlock[0].SparePtr;
  EmpParseLock.WaitBlock[1].Thread = (struct _KTHREAD *)((char *)EmpParseLock.WaitBlock[1].Thread
                                                       + MmGetAvailablePagesForPartitionObject(*(_QWORD *)(a1 + 8)));
  EmpParseLock.WaitBlock[1].Object = (char *)EmpParseLock.WaitBlock[1].Object
                                   + MmGetNumberOfPhysicalPagesForPartitionObject(*(unsigned __int16 ***)(v1 + 8));
  if ( CcEnablePerVolumeLazyWriter )
  {
    CcForEachPrivateVolumeCacheMap(v2);
  }
  else
  {
    EmpParseLock.WaitBlock[1].WaitListEntry.Blink = (struct _LIST_ENTRY *)((char *)EmpParseLock.WaitBlock[1].WaitListEntry.Blink
                                                                         + *(unsigned int *)(v2 + 976));
    *(_QWORD *)&EmpParseLock.WaitBlockFill11[64] += *(_QWORD *)(v2 + 1056);
    EmpParseLock.WaitBlock[1].SparePtr = (char *)EmpParseLock.WaitBlock[1].SparePtr + *(unsigned int *)(v2 + 840);
    EmpParseLock.WaitBlock[2].WaitListEntry.Blink = (struct _LIST_ENTRY *)((char *)EmpParseLock.WaitBlock[2].WaitListEntry.Blink
                                                                         + *(_QWORD *)(v2 + 1144));
    *(_QWORD *)&EmpParseLock.WaitBlockFill11[112] += *(_QWORD *)(v2 + 1152);
    CcGetActiveWorkerCountInPartition(v2, 0LL, &EmpParseLock.WaitBlock[2].WaitListEntry.Flink);
  }
  return 1;
}
