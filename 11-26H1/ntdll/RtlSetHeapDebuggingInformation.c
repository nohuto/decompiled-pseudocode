/*
 * XREFs of RtlSetHeapDebuggingInformation @ 0x180114660
 * Callers:
 *     RtlSetHeapInformation @ 0x180110BC0 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x180076180 (RtlpEnumProcessHeaps.c)
 *     RtlpReleaseHeapListLock @ 0x1800762B0 (RtlpReleaseHeapListLock.c)
 *     RtlpAcquireHeapListLock @ 0x1800762FC (RtlpAcquireHeapListLock.c)
 *     RtlpIsProtectedHeap @ 0x18007653C (RtlpIsProtectedHeap.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1801453D0 (RtlpSetHeapDebuggingInformation.c)
 */

__int64 __fastcall RtlSetHeapDebuggingInformation(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  unsigned int v5; // ebx

  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    {
      return 3221225474LL;
    }
    else
    {
      RtlpAcquireHeapListLock();
      if ( (unsigned int)RtlpIsProtectedHeap(a1) )
        v5 = -1073741811;
      else
        v5 = RtlpSetHeapDebuggingInformation(v4);
      RtlpReleaseHeapListLock(0);
      return v5;
    }
  }
  else
  {
    dword_1801CBFEC = *(_DWORD *)(a2 + 12);
    xmmword_1801CC000 = *(_OWORD *)(a2 + 32);
    *((_QWORD *)&xmmword_1801CBFF0 + 1) = *(_QWORD *)(a2 + 24);
    LODWORD(xmmword_1801CBFF0) = *(_DWORD *)(a2 + 16);
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(__int64, _QWORD, __int64))RtlpSetHeapDebuggingInformation, a2, 0);
    return 0LL;
  }
}
