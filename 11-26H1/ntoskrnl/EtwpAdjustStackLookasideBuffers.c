/*
 * XREFs of EtwpAdjustStackLookasideBuffers @ 0x1404823D4
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x140482320 (EtwpAdjustTraceBuffers.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     KeFreeCalloutStack @ 0x140B25070 (KeFreeCalloutStack.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY EtwpAdjustStackLookasideBuffers()
{
  PSLIST_ENTRY result; // rax
  void *v1; // rbx

  result = (PSLIST_ENTRY)(unsigned int)KeNumberProcessors_0;
  if ( SHIDWORD(stru_140E285C0.MutantListHead.Blink) > 2
                                                     * (int)KeNumberProcessors_0
                                                     * LODWORD(stru_140E285C0.MutantListHead.Blink) )
  {
    do
    {
      result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&stru_140E285C0.ThreadListEntry.Blink);
      v1 = result;
      if ( !result )
        break;
      KeFreeCalloutStack(*((PVOID *)&result[1].Next + 1));
      ExFreePoolWithTag(v1, 0);
      result = (PSLIST_ENTRY)(unsigned int)KeNumberProcessors_0;
    }
    while ( _InterlockedDecrement((_DWORD *)&stru_140E285C0.MutantListHead.Blink + 1) > 2
                                                                                      * (int)KeNumberProcessors_0
                                                                                      * LODWORD(stru_140E285C0.MutantListHead.Blink) );
  }
  return result;
}
