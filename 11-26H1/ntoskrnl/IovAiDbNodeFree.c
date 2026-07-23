/*
 * XREFs of IovAiDbNodeFree @ 0x140645B90
 * Callers:
 *     <none>
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

PSLIST_ENTRY __fastcall IovAiDbNodeFree(__int64 a1, _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY result; // rax

  if ( a2 )
  {
    memset_0(a2, 0, 0x40uLL);
    result = RtlpInterlockedPushEntrySList((PSLIST_HEADER)&stru_140E27C48.WaitBlockFill11[136], a2);
    _InterlockedDecrement(&IovAiResourceCount);
  }
  return result;
}
