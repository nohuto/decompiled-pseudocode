/*
 * XREFs of PfpRepurposeNameLoggingTrace @ 0x140B29070
 * Callers:
 *     PfTFreeTraceDump @ 0x1404DA0E8 (PfTFreeTraceDump.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x1404A5B6C (PfFbBufferListInsertInFree.c)
 */

void __fastcall PfpRepurposeNameLoggingTrace(_SLIST_ENTRY *a1, __int64 a2)
{
  PfFbBufferListInsertInFree(a1 + 18, (_SLIST_ENTRY *)a2, *(_DWORD *)(a2 + 52), *(_DWORD *)(a2 + 56), 1);
}
