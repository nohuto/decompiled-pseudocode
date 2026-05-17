/*
 * XREFs of EtwpTrackBinaryForSession @ 0x180055550
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x180055000 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlCompareMemory @ 0x1801631E0 (RtlCompareMemory.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall EtwpTrackBinaryForSession(__int64 a1, const void **a2, _QWORD *a3)
{
  SIZE_T v3; // rsi
  __int64 *v4; // rdi
  __int64 *v5; // rbx
  unsigned int v9; // r12d
  __int64 *i; // rcx
  __int64 Heap_0; // rax
  __int64 *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 *v19; // rcx
  __int64 v20; // rdx

  v3 = *(unsigned __int16 *)a2;
  v4 = (__int64 *)(a1 + 464);
  v5 = *(__int64 **)(a1 + 464);
  v9 = 0;
  while ( v5 != v4 )
  {
    if ( *((_DWORD *)v5 + 10) == v3 + 2 && RtlCompareMemory((char *)v5 + 44, a2[1], v3) == v3 )
    {
      for ( i = (__int64 *)v5[3]; i != v5 + 3; i = (__int64 *)*i )
      {
        v18 = *a3 - i[2];
        if ( *a3 == i[2] )
          v18 = a3[1] - i[3];
        if ( !v18 )
          return v9;
      }
      Heap_0 = RtlAllocateHeap_0();
      if ( Heap_0 )
      {
        v12 = v5 + 3;
        *(_OWORD *)(Heap_0 + 16) = *(_OWORD *)a3;
        v13 = v5[3];
        if ( *(__int64 **)(v13 + 8) == v5 + 3 )
        {
          *(_QWORD *)Heap_0 = v13;
          *(_QWORD *)(Heap_0 + 8) = v12;
          *(_QWORD *)(v13 + 8) = Heap_0;
          *v12 = Heap_0;
          ++*((_DWORD *)v5 + 4);
          goto LABEL_21;
        }
LABEL_13:
        __fastfail(3u);
      }
      return 14;
    }
    v5 = (__int64 *)*v5;
  }
  v14 = RtlAllocateHeap_0();
  if ( !v14 )
    return 14;
  *(_DWORD *)(v14 + 40) = v3 + 2;
  memmove((void *)(v14 + 44), a2[1], v3);
  v15 = v14 + 24;
  *(_WORD *)(v3 + v14 + 44) = 0;
  *(_QWORD *)(v14 + 32) = v14 + 24;
  *(_QWORD *)(v14 + 24) = v14 + 24;
  *(_DWORD *)(v14 + 16) = 0;
  v16 = RtlAllocateHeap_0();
  if ( !v16 )
    return 14;
  *(_OWORD *)(v16 + 16) = *(_OWORD *)a3;
  v17 = *(_QWORD *)v15;
  if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15 )
    goto LABEL_13;
  *(_QWORD *)v16 = v17;
  *(_QWORD *)(v16 + 8) = v15;
  *(_QWORD *)(v17 + 8) = v16;
  v19 = (__int64 *)(a1 + 464);
  *(_QWORD *)v15 = v16;
  *(_DWORD *)(v14 + 16) = 1;
  *(_DWORD *)(a1 + 316) |= 0x10u;
  v20 = *(_QWORD *)(a1 + 464);
  if ( *(_QWORD *)(v20 + 8) != a1 + 464 )
    goto LABEL_13;
  *(_QWORD *)v14 = v20;
  *(_QWORD *)(v14 + 8) = v19;
  *(_QWORD *)(v20 + 8) = v14;
  *v19 = v14;
LABEL_21:
  *(_DWORD *)(a1 + 316) |= 0x10u;
  return v9;
}
