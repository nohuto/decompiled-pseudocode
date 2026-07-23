/*
 * XREFs of EtwpAddBinaryInfoEvents @ 0x180040DE0
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x18003FCD0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpAddProviderTrackingInfo @ 0x180067658 (EtwpAddProviderTrackingInfo.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall EtwpAddBinaryInfoEvents(__int64 a1, __int64 a2, int a3)
{
  __int64 *v3; // rbx
  unsigned int v4; // r15d
  __int64 *v5; // rax
  unsigned int v6; // ebp
  unsigned int v8; // r9d
  int v9; // edx
  int v10; // r8d
  unsigned int v11; // r8d
  _DWORD *Heap_0; // rdi
  __int64 *v13; // r14
  unsigned int v14; // esi
  __int64 *i; // rcx
  __int64 v16; // rax
  size_t v17; // r8
  __int16 v18; // dx
  int v19; // esi
  __int64 v20; // rcx
  unsigned int v21; // esi

  v3 = (__int64 *)(a1 + 464);
  v4 = 0;
  v5 = *(__int64 **)(a1 + 464);
  v6 = a3 - *(_DWORD *)(a2 + 48);
  v8 = 0;
  if ( v5 != (__int64 *)(a1 + 464) )
  {
    do
    {
      v9 = *((_DWORD *)v5 + 4);
      v10 = *((_DWORD *)v5 + 10);
      v5 = (__int64 *)*v5;
      v11 = 16 * v9 + v10 + 4;
      if ( v8 > v11 )
        v11 = v8;
      v8 = v11;
    }
    while ( v5 != v3 );
  }
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, v8);
  if ( !Heap_0 )
    return 3221225495LL;
  v13 = (__int64 *)*v3;
  if ( (__int64 *)*v3 != v3 )
  {
    while ( 1 )
    {
      *Heap_0 = *((_DWORD *)v13 + 4);
      v14 = 4;
      for ( i = (__int64 *)v13[3]; i != v13 + 3; i = (__int64 *)*i )
      {
        v16 = v14;
        v14 += 16;
        *(_OWORD *)((char *)Heap_0 + v16) = *((_OWORD *)i + 1);
      }
      memmove(&Heap_0[v14 / 4], (char *)v13 + 44, *((unsigned int *)v13 + 10));
      v17 = v14 + *((_DWORD *)v13 + 10);
      v18 = v14 + *((_WORD *)v13 + 20) + 16;
      v19 = v17 + 23;
      if ( v6 < (int)v17 + 16 )
        break;
      v20 = a2 + *(unsigned int *)(a2 + 48);
      *(_WORD *)(v20 + 4) = v18;
      *(_DWORD *)v20 = -1072627710;
      *(_WORD *)(v20 + 6) = 67;
      *(_QWORD *)(v20 + 8) = *(_QWORD *)(a2 + 88);
      memmove((void *)(v20 + 16), Heap_0, v17);
      v21 = v19 & 0xFFFFFFF8;
      *(_DWORD *)(a2 + 48) += v21;
      v6 -= v21;
      v13 = (__int64 *)*v13;
      if ( v13 == v3 )
        goto LABEL_11;
    }
    v4 = -1073741789;
  }
LABEL_11:
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
  return v4;
}
