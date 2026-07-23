/*
 * XREFs of ZwUnlockVirtualMemory @ 0x14072BBA0
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x140384A48 (SmKmStoreHelperCommandProcess.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x140393390 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     VmColdPagesHint @ 0x1404B79D0 (VmColdPagesHint.c)
 *     CmSiUnlockViewOfSection @ 0x1404C7D68 (CmSiUnlockViewOfSection.c)
 *     DifZwUnlockVirtualMemoryWrapper @ 0x1406C22D0 (DifZwUnlockVirtualMemoryWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnlockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
