/*
 * XREFs of IovFreeIrpStackTracker @ 0x140C2AA4C
 * Callers:
 *     ViIovPluginUnload @ 0x1406429A0 (ViIovPluginUnload.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY IovFreeIrpStackTracker()
{
  PSLIST_ENTRY result; // rax

  while ( 1 )
  {
    result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&stru_140E27B08.QueueListEntry);
    if ( !result )
      break;
    ExFreePoolWithTag(result, 0);
  }
  stru_140E27B08.QueueListEntry = 0LL;
  *(_OWORD *)&stru_140E27B08.LastXStateSaveDebugInfo = 0LL;
  IovIrpStackTrackerCount = 0;
  return result;
}
