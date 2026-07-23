/*
 * XREFs of SepFindMatchingLowBoxNumberEntries @ 0x14081CBF0
 * Callers:
 *     SepIsParentOfChildAppContainer @ 0x14081CDAC (SepIsParentOfChildAppContainer.c)
 * Callees:
 *     RtlEnumerateEntryHashTable @ 0x1403DB300 (RtlEnumerateEntryHashTable.c)
 *     RtlInitEnumerationHashTable @ 0x1404606B0 (RtlInitEnumerationHashTable.c)
 *     RtlEndWeakEnumerationHashTable @ 0x1404675B0 (RtlEndWeakEnumerationHashTable.c)
 */

__int64 __fastcall SepFindMatchingLowBoxNumberEntries(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        int a2,
        int a3,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY *a4,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY *a5)
{
  char v9; // si
  char v10; // di
  int Signature; // ecx
  bool v12; // zf
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v13; // rax
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-58h] BYREF

  *a4 = 0LL;
  Enumerator.HashEntry.Linkage = 0LL;
  *a5 = 0LL;
  memset(&Enumerator.CurEntry + 2, 0, 24);
  v9 = 0;
  v10 = 0;
  if ( !RtlInitEnumerationHashTable(HashTable, &Enumerator) )
    return 3221226021LL;
  while ( 1 )
  {
    v13 = RtlEnumerateEntryHashTable(HashTable, &Enumerator);
    if ( !v13 )
      break;
    Signature = v13[1].Signature;
    if ( Signature == a2 )
    {
      *a4 = v13;
      v9 = 1;
      v12 = v10 == 1;
LABEL_7:
      if ( v12 )
        break;
    }
    else if ( Signature == a3 )
    {
      *a5 = v13;
      v10 = 1;
      v12 = v9 == 1;
      goto LABEL_7;
    }
  }
  RtlEndWeakEnumerationHashTable(HashTable, &Enumerator);
  if ( v9 == 1 )
    return v10 != 1 ? 0xC0000225 : 0;
  return 3221226021LL;
}
