/*
 * XREFs of DestroyEventEntry @ 0x1400E8C9C
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1400E8E58 (InsertEventEntryInLookUpTable.c)
 *     FlushEventEntryList @ 0x140152328 (FlushEventEntryList.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
