/*
 * XREFs of sub_14002B060 @ 0x14002B060
 * Callers:
 *     sub_1400BC450 @ 0x1400BC450 (sub_1400BC450.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall sub_14002B060(__int64 a1, struct _SLIST_ENTRY *a2)
{
  if ( *(_DWORD *)(a1 + 64) )
    a1 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * LODWORD(a2->Next));
  return ExpInterlockedPushEntrySList((PSLIST_HEADER)a1, a2);
}
