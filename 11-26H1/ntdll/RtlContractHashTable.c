/*
 * XREFs of RtlContractHashTable @ 0x1800D59C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlpGetChainHead @ 0x1800D5D10 (RtlpGetChainHead.c)
 */

BOOLEAN __cdecl RtlContractHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  unsigned int TableSize; // edx
  unsigned int Pivot; // eax
  unsigned int DivisorMask; // eax
  _QWORD *ChainHead; // r9
  _QWORD *v7; // r10
  _QWORD *i; // rcx
  _QWORD *v9; // rax
  unsigned int v10; // edx
  unsigned int v11; // ecx
  __int64 v12; // rsi
  __int64 v13; // rdx
  _QWORD *j; // rdx
  _QWORD *v15; // rdx
  void **Directory; // rdi

  TableSize = HashTable->TableSize;
  if ( TableSize == 128 || HashTable->NumEnumerators )
    return 0;
  Pivot = HashTable->Pivot;
  if ( Pivot )
  {
    DivisorMask = Pivot - 1;
  }
  else
  {
    HashTable->DivisorMask >>= 1;
    DivisorMask = HashTable->DivisorMask;
  }
  HashTable->Pivot = DivisorMask;
  RtlpGetChainHead(HashTable, TableSize - 1);
  ChainHead = (_QWORD *)RtlpGetChainHead(HashTable, HashTable->Pivot);
  --HashTable->TableSize;
  if ( (_QWORD *)*v7 != v7 && (_QWORD *)*ChainHead != ChainHead )
    --HashTable->NonEmptyBuckets;
  for ( i = ChainHead; ; *i = v9 )
  {
    v9 = (_QWORD *)*v7;
    if ( (_QWORD *)*v7 == v7 )
      break;
    if ( (_QWORD *)v9[1] != v7 )
      goto LABEL_19;
    v13 = *v9;
    if ( *(_QWORD **)(*v9 + 8LL) != v9 )
      goto LABEL_19;
    *v7 = v13;
    *(_QWORD *)(v13 + 8) = v7;
    for ( j = (_QWORD *)*i; j != ChainHead; j = (_QWORD *)*j )
    {
      if ( j[2] >= v9[2] )
        break;
      i = j;
    }
    v15 = (_QWORD *)*i;
    if ( *(_QWORD **)(*i + 8LL) != i )
LABEL_19:
      __fastfail(3u);
    *v9 = v15;
    v9[1] = i;
    v15[1] = v9;
  }
  v10 = HashTable->TableSize + 128;
  _BitScanReverse(&v11, v10);
  v12 = v11 - 7;
  if ( 1 << v11 == v10 )
  {
    Directory = (void **)HashTable->Directory;
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Directory[v12]);
    Directory[v12] = 0LL;
    if ( HashTable->TableSize == 128 )
    {
      HashTable->Directory = *Directory;
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Directory);
    }
  }
  return 1;
}
