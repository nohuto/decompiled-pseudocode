/*
 * XREFs of RtlpCreateHashTable @ 0x1800D5D78
 * Callers:
 *     RtlCreateHashTable @ 0x1800D5D60 (RtlCreateHashTable.c)
 *     RtlCreateHashTableEx @ 0x180146130 (RtlCreateHashTableEx.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpAllocateSecondLevelDir @ 0x1800D5EF0 (RtlpAllocateSecondLevelDir.c)
 *     RtlpInitializeSecondLevelDir @ 0x1800D5F18 (RtlpInitializeSecondLevelDir.c)
 *     RtlDeleteHashTable @ 0x1800D5F40 (RtlDeleteHashTable.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

char __fastcall RtlpCreateHashTable(PVOID *a1, unsigned int a2, int a3, int a4)
{
  unsigned int v4; // esi
  char *Heap_0; // rbx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // r9
  unsigned int v14; // esi
  int v15; // ebp
  unsigned int v16; // esi
  int v17; // ebp
  _QWORD *v18; // rax
  _QWORD *v19; // r14
  __int64 v20; // rdi
  __int64 SecondLevelDir; // rax
  __int64 v22; // rdx
  __int64 v23; // r9

  v4 = a2 - 1;
  if ( ((a2 - 1) & a2) != 0 || a2 - 128 > 0x7FFF00 )
    return 0;
  Heap_0 = (char *)*a1;
  v10 = 0;
  if ( !*a1 )
  {
    Heap_0 = (char *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
    if ( !Heap_0 )
      return 0;
    v10 = 1;
  }
  *(_QWORD *)(Heap_0 + 20) = 0LL;
  *(_QWORD *)(Heap_0 + 28) = 0LL;
  *((_DWORD *)Heap_0 + 9) = 0;
  *(_DWORD *)Heap_0 = a4 | v10;
  *((_DWORD *)Heap_0 + 2) = a2;
  *((_DWORD *)Heap_0 + 4) = v4;
  *((_DWORD *)Heap_0 + 1) = a3;
  *((_DWORD *)Heap_0 + 3) = 0;
  if ( a2 > 0x80 )
  {
    _BitScanReverse(&v14, a2 + 127);
    v15 = 1 << v14;
    v16 = v14 - 7;
    v17 = (a2 + 127) ^ v15;
    v18 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 0x80uLL);
    v19 = v18;
    if ( v18 )
    {
      memset_thunk_772440563353939046(v18, 0, 0x80uLL);
      v20 = 0LL;
      *((_QWORD *)Heap_0 + 4) = v19;
      while ( (unsigned int)v20 <= v16 )
      {
        SecondLevelDir = RtlpAllocateSecondLevelDir((unsigned int)v20);
        if ( !SecondLevelDir )
          goto LABEL_10;
        if ( (unsigned int)v20 >= v16 )
          v22 = (unsigned int)(v17 + 1);
        else
          v22 = (unsigned int)(1 << (v20 + 7));
        RtlpInitializeSecondLevelDir(SecondLevelDir, v22);
        v19[v20] = v23;
        v20 = (unsigned int)(v20 + 1);
      }
      goto LABEL_9;
    }
  }
  else
  {
    v11 = RtlpAllocateSecondLevelDir(0LL);
    if ( v11 )
    {
      RtlpInitializeSecondLevelDir(v11, *((unsigned int *)Heap_0 + 2));
      *((_QWORD *)Heap_0 + 4) = v12;
LABEL_9:
      *a1 = Heap_0;
      return 1;
    }
  }
LABEL_10:
  RtlDeleteHashTable((PRTL_DYNAMIC_HASH_TABLE)Heap_0);
  return 0;
}
