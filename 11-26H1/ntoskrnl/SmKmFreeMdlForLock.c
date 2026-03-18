/*
 * XREFs of SmKmFreeMdlForLock @ 0x14038302C
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x140382C98 (SmKmStoreHelperCommandProcess.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14038FB60 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmFpCleanup @ 0x1403F02E0 (SmFpCleanup.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x140394610 (SmAcquireReleaseCharges.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall SmKmFreeMdlForLock(__int64 a1, unsigned int *a2)
{
  SmAcquireReleaseCharges(a1, a2[10], 3LL, 1LL);
  ExFreePoolWithTag(a2, 0);
}
