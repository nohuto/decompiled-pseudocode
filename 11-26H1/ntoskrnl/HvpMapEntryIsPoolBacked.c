/*
 * XREFs of HvpMapEntryIsPoolBacked @ 0x1408BF824
 * Callers:
 *     HvFreeHivePartial @ 0x1408BE014 (HvFreeHivePartial.c)
 *     HvTrimHive @ 0x1408BEF28 (HvTrimHive.c)
 *     HvpSetRangeProtection @ 0x1408BF43C (HvpSetRangeProtection.c)
 *     HvHiveCleanup @ 0x1408BF5E0 (HvHiveCleanup.c)
 *     HvpMarkDirty @ 0x1408E1510 (HvpMarkDirty.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1408E23B0 (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x140A8EFC0 (HvpDropPagedBins.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvpMapEntryIsPoolBacked(__int64 a1)
{
  return (*(_DWORD *)(a1 + 20) & 8) != 0;
}
