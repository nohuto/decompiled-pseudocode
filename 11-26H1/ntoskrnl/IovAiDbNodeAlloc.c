/*
 * XREFs of IovAiDbNodeAlloc @ 0x140645B00
 * Callers:
 *     <none>
 * Callees:
 *     IovExpandAiDbRawEntries @ 0x140646050 (IovExpandAiDbRawEntries.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

PSLIST_ENTRY IovAiDbNodeAlloc()
{
  __int64 v0; // rdi
  PSLIST_ENTRY v1; // rbx

  v0 = 0LL;
  v1 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&stru_140E27C48.WaitBlockFill11[136]);
  if ( v1
    || (IovExpandAiDbRawEntries(),
        (v1 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&stru_140E27C48.WaitBlockFill11[136])) != 0LL) )
  {
    memset_0(v1, 0, 0x40uLL);
    _InterlockedIncrement(&IovAiResourceCount);
    return v1;
  }
  return (PSLIST_ENTRY)v0;
}
