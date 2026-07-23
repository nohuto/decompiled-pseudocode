/*
 * XREFs of RtlAddAttributeActionToRXact @ 0x180101CF0
 * Callers:
 *     RtlAddActionToRXact @ 0x180101CA0 (RtlAddActionToRXact.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlAddAttributeActionToRXact(
        __int64 a1,
        int a2,
        const void **a3,
        __int64 a4,
        const void **a5,
        int a6,
        void *Src,
        size_t Size)
{
  const void **v8; // r9
  __int64 v11; // rbx
  int v12; // r12d
  unsigned int v13; // ebp
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  __int64 v16; // r14
  __int64 v17; // r15
  __int128 v18; // xmm1
  __int64 v19; // rcx
  unsigned int v20; // edi
  unsigned int v21; // edi
  unsigned int v22; // ebp
  __int64 v23; // rbx
  _DWORD *Heap_0; // rax
  _DWORD *v26; // rdi

  v8 = a3;
  if ( (unsigned int)(a2 - 1) > 1 )
    return 3221225485LL;
  v11 = *(_QWORD *)(a1 + 24);
  v12 = (Size + 3) & 0xFFFFFFFC;
  v13 = (((*(unsigned __int16 *)a5 + 3) & 0xFFFFFFFC) + 71 + v12 + ((*(unsigned __int16 *)a3 + 3) & 0xFFFFFFFC)) & 0xFFFFFFF8;
  v14 = v13 + *(_DWORD *)(v11 + 8);
  if ( v14 < v13 )
    return 3221225495LL;
  v15 = *(_DWORD *)(v11 + 4);
  if ( v14 > v15 )
  {
    do
      v15 *= 2;
    while ( v15 < v14 );
    Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, v15);
    v26 = Heap_0;
    if ( Heap_0 )
    {
      memmove(Heap_0, *(const void **)(a1 + 24), *(unsigned int *)(*(_QWORD *)(a1 + 24) + 8LL));
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)(a1 + 24));
      v8 = a3;
      *(_QWORD *)(a1 + 24) = v26;
      v26[1] = v15;
      goto LABEL_4;
    }
    return 3221225495LL;
  }
LABEL_4:
  v16 = *(_QWORD *)(a1 + 24);
  v17 = *(unsigned int *)(v16 + 8);
  *(_DWORD *)(v17 + v16) = v13;
  *(_DWORD *)(v17 + v16 + 4) = a2;
  *(_OWORD *)(v17 + v16 + 8) = *(_OWORD *)v8;
  v18 = *(_OWORD *)a5;
  *(_DWORD *)(v17 + v16 + 48) = a6;
  *(_DWORD *)(v17 + v16 + 52) = Size;
  *(_QWORD *)(v17 + v16 + 40) = a4;
  *(_OWORD *)(v17 + v16 + 24) = v18;
  v19 = *(_QWORD *)(a1 + 24);
  v20 = *(_DWORD *)(v19 + 8) + 64;
  memmove((void *)(v20 + v19), v8[1], *(unsigned __int16 *)v8);
  *(_QWORD *)(v17 + v16 + 16) = v20;
  v21 = ((*(unsigned __int16 *)a3 + 3) & 0xFFFFFFFC) + v20;
  memmove((void *)(v21 + *(_QWORD *)(a1 + 24)), a5[1], *(unsigned __int16 *)a5);
  *(_QWORD *)(v17 + v16 + 32) = v21;
  v22 = v21 + ((*(unsigned __int16 *)a5 + 3) & 0xFFFFFFFC);
  if ( a2 == 2 )
  {
    v23 = v22;
    memmove((void *)(v22 + *(_QWORD *)(a1 + 24)), Src, (unsigned int)Size);
    v22 += v12;
    *(_QWORD *)(v17 + v16 + 56) = v23;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) = (v22 + 7) & 0xFFFFFFF8;
  ++**(_DWORD **)(a1 + 24);
  return 0LL;
}
