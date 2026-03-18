/*
 * XREFs of RtlSizeHeap @ 0x140619810
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLogHeapFailure @ 0x140521C9C (RtlpLogHeapFailure.c)
 *     RtlpSizeHeapInternal @ 0x14061D584 (RtlpSizeHeapInternal.c)
 */

__int64 __fastcall RtlSizeHeap(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !a1 )
    RtlpLogHeapFailure(0x13u, 0LL, a3, 0LL, 0LL, 0LL);
  return RtlpSizeHeapInternal(a1, a2, a3);
}
