/*
 * XREFs of HvpFreeBin @ 0x1408B78AC
 * Callers:
 *     HvpAddDummyBinToHive @ 0x14085D5C8 (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x14085D694 (HvpMapHiveImage.c)
 *     HvFreeHivePartial @ 0x1408B7A44 (HvFreeHivePartial.c)
 *     HvHiveCleanup @ 0x1408B9010 (HvHiveCleanup.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1408DBDF0 (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x140A87E90 (HvpDropPagedBins.c)
 *     HvpAddBin @ 0x140B7EAA0 (HvpAddBin.c)
 * Callees:
 *     CmpProtectPool @ 0x14024E81C (CmpProtectPool.c)
 *     MmFreeIndependentPages @ 0x140308D40 (MmFreeIndependentPages.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HvpFreeBin(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) != 0 )
    return MmFreeIndependentPages(a3, a2);
  CmpProtectPool(a3, a2, 4u);
  return guard_dispatch_icall_no_overrides(a3, a2);
}
