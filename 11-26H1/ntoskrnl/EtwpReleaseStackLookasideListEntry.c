/*
 * XREFs of EtwpReleaseStackLookasideListEntry @ 0x14047397C
 * Callers:
 *     EtwpTraceStackWalk @ 0x14020A6A0 (EtwpTraceStackWalk.c)
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140B85DAC (EtwpWriteUserEvent.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall EtwpReleaseStackLookasideListEntry(PSLIST_ENTRY ListEntry)
{
  unsigned int Next; // ecx
  __int64 v3; // rcx
  struct _LIST_ENTRY **p_Blink; // rcx

  Next = (unsigned int)ListEntry[1].Next;
  if ( Next == -1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)&stru_140E285C0.SecureThreadCookie);
    p_Blink = &stru_140E285C0.ThreadListEntry.Blink;
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
    p_Blink = (struct _LIST_ENTRY **)(*(_QWORD *)(v3 + 35816) + 384LL);
  }
  return RtlpInterlockedPushEntrySList((PSLIST_HEADER)p_Blink, ListEntry);
}
