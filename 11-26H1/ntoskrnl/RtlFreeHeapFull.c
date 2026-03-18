/*
 * XREFs of RtlFreeHeapFull @ 0x140619770
 * Callers:
 *     RtlFreeHeap @ 0x14051C3A0 (RtlFreeHeap.c)
 *     RtlFreeHeapExport @ 0x140619740 (RtlFreeHeapExport.c)
 * Callees:
 *     RtlpFreeNTHeapInternal @ 0x140352C30 (RtlpFreeNTHeapInternal.c)
 *     RtlpLogHeapFailure @ 0x140521C9C (RtlpLogHeapFailure.c)
 *     RtlpHeapFatalExceptionFilter @ 0x14061985C (RtlpHeapFatalExceptionFilter.c)
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
