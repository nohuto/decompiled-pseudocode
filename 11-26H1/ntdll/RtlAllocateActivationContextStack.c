/*
 * XREFs of RtlAllocateActivationContextStack @ 0x1800EC550
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 */

__int64 __fastcall RtlAllocateActivationContextStack(_QWORD *a1)
{
  char *Heap_0; // rax
  char *v3; // rdx
  _QWORD *v4; // rax

  if ( *a1 )
    return 0LL;
  Heap_0 = (char *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
  v3 = Heap_0;
  if ( Heap_0 )
  {
    *((_DWORD *)Heap_0 + 6) = 0;
    *(_QWORD *)Heap_0 = 0LL;
    v4 = Heap_0 + 8;
    v4[1] = v4;
    *v4 = v4;
    *((_DWORD *)v3 + 7) = 1;
    *((_DWORD *)v3 + 8) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    *a1 = v3;
    return 0LL;
  }
  return 3221225495LL;
}
