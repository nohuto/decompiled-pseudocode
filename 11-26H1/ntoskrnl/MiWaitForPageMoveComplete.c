/*
 * XREFs of MiWaitForPageMoveComplete @ 0x1403D2500
 * Callers:
 *     MiTradePageMarkedBad @ 0x14028DD80 (MiTradePageMarkedBad.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x1403D1EE0 (MiGetLargePageDemoteAsNeeded.c)
 *     MiGetPartitionNodePageCounts @ 0x1403D23D0 (MiGetPartitionNodePageCounts.c)
 *     MiTryUnlinkNodeLargePages @ 0x140520D5C (MiTryUnlinkNodeLargePages.c)
 *     MiGetHugeRange @ 0x1406F0520 (MiGetHugeRange.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiWaitForPageMoveComplete(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 *v3; // rbx
  __int64 result; // rax
  int v5; // [rsp+38h] [rbp+10h] BYREF

  if ( (a2 & 4) != 0 )
  {
    v2 = 14120LL;
  }
  else if ( (a2 & 1) != 0 )
  {
    v2 = 14112LL;
  }
  else
  {
    v2 = 14104LL;
  }
  v3 = (__int64 *)(v2 + a1);
  v5 = 0;
  result = *(_QWORD *)(v2 + a1);
  if ( (_WORD)result )
  {
    do
    {
      KeYieldProcessorEx(&v5);
      result = *v3;
    }
    while ( (unsigned __int16)*v3 );
  }
  return result;
}
