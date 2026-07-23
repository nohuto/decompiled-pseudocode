/*
 * XREFs of EtwpUpdateLastBranchTracingEvents @ 0x140B39990
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140B38820 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     EtwpUpdateLastBranchTracingHalState @ 0x1404F3B18 (EtwpUpdateLastBranchTracingHalState.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     EtwpAllocateLbrData @ 0x14083631C (EtwpAllocateLbrData.c)
 */

__int64 __fastcall EtwpUpdateLastBranchTracingEvents(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 result; // rax
  __int64 i; // rbx
  int v10; // ecx
  signed __int32 v11[18]; // [rsp+0h] [rbp-48h] BYREF

  if ( !EtwpLastBranchSupportedOptions )
    return 3221225659LL;
  if ( a3 > 4 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 1072) || (result = EtwpAllocateLbrData(a1), (int)result >= 0) )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v11[8] = i;
      if ( (unsigned int)i >= a3 )
        break;
      if ( a4 )
        LOWORD(v10) = RtlReadULongFromUser((unsigned int *)(a2 + 4 * i));
      else
        v10 = *(_DWORD *)(a2 + 4 * i);
      *(_WORD *)(*(_QWORD *)(a1 + 1072) + 2 * i + 12) = v10;
    }
    _InterlockedOr(v11, 0);
    *(_DWORD *)(*(_QWORD *)(a1 + 1072) + 8LL) = a3;
    EtwpUpdateLastBranchTracingHalState(a1);
    return 0LL;
  }
  return result;
}
