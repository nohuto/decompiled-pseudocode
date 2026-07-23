/*
 * XREFs of ExpPoolLookasideRebalance @ 0x140428B54
 * Callers:
 *     ExpPoolMgrRebalanceWorker @ 0x140AC5280 (ExpPoolMgrRebalanceWorker.c)
 * Callees:
 *     RtlpDynamicLookasideRebalance @ 0x140428B9C (RtlpDynamicLookasideRebalance.c)
 */

__int64 __fastcall ExpPoolLookasideRebalance(__int64 a1)
{
  unsigned int i; // ebx
  __int64 result; // rax
  __int64 v4; // rcx

  for ( i = 0; i < *(_DWORD *)(a1 + 72); ++i )
  {
    result = *(_QWORD *)(a1 + 16 * (i + 5LL));
    v4 = *(_QWORD *)(result + 56);
    if ( v4 )
      result = RtlpDynamicLookasideRebalance(v4);
  }
  return result;
}
