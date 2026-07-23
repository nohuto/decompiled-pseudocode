/*
 * XREFs of KiSrcuRequiresRebalance @ 0x1405F86E4
 * Callers:
 *     KiSrcuReportQuiescent @ 0x14045B87C (KiSrcuReportQuiescent.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiSrcuRequiresRebalance(__int64 a1)
{
  __int64 result; // rax

  _m_prefetchw((const void *)(a1 + 64));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a1 + 64), 1u);
  if ( (result & 1) == 0 )
    return KiInsertQueueDpc(a1 + 88, 0LL, 0LL, 0LL, 0);
  return result;
}
