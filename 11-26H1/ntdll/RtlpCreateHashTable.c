/*
 * XREFs of RtlpCreateHashTable @ 0x1800D8DB8
 * Callers:
 *     RtlCreateHashTable @ 0x1800D8DA0 (RtlCreateHashTable.c)
 *     RtlCreateHashTableEx @ 0x180146280 (RtlCreateHashTableEx.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpAllocateSecondLevelDir @ 0x1800D8F30 (RtlpAllocateSecondLevelDir.c)
 *     RtlpInitializeSecondLevelDir @ 0x1800D8F58 (RtlpInitializeSecondLevelDir.c)
 *     RtlDeleteHashTable @ 0x1800D8F80 (RtlDeleteHashTable.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

char __fastcall RtlpCreateHashTable(__int64 *a1, unsigned int a2, int a3, int a4)
{
  unsigned int v4; // esi
  __int64 Heap_0; // rbx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r9
  unsigned int v17; // esi
  int v18; // ebp
  unsigned int v19; // esi
  int v20; // ebp
  _QWORD *v21; // rax
  _QWORD *v22; // r14
  __int64 v23; // rdi
  __int64 SecondLevelDir; // rax
  __int64 v25; // rdx
  __int64 v26; // r9

  v4 = a2 - 1;
  if ( ((a2 - 1) & a2) != 0 || a2 - 128 > 0x7FFF00 )
    return 0;
  Heap_0 = *a1;
  v10 = 0;
  if ( !*a1 )
  {
    Heap_0 = RtlAllocateHeap_0();
    if ( !Heap_0 )
      return 0;
    v10 = 1;
  }
  *(_QWORD *)(Heap_0 + 20) = 0LL;
  *(_QWORD *)(Heap_0 + 28) = 0LL;
  *(_DWORD *)(Heap_0 + 36) = 0;
  *(_DWORD *)Heap_0 = a4 | v10;
  *(_DWORD *)(Heap_0 + 8) = a2;
  *(_DWORD *)(Heap_0 + 16) = v4;
  *(_DWORD *)(Heap_0 + 4) = a3;
  *(_DWORD *)(Heap_0 + 12) = 0;
  if ( a2 > 0x80 )
  {
    _BitScanReverse(&v17, a2 + 127);
    v18 = 1 << v17;
    v19 = v17 - 7;
    v20 = (a2 + 127) ^ v18;
    v21 = (_QWORD *)RtlAllocateHeap_0();
    v22 = v21;
    if ( v21 )
    {
      memset_thunk_772440563353939046(v21, 0, 0x80uLL);
      v23 = 0LL;
      *(_QWORD *)(Heap_0 + 32) = v22;
      while ( (unsigned int)v23 <= v19 )
      {
        SecondLevelDir = RtlpAllocateSecondLevelDir((unsigned int)v23);
        v14 = SecondLevelDir;
        if ( !SecondLevelDir )
          goto LABEL_10;
        if ( (unsigned int)v23 >= v19 )
          v25 = (unsigned int)(v20 + 1);
        else
          v25 = (unsigned int)(1 << (v23 + 7));
        RtlpInitializeSecondLevelDir(SecondLevelDir, v25);
        v22[v23] = v26;
        v23 = (unsigned int)(v23 + 1);
      }
      goto LABEL_9;
    }
  }
  else
  {
    v11 = RtlpAllocateSecondLevelDir(0LL);
    v14 = v11;
    if ( v11 )
    {
      RtlpInitializeSecondLevelDir(v11, *(unsigned int *)(Heap_0 + 8));
      *(_QWORD *)(Heap_0 + 32) = v15;
LABEL_9:
      *a1 = Heap_0;
      return 1;
    }
  }
LABEL_10:
  RtlDeleteHashTable(Heap_0, v12, v13, v14);
  return 0;
}
