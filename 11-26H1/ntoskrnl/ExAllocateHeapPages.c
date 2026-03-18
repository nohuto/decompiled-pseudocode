/*
 * XREFs of ExAllocateHeapPages @ 0x140346060
 * Callers:
 *     ExpResizeBigPageTable @ 0x14029B458 (ExpResizeBigPageTable.c)
 *     ExGetBigPoolInfo @ 0x1403460C8 (ExGetBigPoolInfo.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1403C08E4 (ExpInsertPoolTrackerExpansion.c)
 *     ExpInitializePoolTrackerTable @ 0x1406CC10C (ExpInitializePoolTrackerTable.c)
 * Callees:
 *     RtlpHpAllocateHeapBackend @ 0x14034B090 (RtlpHpAllocateHeapBackend.c)
 *     RtlpHpAllocateHeap @ 0x140397A80 (RtlpHpAllocateHeap.c)
 */

__int64 __fastcall ExAllocateHeapPages(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rcx

  v2 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  v3 = *(&stru_140E6BCE8.QuantumTarget + 1048 * (v2 < HIDWORD(stru_140E6BCE8.Header.WaitListHead.Flink) ? v2 : 0));
  if ( a2 >= *(unsigned int *)(v3 + 528) )
    return RtlpHpAllocateHeap(v3, a2, 0LL);
  else
    return RtlpHpAllocateHeapBackend(v3, a2, a2, 0LL);
}
