/*
 * XREFs of ObpInitStackAndObjectTables @ 0x1407C7C48
 * Callers:
 *     ObpStartRuntimeStackTraceEx @ 0x1407C8434 (ObpStartRuntimeStackTraceEx.c)
 *     ObpInitStackTrace @ 0x140CD3FDC (ObpInitStackTrace.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     ObpTraceAllocateMemory @ 0x140531C58 (ObpTraceAllocateMemory.c)
 *     ObpTraceFreeMemory @ 0x140532F70 (ObpTraceFreeMemory.c)
 *     RtlStackDbContextCleanup @ 0x1406261C0 (RtlStackDbContextCleanup.c)
 *     RtlStackDbContextInitialize @ 0x1406263B8 (RtlStackDbContextInitialize.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1407358E0 (RtlpInterlockedFlushSList.c)
 */

__int64 ObpInitStackAndObjectTables()
{
  unsigned int v0; // ebx
  _SLIST_ENTRY *Memory; // rax
  PSLIST_ENTRY v2; // rbx
  PSLIST_ENTRY v3; // rcx

  RtlStackDbContextInitialize();
  ObpStackTraceLock.SavedApcState.ApcListHead[1].Flink = (struct _LIST_ENTRY *)ObpTraceAllocateMemory(3208LL);
  if ( ObpStackTraceLock.SavedApcState.ApcListHead[1].Flink )
  {
    if ( ((unsigned __int8)&ObpWorkItemFreeList & 0xF) != 0 )
      RtlRaiseStatus(-2147483646);
    v0 = 0;
    ObpWorkItemFreeList = 0LL;
    while ( 1 )
    {
      if ( v0 >= 0x1F4 )
        return 0LL;
      Memory = (_SLIST_ENTRY *)ObpTraceAllocateMemory(192LL);
      if ( !Memory )
        break;
      RtlpInterlockedPushEntrySList(&ObpWorkItemFreeList, Memory);
      ++v0;
    }
    v2 = RtlpInterlockedFlushSList(&ObpWorkItemFreeList);
    while ( v2 )
    {
      v3 = v2;
      v2 = v2->Next;
      ObpTraceFreeMemory(v3);
    }
  }
  if ( ObpStackTraceLock.SavedApcState.ApcListHead[1].Flink )
    ObpTraceFreeMemory(ObpStackTraceLock.SavedApcState.ApcListHead[1].Flink);
  RtlStackDbContextCleanup();
  return 3221225495LL;
}
