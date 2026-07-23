/*
 * XREFs of RtlDeleteHashTable @ 0x1800D5F40
 * Callers:
 *     RtlpCreateHashTable @ 0x1800D5D78 (RtlpCreateHashTable.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 */

LOGICAL __cdecl RtlDeleteHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  void *Directory; // rbx
  LOGICAL result; // eax
  unsigned int v4; // ebp
  PVOID *v5; // rsi

  Directory = HashTable->Directory;
  if ( HashTable->TableSize <= 0x80 )
  {
    if ( !Directory )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( Directory )
  {
    v4 = 0;
    v5 = (PVOID *)HashTable->Directory;
    do
    {
      if ( !*v5 )
        break;
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, *v5);
      ++v4;
      ++v5;
    }
    while ( v4 < 0x10 );
LABEL_3:
    result = RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Directory);
  }
LABEL_4:
  if ( (HashTable->Flags & 1) != 0 )
    return RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, HashTable);
  return result;
}
