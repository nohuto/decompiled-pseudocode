/*
 * XREFs of HalpDmaAllocateEmergencyResources @ 0x140CB6140
 * Callers:
 *     HalpDmaInit @ 0x140CB6740 (HalpDmaInit.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     MmAllocateMappingAddress @ 0x140AF4800 (MmAllocateMappingAddress.c)
 *     MmFreeMappingAddress @ 0x140B14CF0 (MmFreeMappingAddress.c)
 */

__int64 __fastcall HalpDmaAllocateEmergencyResources(__int64 a1)
{
  __int64 v1; // rcx
  struct _KTHREAD *Thread; // rcx
  void *Object; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  stru_140E3EAA8.Spare18 = HalpMmAllocCtxAlloc(a1, 56LL);
  if ( !stru_140E3EAA8.Spare18 )
    return 3221225626LL;
  stru_140E3EAA8.WaitBlock[2].Thread = (struct _KTHREAD *)HalpMmAllocCtxAlloc(v1, 56LL);
  Thread = stru_140E3EAA8.WaitBlock[2].Thread;
  if ( !stru_140E3EAA8.WaitBlock[2].Thread )
  {
    Object = stru_140E3EAA8.WaitBlock[3].Object;
LABEL_5:
    HalpMmAllocCtxFree((__int64)Thread, (__int64)Object);
    return 3221225626LL;
  }
  v5 = stru_140E3EAA8.WaitBlock[3].Object;
  *(_DWORD *)(stru_140E3EAA8.Spare18 + 8) = 56;
  *v5 = 0LL;
  v5[4] = 0LL;
  v5[5] = 4096LL;
  LODWORD(Thread->Header.WaitListHead.Flink) = 56;
  *(_QWORD *)&Thread->Header.Lock = 0LL;
  Thread->QuantumTarget = 0LL;
  Thread->InitialStack = (void *)4096;
  *((_WORD *)v5 + 5) |= 2u;
  WORD1(Thread->Header.WaitListHead.Flink) |= 2u;
  stru_140E3EAA8.WaitBlock[2].SparePtr = MmAllocateMappingAddress(0x1000uLL, 0x446C6148u);
  if ( !stru_140E3EAA8.WaitBlock[2].SparePtr )
  {
    HalpMmAllocCtxFree(v6, (__int64)stru_140E3EAA8.WaitBlock[3].Object);
    Object = stru_140E3EAA8.WaitBlock[2].Thread;
    goto LABEL_5;
  }
  stru_140E3EAA8.LastXStateSaveDebugInfo = (unsigned __int64)MmAllocateMappingAddress(0x1000uLL, 0x446C6148u);
  if ( !stru_140E3EAA8.LastXStateSaveDebugInfo )
  {
    HalpMmAllocCtxFree(v7, (__int64)stru_140E3EAA8.WaitBlock[3].Object);
    HalpMmAllocCtxFree(v8, (__int64)stru_140E3EAA8.WaitBlock[2].Thread);
    MmFreeMappingAddress(stru_140E3EAA8.WaitBlock[2].SparePtr, 0x446C6148u);
    return 3221225626LL;
  }
  stru_140E3EAA8.QueueListEntry.Blink = 0LL;
  return 0LL;
}
