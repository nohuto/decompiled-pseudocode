/*
 * XREFs of RtlReAllocateHeapFast @ 0x1801401B0
 * Callers:
 *     RtlReAllocateHeap_0 @ 0x180001CF0 (RtlReAllocateHeap_0.c)
 *     RtlReAllocateHeapExport @ 0x180140180 (RtlReAllocateHeapExport.c)
 * Callees:
 *     RtlpReAllocateHeapInternal @ 0x180005FB0 (RtlpReAllocateHeapInternal.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     RtlpHeapFatalExceptionFilter @ 0x180140318 (RtlpHeapFatalExceptionFilter.c)
 */

__int64 __fastcall RtlReAllocateHeapFast(__int64 a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  if ( !a1 )
    RtlpLogHeapFailure(19, 0LL, a3, 0LL, 0LL, 0LL);
  return RtlpReAllocateHeapInternal(a1, a2, a3, a4);
}
