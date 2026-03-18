/*
 * XREFs of IovFreeIrpTracker @ 0x140C2AA94
 * Callers:
 *     ViIovPluginUnload @ 0x1406429A0 (ViIovPluginUnload.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY IovFreeIrpTracker()
{
  PSLIST_ENTRY result; // rax

  while ( 1 )
  {
    result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&stru_140E27B08.WaitBlockFill11[168]);
    if ( !result )
      break;
    ExFreePoolWithTag(result, 0);
  }
  *(_OWORD *)&stru_140E27B08.WaitBlockFill11[168] = 0LL;
  *(_OWORD *)&stru_140E27B08.WaitBlockFill11[152] = 0LL;
  IovIrpTrackerCount = 0;
  return result;
}
