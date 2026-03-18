/*
 * XREFs of ZwUnlockVirtualMemory @ 0x14069ED00
 * Callers:
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14020AA10 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     SmKmStoreHelperCommandProcess @ 0x14020D8E4 (SmKmStoreHelperCommandProcess.c)
 *     VmColdPagesHint @ 0x14042BAD0 (VmColdPagesHint.c)
 *     CmSiUnlockViewOfSection @ 0x14048F8C4 (CmSiUnlockViewOfSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnlockVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
