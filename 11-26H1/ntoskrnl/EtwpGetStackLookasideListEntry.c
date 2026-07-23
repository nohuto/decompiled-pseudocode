/*
 * XREFs of EtwpGetStackLookasideListEntry @ 0x140467D30
 * Callers:
 *     EtwpTraceStackWalk @ 0x14020A6A0 (EtwpTraceStackWalk.c)
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140B85DAC (EtwpWriteUserEvent.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY EtwpGetStackLookasideListEntry()
{
  PSLIST_ENTRY result; // rax

  result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)KeGetCurrentPrcb()->EtwSupport + 24);
  if ( !result )
  {
    result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&stru_140E285C0.ThreadListEntry.Blink);
    if ( result )
    {
      _InterlockedIncrement((volatile signed __int32 *)&stru_140E285C0.SecureThreadCookie);
      if ( (int)stru_140E285C0.SecureThreadCookie > SLODWORD(stru_140E285C0.SchedulerSharedSystemSlot) )
        _InterlockedExchange(
          (volatile __int32 *)&stru_140E285C0.SchedulerSharedSystemSlot,
          stru_140E285C0.SecureThreadCookie);
    }
    else
    {
      if ( SLODWORD(stru_140E285C0.MutantListHead.Blink) > 0 )
        _InterlockedIncrement((_DWORD *)&stru_140E285C0.SchedulerSharedSystemSlot + 1);
      return 0LL;
    }
  }
  return result;
}
