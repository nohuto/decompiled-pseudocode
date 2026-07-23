/*
 * XREFs of RtlFreeHeapFast @ 0x18013FFE0
 * Callers:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlFreeHeapExport @ 0x18013FFC0 (RtlFreeHeapExport.c)
 * Callees:
 *     RtlpFreeNTHeapInternal @ 0x1800036C0 (RtlpFreeNTHeapInternal.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180004B80 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpHpFreeHeap @ 0x180004CE0 (RtlpHpFreeHeap.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     RtlpHeapFatalExceptionFilter @ 0x180140318 (RtlpHeapFatalExceptionFilter.c)
 */

__int64 __fastcall RtlFreeHeapFast(__int64 a1, int a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v8; // edi
  struct _TEB *v9; // rbx

  if ( (a1 & a3) == 0 )
  {
    if ( !a3 )
      return 1LL;
    if ( !a1 )
      RtlpLogHeapFailure(19, 0LL, a3, 0LL, 0LL, 0LL);
  }
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v8 = RtlpHpFreeHeap(a1, a3, a3);
    if ( !v8 )
    {
      v9 = NtCurrentTeb();
      v9->LastStatusValue = -1073741811;
      v9->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741811);
    }
  }
  else
  {
    return (unsigned int)RtlpFreeNTHeapInternal(a1, a3, a2, a4);
  }
  return v8;
}
