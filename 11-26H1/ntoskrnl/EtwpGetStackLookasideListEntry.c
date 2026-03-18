/*
 * XREFs of EtwpGetStackLookasideListEntry @ 0x14046E5B0
 * Callers:
 *     EtwpTraceStackWalk @ 0x14020A5C0 (EtwpTraceStackWalk.c)
 *     EtwpEventWriteFull @ 0x14021336C (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140B7D098 (EtwpWriteUserEvent.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY EtwpGetStackLookasideListEntry()
{
  PSLIST_ENTRY result; // rax

  result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)KeGetCurrentPrcb()->EtwSupport + 24);
  if ( !result )
  {
    result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&stru_140E28440.IoSelfBoostsEntry);
    if ( result )
    {
      _InterlockedIncrement((volatile signed __int32 *)&stru_140E28440.PriorityFloorCounts[20]);
      if ( *(int *)&stru_140E28440.PriorityFloorCounts[20] > *(int *)&stru_140E28440.PriorityFloorCounts[24] )
        _InterlockedExchange(
          (volatile __int32 *)&stru_140E28440.PriorityFloorCounts[24],
          *(__int32 *)&stru_140E28440.PriorityFloorCounts[20]);
    }
    else
    {
      if ( *(int *)&stru_140E28440.PriorityFloorCounts[8] > 0 )
        _InterlockedIncrement((volatile signed __int32 *)&stru_140E28440.PriorityFloorCounts[28]);
      return 0LL;
    }
  }
  return result;
}
