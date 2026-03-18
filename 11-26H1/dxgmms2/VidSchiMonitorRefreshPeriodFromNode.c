/*
 * XREFs of VidSchiMonitorRefreshPeriodFromNode @ 0x140030924
 * Callers:
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x14000B434 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x140027C1C (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140030808 (-VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiMonitorRefreshPeriodFromNode(__int64 a1)
{
  __int64 v1; // rbx
  ULONGLONG v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(unsigned int *)(a1 + 1888);
  if ( !v3 )
  {
    result = *(unsigned int *)(*(_QWORD *)(v1 + 3448) + 83104LL);
    if ( (_DWORD)result )
      return result;
    if ( (*(_DWORD *)(*(_QWORD *)(v1 + 16) + 444LL) & 0x10) == 0 )
    {
      WdLogSingleEntry2(3LL, v1, 0LL);
      WdLogGlobalForLineNumber = 6035;
    }
    return 16LL;
  }
  v4 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 16LL * (unsigned int)RtlFindMostSignificantBit(v3) + 2184) + 96LL)
                       + 512LL);
  if ( (unsigned int)v4 > *(_DWORD *)(v1 + 48) )
    v4 = 0LL;
  v5 = (unsigned int)v4;
  result = *(unsigned int *)(*(_QWORD *)(v1 + 8 * v4 + 3448) + 83104LL);
  if ( !(_DWORD)result )
  {
    WdLogSingleEntry1(3LL, v5);
    WdLogGlobalForLineNumber = 6061;
    return 16LL;
  }
  return result;
}
