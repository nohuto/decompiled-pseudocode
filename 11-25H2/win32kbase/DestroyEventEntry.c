/*
 * XREFs of DestroyEventEntry @ 0x14015C408
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x14004D500 (InsertEventEntryInLookUpTable.c)
 *     FlushEventEntryList @ 0x1402CA490 (FlushEventEntryList.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
