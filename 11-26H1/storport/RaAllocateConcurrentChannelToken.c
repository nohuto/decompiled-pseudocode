/*
 * XREFs of RaAllocateConcurrentChannelToken @ 0x140032D70
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x140015840 (RaidAdapterPostScatterGatherExecute.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall RaAllocateConcurrentChannelToken(__int64 a1)
{
  USHORT CurrentNodeNumber; // ax
  unsigned int i; // ebx
  PSLIST_ENTRY result; // rax
  unsigned int v5; // esi

  CurrentNodeNumber = KeGetCurrentNodeNumber();
  i = CurrentNodeNumber;
  result = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 4736)
                                                     + ((unsigned __int64)CurrentNodeNumber << 6)));
  if ( !result )
  {
    v5 = KeQueryHighestNodeNumber() + 1;
    while ( 1 )
    {
      for ( i = 0; i < v5; ++i )
      {
        result = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 4736) + ((unsigned __int64)i << 6)));
        if ( result )
          goto LABEL_2;
        _mm_pause();
      }
    }
  }
LABEL_2:
  LODWORD(result[1].Next) = i;
  return result;
}
