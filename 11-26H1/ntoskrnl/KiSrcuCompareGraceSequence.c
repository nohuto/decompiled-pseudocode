/*
 * XREFs of KiSrcuCompareGraceSequence @ 0x1404D9AC0
 * Callers:
 *     KiSrcuReportQuiescent @ 0x1404628BC (KiSrcuReportQuiescent.c)
 *     KiRcuReportQuiescentState @ 0x1404D99B8 (KiRcuReportQuiescentState.c)
 *     KiRcuFlushCompleted @ 0x140503B7C (KiRcuFlushCompleted.c)
 *     KiSrcuFlushCompleted @ 0x14052EB44 (KiSrcuFlushCompleted.c)
 *     KiRcuRebalance @ 0x1405F014C (KiRcuRebalance.c)
 *     KiSrcuRebalance @ 0x1405F5B18 (KiSrcuRebalance.c)
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
