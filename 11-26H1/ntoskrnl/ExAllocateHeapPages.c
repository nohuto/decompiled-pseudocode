/*
 * XREFs of ExAllocateHeapPages @ 0x1403480E0
 * Callers:
 *     ExpResizeBigPageTable @ 0x14029A9B8 (ExpResizeBigPageTable.c)
 *     ExGetBigPoolInfo @ 0x140348148 (ExGetBigPoolInfo.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1403CA7E4 (ExpInsertPoolTrackerExpansion.c)
 *     ExpInitializePoolTrackerTable @ 0x1406D013C (ExpInitializePoolTrackerTable.c)
 * Callees:
 *     RtlpHpAllocateHeapBackend @ 0x14034D110 (RtlpHpAllocateHeapBackend.c)
 *     RtlpHpAllocateHeap @ 0x140399800 (RtlpHpAllocateHeap.c)
 */

__int64 __fastcall ExAllocateHeapPages(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rcx

  v2 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  v3 = *(&stru_140E6BFE8.QuantumTarget + 1048 * (v2 < HIDWORD(stru_140E6BFE8.Header.WaitListHead.Flink) ? v2 : 0));
  if ( a2 >= *(unsigned int *)(v3 + 528) )
    return RtlpHpAllocateHeap(v3, a2, 0LL);
  else
    return RtlpHpAllocateHeapBackend(v3, a2, a2, 0LL);
}
