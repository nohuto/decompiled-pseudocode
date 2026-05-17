/*
 * XREFs of RtlExpandHashTable @ 0x1800D8B60
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpGetChainHead @ 0x1800D8D50 (RtlpGetChainHead.c)
 *     RtlpAllocateSecondLevelDir @ 0x1800D8F30 (RtlpAllocateSecondLevelDir.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

char __fastcall RtlExpandHashTable(__int64 a1)
{
  int v1; // edx
  unsigned int v3; // ecx
  unsigned int v4; // esi
  __int64 v5; // rbp
  _QWORD *v6; // rdi
  __int64 v7; // rdx
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
  int v18; // edx
  __int64 v20; // r14
  __int64 Heap_0; // rax
  _QWORD *v22; // rdi
  __int64 SecondLevelDir; // rax

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 == 8388480 || *(_DWORD *)(a1 + 28) )
    return 0;
  _BitScanReverse(&v3, v1 + 128);
  v4 = (v1 + 128) ^ (1 << v3);
  v5 = v3 - 7;
  if ( v1 == 128 )
  {
    v20 = *(_QWORD *)(a1 + 32);
    Heap_0 = RtlAllocateHeap_0();
    v22 = (_QWORD *)Heap_0;
    if ( !Heap_0 )
      return 0;
    memset_thunk_772440563353939046((void *)(Heap_0 + 8), 0, 0x78uLL);
    *v22 = v20;
    *(_QWORD *)(a1 + 32) = v22;
  }
  v6 = *(_QWORD **)(a1 + 32);
  if ( !v6[v5] )
  {
    SecondLevelDir = RtlpAllocateSecondLevelDir((unsigned int)v5);
    if ( SecondLevelDir )
    {
      v6[v5] = SecondLevelDir;
      goto LABEL_5;
    }
    if ( *(_DWORD *)(a1 + 8) == 128 )
    {
      *(_QWORD *)(a1 + 32) = *v6;
      RtlFreeHeap_0();
    }
    return 0;
  }
LABEL_5:
  v7 = *(unsigned int *)(a1 + 12);
  ++*(_DWORD *)(a1 + 8);
  ChainHead = (_QWORD *)RtlpGetChainHead(a1, v7);
  ++*(_DWORD *)(a1 + 12);
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
      v14 = *((_DWORD *)v12 + 4) >> *(_DWORD *)(a1 + 4);
      if ( (((2 * *(_DWORD *)(a1 + 16)) | 1) & ((69069 * v14 + 1) & 0xFFFF0000 | ((unsigned int)(1103515245 * v14 + 12345) >> 16))) == *(_DWORD *)(a1 + 8) - 1 )
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
      ++*(_DWORD *)(a1 + 24);
    if ( (_QWORD *)*v9 == v9 )
      --*(_DWORD *)(a1 + 24);
  }
  v18 = *(_DWORD *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 12) == v18 + 1 )
  {
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 16) = (2 * v18) | 1;
  }
  return 1;
}
