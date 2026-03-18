/*
 * XREFs of HvpMapEntryIsPoolBacked @ 0x1408B9254
 * Callers:
 *     HvFreeHivePartial @ 0x1408B7A44 (HvFreeHivePartial.c)
 *     HvTrimHive @ 0x1408B8958 (HvTrimHive.c)
 *     HvpSetRangeProtection @ 0x1408B8E6C (HvpSetRangeProtection.c)
 *     HvHiveCleanup @ 0x1408B9010 (HvHiveCleanup.c)
 *     HvpMarkDirty @ 0x1408DAF50 (HvpMarkDirty.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1408DBDF0 (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x140A87E90 (HvpDropPagedBins.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvpMapEntryIsPoolBacked(__int64 a1)
{
  return (*(_DWORD *)(a1 + 20) & 8) != 0;
}
