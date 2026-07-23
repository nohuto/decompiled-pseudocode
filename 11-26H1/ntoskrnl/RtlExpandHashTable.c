/*
 * XREFs of RtlExpandHashTable @ 0x14046C3D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetChainHead @ 0x14046C5A8 (RtlpGetChainHead.c)
 *     RtlpAllocateSecondLevelDir @ 0x1404B22EC (RtlpAllocateSecondLevelDir.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall RtlExpandHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  unsigned int TableSize; // edx
  unsigned int v3; // ecx
  unsigned int v4; // esi
  __int64 v5; // rbp
  void **v6; // rdi
  __int64 Pivot; // rdx
  _QWORD *ChainHead; // rax
  _QWORD *v9; // r9
  __int64 v10; // r10
  _QWORD *v11; // r8
  _QWORD *v12; // rdx
  _QWORD *v13; // r10
  int v14; // eax
  __int64 v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  unsigned int DivisorMask; // edx
  void *Directory; // r14
  __int64 Pool2; // rax
  _QWORD *v22; // rdi
  __int64 SecondLevelDir; // rax

  TableSize = HashTable->TableSize;
  if ( TableSize == 8388480 || HashTable->NumEnumerators )
    return 0;
  _BitScanReverse(&v3, TableSize + 128);
  v4 = (TableSize + 128) ^ (1 << v3);
  v5 = v3 - 7;
  if ( TableSize == 128 )
  {
    Directory = HashTable->Directory;
    Pool2 = ExAllocatePool2(0x40uLL);
    v22 = (_QWORD *)Pool2;
    if ( !Pool2 )
      return 0;
    memset_0((void *)(Pool2 + 8), 0, 0x78uLL);
    *v22 = Directory;
    HashTable->Directory = v22;
  }
  v6 = (void **)HashTable->Directory;
  if ( !v6[v5] )
  {
    SecondLevelDir = RtlpAllocateSecondLevelDir((unsigned int)v5);
    if ( SecondLevelDir )
    {
      v6[v5] = (void *)SecondLevelDir;
      goto LABEL_5;
    }
    if ( HashTable->TableSize == 128 )
    {
      HashTable->Directory = *v6;
      ExFreePoolWithTag(v6, 0);
    }
    return 0;
  }
LABEL_5:
  Pivot = HashTable->Pivot;
  ++HashTable->TableSize;
  ChainHead = (_QWORD *)RtlpGetChainHead(HashTable, Pivot);
  ++HashTable->Pivot;
  v9 = ChainHead;
  v11 = (_QWORD *)(v10 + 16LL * v4);
  v11[1] = v11;
  *v11 = v11;
  v12 = (_QWORD *)*ChainHead;
  if ( (_QWORD *)*ChainHead != ChainHead )
  {
    v13 = ChainHead;
    do
    {
      v14 = *((_DWORD *)v12 + 4) >> HashTable->Shift;
      if ( (((2 * HashTable->DivisorMask) | 1) & ((69069 * v14 + 1) & 0xFFFF0000 | ((unsigned int)(1103515245 * v14
                                                                                                 + 12345) >> 16))) == HashTable->TableSize - 1 )
      {
        v15 = *v12;
        if ( *(_QWORD **)(*v12 + 8LL) != v12
          || (v16 = (_QWORD *)v12[1], (_QWORD *)*v16 != v12)
          || (*v16 = v15, *(_QWORD *)(v15 + 8) = v16, v17 = (_QWORD *)v11[1], (_QWORD *)*v17 != v11) )
        {
          __fastfail(3u);
        }
        *v12 = v11;
        v12[1] = v17;
        *v17 = v12;
        v11[1] = v12;
      }
      else
      {
        v13 = v12;
      }
      v12 = (_QWORD *)*v13;
    }
    while ( (_QWORD *)*v13 != v9 );
    if ( (_QWORD *)*v11 != v11 )
      ++HashTable->NonEmptyBuckets;
    if ( (_QWORD *)*v9 == v9 )
      --HashTable->NonEmptyBuckets;
  }
  DivisorMask = HashTable->DivisorMask;
  if ( HashTable->Pivot == DivisorMask + 1 )
  {
    HashTable->Pivot = 0;
    HashTable->DivisorMask = (2 * DivisorMask) | 1;
  }
  return 1;
}
