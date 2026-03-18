/*
 * XREFs of DestroyEventEntry @ 0x14022E9C0
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x14002BC8C (InsertEventEntryInLookUpTable.c)
 *     FlushEventEntryList @ 0x1403D3008 (FlushEventEntryList.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
