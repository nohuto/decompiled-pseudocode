/*
 * XREFs of RtlAllocateHeapFull @ 0x1406196B8
 * Callers:
 *     RtlAllocateHeap @ 0x14051C360 (RtlAllocateHeap.c)
 *     RtlAllocateHeapExport @ 0x140619688 (RtlAllocateHeapExport.c)
 * Callees:
 *     RtlpAllocateNTHeapInternal @ 0x140498638 (RtlpAllocateNTHeapInternal.c)
 *     RtlpLogHeapFailure @ 0x140521C9C (RtlpLogHeapFailure.c)
 *     RtlpHeapFatalExceptionFilter @ 0x14061985C (RtlpHeapFatalExceptionFilter.c)
 */

_BYTE *__fastcall RtlAllocateHeapFull(_DWORD *HeapHandle, unsigned int a2, unsigned __int64 a3)
{
  __int64 v6; // rbx

  v6 = 0LL;
  if ( !HeapHandle )
    RtlpLogHeapFailure(0x13u, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( HeapHandle[4] != -571548178 )
    return RtlpAllocateNTHeapInternal((__int64)HeapHandle, a3, a2);
  return (_BYTE *)v6;
}
