/*
 * XREFs of HvpMapEntryIsDiscardable @ 0x1408DF910
 * Callers:
 *     HvTrimHive @ 0x1408BEF28 (HvTrimHive.c)
 *     HvpMapEntryGetFreeBin @ 0x1408BF5C0 (HvpMapEntryGetFreeBin.c)
 *     HvHiveCleanup @ 0x1408BF5E0 (HvHiveCleanup.c)
 *     HvIsCellAllocated @ 0x1408DF710 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x1408DFC60 (CmpCheckValueList.c)
 *     HvpFindFreeCell @ 0x1408E1930 (HvpFindFreeCell.c)
 *     CmpCheckKey @ 0x140A1E430 (CmpCheckKey.c)
 *     CmpCheckLeaf @ 0x140A20814 (CmpCheckLeaf.c)
 *     HvCheckHive @ 0x140A5D6B0 (HvCheckHive.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvpMapEntryIsDiscardable(__int64 a1)
{
  return (*(_DWORD *)(a1 + 20) & 2) != 0;
}
