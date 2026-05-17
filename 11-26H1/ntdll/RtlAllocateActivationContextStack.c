/*
 * XREFs of RtlAllocateActivationContextStack @ 0x1800ED0B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 */

__int64 __fastcall RtlAllocateActivationContextStack(__int64 *a1)
{
  __int64 Heap_0; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rax

  if ( *a1 )
    return 0LL;
  Heap_0 = RtlAllocateHeap_0();
  v3 = Heap_0;
  if ( Heap_0 )
  {
    *(_DWORD *)(Heap_0 + 24) = 0;
    *(_QWORD *)Heap_0 = 0LL;
    v4 = (_QWORD *)(Heap_0 + 8);
    v4[1] = v4;
    *v4 = v4;
    *(_DWORD *)(v3 + 28) = 1;
    *(_DWORD *)(v3 + 32) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    *a1 = v3;
    return 0LL;
  }
  return 3221225495LL;
}
