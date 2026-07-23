/*
 * XREFs of RtlSizeHeap @ 0x14061C860
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 *     RtlpSizeHeapInternal @ 0x1406205D4 (RtlpSizeHeapInternal.c)
 */

// local variable allocation has failed, the output may be wrong!
SIZE_T __cdecl RtlSizeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  if ( !HeapHandle )
    RtlpLogHeapFailure(0x13u, 0LL, (__int64)BaseAddress, 0LL, 0LL, 0LL);
  return RtlpSizeHeapInternal(HeapHandle, *(_QWORD *)&Flags, BaseAddress);
}
