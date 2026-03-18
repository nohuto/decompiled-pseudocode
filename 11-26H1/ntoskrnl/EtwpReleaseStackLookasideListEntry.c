/*
 * XREFs of EtwpReleaseStackLookasideListEntry @ 0x14047A00C
 * Callers:
 *     EtwpTraceStackWalk @ 0x14020A5C0 (EtwpTraceStackWalk.c)
 *     EtwpEventWriteFull @ 0x14021336C (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140B7D098 (EtwpWriteUserEvent.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall EtwpReleaseStackLookasideListEntry(PSLIST_ENTRY ListEntry)
{
  unsigned int Next; // ecx
  __int64 v3; // rcx
  _SINGLE_LIST_ENTRY *p_IoSelfBoostsEntry; // rcx

  Next = (unsigned int)ListEntry[1].Next;
  if ( Next == -1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)&stru_140E28440.PriorityFloorCounts[20]);
    p_IoSelfBoostsEntry = &stru_140E28440.IoSelfBoostsEntry;
  }
  else
  {
    if ( Next >= (unsigned int)KeNumberProcessors_0 )
    {
      v3 = 0LL;
    }
    else
    {
      _mm_lfence();
      v3 = KiProcessorBlock[Next];
    }
    p_IoSelfBoostsEntry = (_SINGLE_LIST_ENTRY *)(*(_QWORD *)(v3 + 35816) + 384LL);
  }
  return RtlpInterlockedPushEntrySList((PSLIST_HEADER)p_IoSelfBoostsEntry, ListEntry);
}
