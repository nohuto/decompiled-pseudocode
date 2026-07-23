/*
 * XREFs of RtlMultipleFreeHeap @ 0x1801443A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 */

ULONG __cdecl RtlMultipleFreeHeap(PVOID HeapHandle, ULONG Flags, ULONG Count, PVOID *Array)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < Count; i = (unsigned int)(i + 1) )
  {
    if ( !RtlFreeHeap_0(HeapHandle, Flags, Array[i]) )
      return i;
  }
  return Count;
}
