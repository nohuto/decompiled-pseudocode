/*
 * XREFs of HvpMapEntryIsNewAlloc @ 0x1408E1C80
 * Callers:
 *     HvTrimHive @ 0x1408BEF28 (HvTrimHive.c)
 *     HvpFindNextDirtyBlock @ 0x1408BF140 (HvpFindNextDirtyBlock.c)
 *     HvpFindFreeCell @ 0x1408E1930 (HvpFindFreeCell.c)
 * Callees:
 *     <none>
 */

char __fastcall HvpMapEntryIsNewAlloc(__int64 a1)
{
  return *(_DWORD *)(a1 + 20) & 1;
}
