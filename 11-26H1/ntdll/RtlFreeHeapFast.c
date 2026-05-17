/*
 * XREFs of RtlFreeHeapFast @ 0x1801400E0
 * Callers:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlFreeHeapExport @ 0x1801400C0 (RtlFreeHeapExport.c)
 * Callees:
 *     RtlpFreeNTHeapInternal @ 0x1800185E0 (RtlpFreeNTHeapInternal.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180019AA0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpHpFreeHeap @ 0x180019C00 (RtlpHpFreeHeap.c)
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
 *     RtlpHeapFatalExceptionFilter @ 0x180140418 (RtlpHeapFatalExceptionFilter.c)
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
      v9->LastErrorValue = RtlNtStatusToDosErrorNoTeb(0xC000000D);
    }
  }
  else
  {
    return (unsigned int)RtlpFreeNTHeapInternal(a1, a3, a2, a4);
  }
  return v8;
}
