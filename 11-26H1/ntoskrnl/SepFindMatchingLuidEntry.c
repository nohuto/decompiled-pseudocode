/*
 * XREFs of SepFindMatchingLuidEntry @ 0x14081C678
 * Callers:
 *     SepIsValidProcUniqueLuid @ 0x14081C714 (SepIsValidProcUniqueLuid.c)
 * Callees:
 *     RtlLookupEntryHashTable @ 0x14040CA60 (RtlLookupEntryHashTable.c)
 *     RtlGetNextEntryHashTable @ 0x14046B0C0 (RtlGetNextEntryHashTable.c)
 */

unsigned __int64 __fastcall SepFindMatchingLuidEntry(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        struct _LIST_ENTRY **a2,
        unsigned __int64 *a3)
{
  char v3; // bl
  struct _LIST_ENTRY *v6; // rax
  bool v7; // zf
  ULONG_PTR v8; // rdx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v10; // rdi
  PRTL_DYNAMIC_HASH_TABLE_ENTRY i; // rax
  unsigned __int64 result; // rax
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  memset(&Context, 0, sizeof(Context));
  v6 = *a2;
  v7 = *a2 == 0LL;
  v8 = 1LL;
  v10 = 0LL;
  if ( !v7 )
    v8 = (ULONG_PTR)v6;
  for ( i = RtlLookupEntryHashTable(HashTable, v8, &Context); i; i = RtlGetNextEntryHashTable(HashTable, &Context) )
  {
    v10 = i;
    if ( *a2 == i[1].Linkage.Blink )
    {
      v3 = 1;
      break;
    }
  }
  result = (unsigned __int64)v10 & -(__int64)(v3 != 0);
  *a3 = result;
  return result;
}
