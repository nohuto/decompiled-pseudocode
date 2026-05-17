/*
 * XREFs of RtlSetHeapDebuggingInformation @ 0x180114E70
 * Callers:
 *     RtlSetHeapInformation @ 0x180111030 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpEnumProcessHeaps @ 0x180091420 (RtlpEnumProcessHeaps.c)
 *     RtlpIsProtectedHeap @ 0x18009178C (RtlpIsProtectedHeap.c)
 *     RtlpSetHeapDebuggingInformation @ 0x180145520 (RtlpSetHeapDebuggingInformation.c)
 */

__int64 __fastcall RtlSetHeapDebuggingInformation(__int64 a1, __int64 a2)
{
  __int64 v5; // rcx
  unsigned int v6; // ebx

  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    {
      return 3221225474LL;
    }
    else
    {
      RtlEnterCriticalSection((__int64)&RtlpProcessHeapsLock);
      if ( (unsigned int)RtlpIsProtectedHeap(a1) )
        v6 = -1073741811;
      else
        v6 = RtlpSetHeapDebuggingInformation(v5, a2);
      RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsLock);
      return v6;
    }
  }
  else
  {
    HIDWORD(RtlpDefaultHeapDebuggingOptions) = *(_DWORD *)(a2 + 12);
    xmmword_1801CCFC0 = *(_OWORD *)(a2 + 32);
    *((_QWORD *)&xmmword_1801CCFB0 + 1) = *(_QWORD *)(a2 + 24);
    LODWORD(xmmword_1801CCFB0) = *(_DWORD *)(a2 + 16);
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(__int64, _QWORD, __int64))RtlpSetHeapDebuggingInformation, a2, 0);
    return 0LL;
  }
}
