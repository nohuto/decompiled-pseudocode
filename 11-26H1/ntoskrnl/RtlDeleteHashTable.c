/*
 * XREFs of RtlDeleteHashTable @ 0x1404B8B10
 * Callers:
 *     SepDeleteSessionLowboxEntries @ 0x1404B8718 (SepDeleteSessionLowboxEntries.c)
 *     RtlpCreateHashTable @ 0x1404B89D0 (RtlpCreateHashTable.c)
 *     SepRmDestroyCapTable @ 0x140773F58 (SepRmDestroyCapTable.c)
 *     SepInitializeLowBoxNumberTable @ 0x140816AD0 (SepInitializeLowBoxNumberTable.c)
 *     SepDeleteCachedHandlesTable @ 0x140AFE698 (SepDeleteCachedHandlesTable.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __stdcall RtlDeleteHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  void *Directory; // rbx
  unsigned int v3; // ebp
  PVOID *v4; // rsi

  Directory = HashTable->Directory;
  if ( HashTable->TableSize <= 0x80 )
  {
    if ( !Directory )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( Directory )
  {
    v3 = 0;
    v4 = (PVOID *)HashTable->Directory;
    do
    {
      if ( !*v4 )
        break;
      ExFreePoolWithTag(*v4, 0);
      ++v3;
      ++v4;
    }
    while ( v3 < 0x10 );
LABEL_3:
    ExFreePoolWithTag(Directory, 0);
  }
LABEL_4:
  if ( (HashTable->Flags & 1) != 0 )
    ExFreePoolWithTag(HashTable, 0);
}
