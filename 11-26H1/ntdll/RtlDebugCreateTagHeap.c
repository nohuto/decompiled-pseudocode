/*
 * XREFs of RtlDebugCreateTagHeap @ 0x180146E14
 * Callers:
 *     RtlCreateTagHeap @ 0x1800CB280 (RtlCreateTagHeap.c)
 * Callees:
 *     RtlpCheckHeapSignature @ 0x180014E10 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x180014EB8 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180015508 (RtlpValidateHeapHeaders.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180019AA0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlCreateTagHeap @ 0x1800CB280 (RtlCreateTagHeap.c)
 *     RtlpHeapExceptionFilter @ 0x180100D78 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugCreateTagHeap(_QWORD *Src, int a2, __int64 a3, _WORD *a4)
{
  char v8; // si
  unsigned int TagHeap; // r14d
  int v10; // edi

  v8 = 0;
  TagHeap = 0;
  if ( RtlpCheckHeapSignature(Src, "RtlCreateTagHeap") )
  {
    v10 = *((_DWORD *)Src + 29) | 0x10000000 | a2;
    if ( (v10 & 1) == 0 )
    {
      RtlEnterCriticalSection(Src[44]);
      v8 = 1;
      v10 |= 1u;
    }
    if ( RtlpValidateHeap((__int64)Src, 0) )
      TagHeap = RtlCreateTagHeap(Src, v10, a3, a4);
    RtlpValidateHeapHeaders(Src, 1);
  }
  if ( v8 )
    RtlLeaveCriticalSection(Src[44]);
  return TagHeap;
}
