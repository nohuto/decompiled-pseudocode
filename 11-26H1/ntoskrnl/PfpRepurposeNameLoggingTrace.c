/*
 * XREFs of PfpRepurposeNameLoggingTrace @ 0x140B26E10
 * Callers:
 *     PfTFreeTraceDump @ 0x1404E0A08 (PfTFreeTraceDump.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x1404AC4DC (PfFbBufferListInsertInFree.c)
 */

void __fastcall PfpRepurposeNameLoggingTrace(_SLIST_ENTRY *a1, __int64 a2)
{
  PfFbBufferListInsertInFree(a1 + 18, (struct _SLIST_ENTRY *)a2, *(_DWORD *)(a2 + 52), *(_DWORD *)(a2 + 56), 1);
}
