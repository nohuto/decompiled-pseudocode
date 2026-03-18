/*
 * XREFs of MiNotifyPageHeat @ 0x14052F470
 * Callers:
 *     MiIssuePageHeatList @ 0x1402F383C (MiIssuePageHeatList.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     HvlNotifyPageHeat @ 0x140517DA4 (HvlNotifyPageHeat.c)
 *     MiLogNotifyPageHeat @ 0x140704DD0 (MiLogNotifyPageHeat.c)
 */

__int64 __fastcall MiNotifyPageHeat(_DWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  if ( stru_140E36558.FirstArgument
    && *(_DWORD *)stru_140E36558.FirstArgument
    && tlgKeywordOn((__int64)stru_140E36558.FirstArgument, 64LL) )
  {
    MiLogNotifyPageHeat(v2, a1);
  }
  result = HvlNotifyPageHeat(*a1 & 1, KeGetCurrentIrql() < 2u, a1[1], (__int64)(a1 + 4));
  a1[1] = 0;
  return result;
}
