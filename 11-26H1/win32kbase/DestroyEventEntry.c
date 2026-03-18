/*
 * XREFs of DestroyEventEntry @ 0x14019C4D4
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x14000B5E0 (InsertEventEntryInLookUpTable.c)
 *     FlushEventEntryList @ 0x1402D38C8 (FlushEventEntryList.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
