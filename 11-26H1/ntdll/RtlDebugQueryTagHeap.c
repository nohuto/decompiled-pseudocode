/*
 * XREFs of RtlDebugQueryTagHeap @ 0x180106C68
 * Callers:
 *     RtlQueryTagHeap @ 0x180106A90 (RtlQueryTagHeap.c)
 * Callees:
 *     RtlpCheckHeapSignature @ 0x180014E10 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x180014EB8 (RtlpValidateHeap.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180019AA0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpHeapExceptionFilter @ 0x180100D78 (RtlpHeapExceptionFilter.c)
 *     RtlQueryTagHeap @ 0x180106A90 (RtlQueryTagHeap.c)
 */

void *__fastcall RtlDebugQueryTagHeap(__int64 a1, int a2, unsigned __int16 a3, char a4, __int64 a5)
{
  char v9; // si
  void *TagHeap; // r14
  int v11; // edi

  v9 = 0;
  TagHeap = 0LL;
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlQueryTagHeap") )
  {
    v11 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v11 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v9 = 1;
      v11 |= 1u;
    }
    if ( RtlpValidateHeap(a1, 0) )
      TagHeap = RtlQueryTagHeap(a1, v11, a3, a4, a5);
  }
  if ( v9 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return TagHeap;
}
