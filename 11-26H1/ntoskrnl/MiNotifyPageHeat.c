/*
 * XREFs of MiNotifyPageHeat @ 0x140531990
 * Callers:
 *     MiIssuePageHeatList @ 0x1402D58BC (MiIssuePageHeatList.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     HvlNotifyPageHeat @ 0x140511814 (HvlNotifyPageHeat.c)
 *     MiLogNotifyPageHeat @ 0x140709AA0 (MiLogNotifyPageHeat.c)
 */

__int64 __fastcall MiNotifyPageHeat(_DWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  if ( stru_140E366D8.FirstArgument
    && *(_DWORD *)stru_140E366D8.FirstArgument
    && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 64LL) )
  {
    MiLogNotifyPageHeat(v2, a1);
  }
  result = HvlNotifyPageHeat(*a1 & 1, KeGetCurrentIrql() < 2u, a1[1], (__int64)(a1 + 4));
  a1[1] = 0;
  return result;
}
