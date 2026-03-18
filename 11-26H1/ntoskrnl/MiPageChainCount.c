/*
 * XREFs of MiPageChainCount @ 0x14047AB90
 * Callers:
 *     MiCreateUserPhysicalViewCharges @ 0x140770E70 (MiCreateUserPhysicalViewCharges.c)
 *     MiCreateHardwareEnclave @ 0x1408760F0 (MiCreateHardwareEnclave.c)
 *     MiAllocateFastAwePages @ 0x1408776E8 (MiAllocateFastAwePages.c)
 *     MiAllocateUserPhysicalPagesPrepare @ 0x140877FB8 (MiAllocateUserPhysicalPagesPrepare.c)
 *     MiCreateAweInfoBitMap @ 0x140878888 (MiCreateAweInfoBitMap.c)
 *     MiCreateUserPhysicalView @ 0x140878ADC (MiCreateUserPhysicalView.c)
 *     MiDeleteAweInfoPages @ 0x140878ECC (MiDeleteAweInfoPages.c)
 *     MiProtectAwePrepare @ 0x140879020 (MiProtectAwePrepare.c)
 *     NtFreeUserPhysicalPages @ 0x1408793E0 (NtFreeUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140879900 (NtMapUserPhysicalPagesScatter.c)
 *     MiDeleteSparseRange @ 0x14087A3B4 (MiDeleteSparseRange.c)
 *     MiFreeReadListPages @ 0x140A525E0 (MiFreeReadListPages.c)
 *     NtMapUserPhysicalPages @ 0x140B39FC0 (NtMapUserPhysicalPages.c)
 *     MiGetAweVadPageSize @ 0x140B4ACB4 (MiGetAweVadPageSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageChainCount(__int64 a1)
{
  return *(_QWORD *)(a1 + 16);
}
