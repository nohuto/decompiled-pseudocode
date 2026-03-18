/*
 * XREFs of DestroyEventEntry @ 0x1400A0D8C
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1400572EC (InsertEventEntryInLookUpTable.c)
 *     FlushEventEntryList @ 0x14028A424 (FlushEventEntryList.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
