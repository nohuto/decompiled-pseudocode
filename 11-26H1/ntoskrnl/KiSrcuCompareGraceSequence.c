/*
 * XREFs of KiSrcuCompareGraceSequence @ 0x1404D31A0
 * Callers:
 *     KiSrcuReportQuiescent @ 0x14045B87C (KiSrcuReportQuiescent.c)
 *     KiRcuReportQuiescentState @ 0x1404D3098 (KiRcuReportQuiescentState.c)
 *     KiRcuFlushCompleted @ 0x1404FD44C (KiRcuFlushCompleted.c)
 *     KiSrcuFlushCompleted @ 0x140531064 (KiSrcuFlushCompleted.c)
 *     KiRcuRebalance @ 0x1405F2ABC (KiRcuRebalance.c)
 *     KiSrcuRebalance @ 0x1405F84D8 (KiSrcuRebalance.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSrcuCompareGraceSequence(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = a1 - a2;
  if ( !v2 )
    return 0LL;
  result = 0xFFFFFFFFLL;
  if ( v2 > 0 )
    return 1LL;
  return result;
}
