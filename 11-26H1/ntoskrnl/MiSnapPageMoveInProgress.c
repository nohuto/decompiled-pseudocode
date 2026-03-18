/*
 * XREFs of MiSnapPageMoveInProgress @ 0x1403C85E0
 * Callers:
 *     MiTradePageMarkedBad @ 0x14028E820 (MiTradePageMarkedBad.c)
 *     MiGetPartitionNodePageCounts @ 0x1403C84E0 (MiGetPartitionNodePageCounts.c)
 *     MiTryUnlinkNodeLargePages @ 0x14051E74C (MiTryUnlinkNodeLargePages.c)
 *     MiGetHugeRange @ 0x1406EB880 (MiGetHugeRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSnapPageMoveInProgress(__int64 a1, char a2)
{
  __int64 v2; // rax

  if ( (a2 & 4) != 0 )
  {
    v2 = 14120LL;
    return *(_QWORD *)(v2 + a1);
  }
  if ( (a2 & 1) != 0 )
  {
    v2 = 14112LL;
    return *(_QWORD *)(v2 + a1);
  }
  return *(_QWORD *)(a1 + 14104);
}
