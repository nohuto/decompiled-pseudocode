/*
 * XREFs of IovFreeIrpTracker @ 0x140C30AA4
 * Callers:
 *     ViIovPluginUnload @ 0x140646580 (ViIovPluginUnload.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY IovFreeIrpTracker()
{
  PSLIST_ENTRY result; // rax

  while ( 1 )
  {
    result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&stru_140E27C48.WaitBlockFill11[152]);
    if ( !result )
      break;
    ExFreePoolWithTag(result, 0);
  }
  *(_OWORD *)&stru_140E27C48.WaitBlockFill11[152] = 0LL;
  *(_OWORD *)&stru_140E27C48.WaitBlockFill11[168] = 0LL;
  IovIrpTrackerCount = 0;
  return result;
}
