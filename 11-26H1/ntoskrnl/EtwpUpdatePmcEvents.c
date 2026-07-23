/*
 * XREFs of EtwpUpdatePmcEvents @ 0x14082D798
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140B38820 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     EtwpAllocatePmcData @ 0x14082B3A8 (EtwpAllocatePmcData.c)
 */

__int64 __fastcall EtwpUpdatePmcEvents(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int PmcData; // ebx
  __int64 i; // rdi
  int v10; // ecx
  signed __int32 v12[18]; // [rsp+0h] [rbp-48h] BYREF

  PmcData = 0;
  if ( a3 && a3 <= 4 )
  {
    if ( *(_QWORD *)(a1 + 1064) || (PmcData = EtwpAllocatePmcData(a1)) == 0 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 1064) + 8LL) )
        PmcData = -1073741053;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v12[8] = i;
        if ( (unsigned int)i >= a3 )
          break;
        if ( a4 )
          LOWORD(v10) = RtlReadULongFromUser((unsigned int *)(a2 + 4 * i));
        else
          v10 = *(_DWORD *)(a2 + 4 * i);
        *(_WORD *)(*(_QWORD *)(a1 + 1064) + 2 * i + 12) = v10;
      }
      _InterlockedOr(v12, 0);
      *(_DWORD *)(*(_QWORD *)(a1 + 1064) + 8LL) = a3;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return PmcData;
}
