/*
 * XREFs of IovFreeIrpStackTracker @ 0x140C30A5C
 * Callers:
 *     ViIovPluginUnload @ 0x140646580 (ViIovPluginUnload.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY IovFreeIrpStackTracker()
{
  PSLIST_ENTRY result; // rax

  while ( 1 )
  {
    result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&stru_140E27C48.LastXStateSaveDebugInfo);
    if ( !result )
      break;
    ExFreePoolWithTag(result, 0);
  }
  *(_OWORD *)&stru_140E27C48.LastXStateSaveDebugInfo = 0LL;
  stru_140E27C48.QueueListEntry = 0LL;
  IovIrpStackTrackerCount = 0;
  return result;
}
