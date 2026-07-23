/*
 * XREFs of RtlFreeHeapFull @ 0x14061C7CC
 * Callers:
 *     RtlFreeHeap @ 0x140518F90 (RtlFreeHeap.c)
 *     RtlFreeHeapExport @ 0x14061C79C (RtlFreeHeapExport.c)
 * Callees:
 *     RtlpFreeNTHeapInternal @ 0x140354CB0 (RtlpFreeNTHeapInternal.c)
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 *     RtlpHeapFatalExceptionFilter @ 0x14061C8AC (RtlpHeapFatalExceptionFilter.c)
 */

__int64 __fastcall RtlFreeHeapFull(unsigned __int64 a1, int a2, unsigned __int64 a3)
{
  unsigned int v6; // ebx

  v6 = 0;
  if ( (a1 & a3) == 0 )
  {
    if ( !a3 )
      return 1LL;
    if ( !a1 )
      RtlpLogHeapFailure(0x13u, 0LL, a3, 0LL, 0LL, 0LL);
  }
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    return (unsigned int)RtlpFreeNTHeapInternal((_DWORD *)a1, a3, a2);
  return v6;
}
