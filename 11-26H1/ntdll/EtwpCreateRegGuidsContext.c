/*
 * XREFs of EtwpCreateRegGuidsContext @ 0x1800434E0
 * Callers:
 *     EtwRegisterTraceGuidsW @ 0x1800433E0 (EtwRegisterTraceGuidsW.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

char *__fastcall EtwpCreateRegGuidsContext(__int64 a1, __int64 a2, _OWORD *a3, unsigned int a4, __int64 a5)
{
  __int64 v7; // rdi
  unsigned __int64 v10; // rax
  unsigned int v12; // esi
  char *Heap_0; // rax
  char *v14; // rbx
  char *v15; // rcx
  _OWORD *v17; // rdx

  v7 = a4;
  v10 = 24LL * a4;
  if ( v10 > 0xFFFFFFFF )
    return 0LL;
  if ( (int)v10 + 24 < (unsigned int)v10 )
    return 0LL;
  if ( (int)v10 + 40 < (unsigned int)(v10 + 24) )
    return 0LL;
  v12 = v10 + 40;
  Heap_0 = (char *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v10 + 40));
  v14 = Heap_0;
  if ( !Heap_0 )
    return 0LL;
  memset_thunk_772440563353939046(Heap_0, 0, v12);
  *(_QWORD *)v14 = a1;
  v15 = v14 + 40;
  *((_QWORD *)v14 + 1) = a2;
  *(_OWORD *)(v14 + 24) = *a3;
  if ( a4 )
  {
    do
    {
      v17 = *(_OWORD **)a5;
      *(_QWORD *)(a5 + 8) = v15;
      a5 += 16LL;
      *(_OWORD *)(v15 + 8) = *v17;
      *((_DWORD *)v15 + 1) = NtCurrentTeb()->ClientId.UniqueProcess;
      v15 += 24;
      --v7;
    }
    while ( v7 );
  }
  return v14;
}
