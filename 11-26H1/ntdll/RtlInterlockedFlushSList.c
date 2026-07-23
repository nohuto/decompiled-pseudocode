/*
 * XREFs of RtlInterlockedFlushSList @ 0x1800DE700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PSLIST_ENTRY __stdcall RtlInterlockedFlushSList(PSLIST_HEADER ListHead)
{
  return (PSLIST_ENTRY)RtlpInterlockedFlushSList(ListHead);
}
