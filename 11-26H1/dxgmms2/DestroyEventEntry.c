/*
 * XREFs of DestroyEventEntry @ 0x14005AC7C
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x14005AD04 (InsertEventEntryInLookUpTable.c)
 *     FlushEventEntryList @ 0x14009B3D0 (FlushEventEntryList.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
