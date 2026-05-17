/*
 * XREFs of RtlpSetRequestedFrontEndHeap @ 0x180091E5C
 * Callers:
 *     RtlSetHeapInformation @ 0x180111030 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpIsProtectedHeap @ 0x18009178C (RtlpIsProtectedHeap.c)
 */

__int64 __fastcall RtlpSetRequestedFrontEndHeap(__int64 a1)
{
  char v2; // di
  unsigned int v3; // esi

  v2 = 0;
  v3 = 0;
  RtlEnterCriticalSection((__int64)&RtlpProcessHeapsLock);
  if ( (unsigned int)RtlpIsProtectedHeap(a1) )
  {
    v3 = -1073741811;
  }
  else
  {
    RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
    v2 = 1;
    if ( !*(_BYTE *)(a1 + 419) )
    {
      *(_BYTE *)(a1 + 419) = 2;
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      v2 = 0;
    }
  }
  if ( v2 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsLock);
  return v3;
}
