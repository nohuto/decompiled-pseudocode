/*
 * XREFs of ZwUnlockVirtualMemory @ 0x140726FD0
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x140382C98 (SmKmStoreHelperCommandProcess.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x140391600 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     VmColdPagesHint @ 0x1404BE180 (VmColdPagesHint.c)
 *     CmSiUnlockViewOfSection @ 0x1404CE338 (CmSiUnlockViewOfSection.c)
 *     DifZwUnlockVirtualMemoryWrapper @ 0x1406BE6F0 (DifZwUnlockVirtualMemoryWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnlockVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
