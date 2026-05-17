/*
 * XREFs of RtlReAllocateHeapFast @ 0x1801402B0
 * Callers:
 *     RtlReAllocateHeap_0 @ 0x180038020 (RtlReAllocateHeap_0.c)
 *     RtlReAllocateHeapExport @ 0x180140280 (RtlReAllocateHeapExport.c)
 * Callees:
 *     RtlpReAllocateHeapInternal @ 0x18001AED0 (RtlpReAllocateHeapInternal.c)
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
 *     RtlpHeapFatalExceptionFilter @ 0x180140418 (RtlpHeapFatalExceptionFilter.c)
 */

__int64 __fastcall RtlReAllocateHeapFast(__int64 a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  if ( !a1 )
    RtlpLogHeapFailure(19, 0LL, a3, 0LL, 0LL, 0LL);
  return RtlpReAllocateHeapInternal(a1, a2, a3, a4);
}
