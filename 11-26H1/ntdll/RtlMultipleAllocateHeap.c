/*
 * XREFs of RtlMultipleAllocateHeap @ 0x180144330
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 */

ULONG __cdecl RtlMultipleAllocateHeap(PVOID HeapHandle, ULONG Flags, SIZE_T Size, ULONG Count, PVOID *Array)
{
  __int64 i; // rbx
  PVOID Heap_0; // rax

  for ( i = 0LL; (unsigned int)i < Count; i = (unsigned int)(i + 1) )
  {
    Heap_0 = RtlAllocateHeap_0(HeapHandle, Flags, Size);
    Array[i] = Heap_0;
    if ( !Heap_0 )
      return i;
  }
  return Count;
}
