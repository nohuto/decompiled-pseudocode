/*
 * XREFs of HvpMapEntryIsNewAlloc @ 0x1408DB6C0
 * Callers:
 *     HvTrimHive @ 0x1408B8958 (HvTrimHive.c)
 *     HvpFindNextDirtyBlock @ 0x1408B8B70 (HvpFindNextDirtyBlock.c)
 *     HvpFindFreeCell @ 0x1408DB370 (HvpFindFreeCell.c)
 * Callees:
 *     <none>
 */

char __fastcall HvpMapEntryIsNewAlloc(__int64 a1)
{
  return *(_DWORD *)(a1 + 20) & 1;
}
