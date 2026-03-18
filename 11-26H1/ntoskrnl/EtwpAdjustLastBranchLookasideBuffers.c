/*
 * XREFs of EtwpAdjustLastBranchLookasideBuffers @ 0x140488A5C
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x1404887E0 (EtwpAdjustTraceBuffers.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY EtwpAdjustLastBranchLookasideBuffers()
{
  PSLIST_ENTRY result; // rax

  result = (PSLIST_ENTRY)(unsigned int)KeNumberProcessors_0;
  if ( SHIDWORD(stru_140E28440.MutantListHead.Blink) > 2
                                                     * (int)KeNumberProcessors_0
                                                     * LODWORD(stru_140E28440.MutantListHead.Blink) )
  {
    do
    {
      result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&stru_140E28440.ThreadListEntry.Blink);
      if ( !result )
        break;
      ExFreePoolWithTag(result, 0);
      result = (PSLIST_ENTRY)(unsigned int)KeNumberProcessors_0;
    }
    while ( _InterlockedDecrement((_DWORD *)&stru_140E28440.MutantListHead.Blink + 1) > 2
                                                                                      * (int)KeNumberProcessors_0
                                                                                      * LODWORD(stru_140E28440.MutantListHead.Blink) );
  }
  return result;
}
