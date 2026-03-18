/*
 * XREFs of ObpInitStackAndObjectTables @ 0x1407C4BE8
 * Callers:
 *     ObpStartRuntimeStackTraceEx @ 0x1407C53D4 (ObpStartRuntimeStackTraceEx.c)
 *     ObpInitStackTrace @ 0x140CCDE7C (ObpInitStackTrace.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     ObpTraceAllocateMemory @ 0x14052F738 (ObpTraceAllocateMemory.c)
 *     ObpTraceFreeMemory @ 0x140530A70 (ObpTraceFreeMemory.c)
 *     RtlStackDbContextCleanup @ 0x140623170 (RtlStackDbContextCleanup.c)
 *     RtlStackDbContextInitialize @ 0x140623368 (RtlStackDbContextInitialize.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x140730D10 (RtlpInterlockedFlushSList.c)
 */

__int64 ObpInitStackAndObjectTables()
{
  unsigned int v0; // ebx
  struct _SLIST_ENTRY *Memory; // rax
  PSLIST_ENTRY v2; // rbx
  PSLIST_ENTRY v3; // rcx

  RtlStackDbContextInitialize();
  qword_140F13228 = (PVOID)ObpTraceAllocateMemory(3208LL);
  if ( qword_140F13228 )
  {
    if ( ((unsigned __int8)&ObpWorkItemFreeList & 0xF) != 0 )
      RtlRaiseStatus(-2147483646);
    v0 = 0;
    ObpWorkItemFreeList = 0LL;
    while ( 1 )
    {
      if ( v0 >= 0x1F4 )
        return 0LL;
      Memory = (struct _SLIST_ENTRY *)ObpTraceAllocateMemory(192LL);
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
  if ( qword_140F13228 )
    ObpTraceFreeMemory(qword_140F13228);
  RtlStackDbContextCleanup();
  return 3221225495LL;
}
