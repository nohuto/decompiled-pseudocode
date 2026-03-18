/*
 * XREFs of HvpMapEntryIsDiscardable @ 0x1408D9350
 * Callers:
 *     HvTrimHive @ 0x1408B8958 (HvTrimHive.c)
 *     HvpMapEntryGetFreeBin @ 0x1408B8FF0 (HvpMapEntryGetFreeBin.c)
 *     HvHiveCleanup @ 0x1408B9010 (HvHiveCleanup.c)
 *     HvIsCellAllocated @ 0x1408D9150 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x1408D96A0 (CmpCheckValueList.c)
 *     HvpFindFreeCell @ 0x1408DB370 (HvpFindFreeCell.c)
 *     CmpCheckKey @ 0x140A08360 (CmpCheckKey.c)
 *     CmpCheckLeaf @ 0x140A0A744 (CmpCheckLeaf.c)
 *     HvCheckHive @ 0x140A543C0 (HvCheckHive.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvpMapEntryIsDiscardable(__int64 a1)
{
  return (*(_DWORD *)(a1 + 20) & 2) != 0;
}
