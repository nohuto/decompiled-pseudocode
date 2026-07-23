/*
 * XREFs of HalpDmaAllocateReservedMappingArray @ 0x140CB6464
 * Callers:
 *     HalpDmaAllocateMappingResources @ 0x140CB6260 (HalpDmaAllocateMappingResources.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     HalpDmaAllocateReservedMapping @ 0x140CB6404 (HalpDmaAllocateReservedMapping.c)
 */

__int64 __fastcall HalpDmaAllocateReservedMappingArray(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  unsigned int v5; // ebx
  __int64 v6; // rdi
  struct _LIST_ENTRY *ReservedMapping; // rax
  __int64 v8; // rax

  if ( ((unsigned __int8)&stru_140E3EAA8.WaitBlockFill7[152] & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *(_OWORD *)&stru_140E3EAA8.WaitBlockFill11[152] = 0LL;
  stru_140E3EAA8.WaitBlock[3].Thread = 0LL;
  stru_140E3EAA8.QueueListEntry.Flink = (struct _LIST_ENTRY *)HalpMmAllocCtxAlloc(a1, 8LL * (unsigned int)a1);
  Flink = stru_140E3EAA8.QueueListEntry.Flink;
  if ( stru_140E3EAA8.QueueListEntry.Flink )
  {
    v5 = 0;
    if ( a2 )
    {
      v6 = 0LL;
      do
      {
        ReservedMapping = (struct _LIST_ENTRY *)HalpDmaAllocateReservedMapping(v3);
        Flink = stru_140E3EAA8.QueueListEntry.Flink;
        *(struct _LIST_ENTRY **)((char *)&stru_140E3EAA8.QueueListEntry.Flink->Flink + v6) = ReservedMapping;
        if ( !ReservedMapping )
          break;
        RtlpInterlockedPushEntrySList(
          (PSLIST_HEADER)&stru_140E3EAA8.WaitBlockFill11[152],
          (PSLIST_ENTRY)ReservedMapping);
        Flink = stru_140E3EAA8.QueueListEntry.Flink;
        ++v5;
        v8 = *(__int64 *)((char *)&stru_140E3EAA8.QueueListEntry.Flink->Flink + v6);
        v6 += 8LL;
        *(_DWORD *)(v8 + 28) = 1;
      }
      while ( v5 < a2 );
      if ( v5 )
      {
        *(_DWORD *)&stru_140E3EAA8.WaitBlockFill11[148] = v5;
        return 0LL;
      }
    }
    HalpMmAllocCtxFree(v3, (__int64)Flink);
  }
  return 3221225626LL;
}
