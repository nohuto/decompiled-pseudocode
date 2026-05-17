/*
 * XREFs of RtlMultipleAllocateHeap @ 0x180144440
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 */

__int64 __fastcall RtlMultipleAllocateHeap(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 i; // rbx
  __int64 Heap_0; // rax

  for ( i = 0LL; (unsigned int)i < a4; i = (unsigned int)(i + 1) )
  {
    Heap_0 = RtlAllocateHeap_0();
    *(_QWORD *)(a5 + 8 * i) = Heap_0;
    if ( !Heap_0 )
      return (unsigned int)i;
  }
  return a4;
}
