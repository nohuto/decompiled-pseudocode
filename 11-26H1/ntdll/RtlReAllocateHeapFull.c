/*
 * XREFs of RtlReAllocateHeapFull @ 0x180140350
 * Callers:
 *     RtlReAllocateHeap_0 @ 0x180038020 (RtlReAllocateHeap_0.c)
 *     RtlReAllocateHeapExport @ 0x180140280 (RtlReAllocateHeapExport.c)
 * Callees:
 *     RtlpReAllocateHeapInternal @ 0x18001AED0 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpTagReAllocateHeap @ 0x1800B13D0 (RtlpHpTagReAllocateHeap.c)
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
 *     RtlpHeapFatalExceptionFilter @ 0x180140418 (RtlpHeapFatalExceptionFilter.c)
 */

__int64 __fastcall RtlReAllocateHeapFull(__int64 a1, unsigned int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  if ( !a1 )
    RtlpLogHeapFailure(19, 0LL, a3, 0LL, 0LL, 0LL);
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( (RtlpHpHeapFeatures & 4) == 0 )
      return RtlpReAllocateHeapInternal(a1, a2, a3, a4);
    return RtlpHpTagReAllocateHeap(a1, a3, a4, a2);
  }
  if ( (RtlpHpHeapFeatures & 4) != 0 )
    return RtlpHpTagReAllocateHeap(a1, a3, a4, a2);
  return RtlpReAllocateHeapInternal(a1, a2, a3, a4);
}
