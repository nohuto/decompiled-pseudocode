/*
 * XREFs of IovAiDbNodeFree @ 0x140641FB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

PSLIST_ENTRY __fastcall IovAiDbNodeFree(__int64 a1, struct _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY result; // rax

  if ( a2 )
  {
    memset_0(a2, 0, 0x40uLL);
    result = RtlpInterlockedPushEntrySList((PSLIST_HEADER)&stru_140E27B08.WaitBlockFill11[136], a2);
    _InterlockedDecrement(&IovAiResourceCount);
  }
  return result;
}
