/*
 * XREFs of MiPageChainCount @ 0x140474500
 * Callers:
 *     MiCreateUserPhysicalViewCharges @ 0x140773E70 (MiCreateUserPhysicalViewCharges.c)
 *     MiCreateHardwareEnclave @ 0x14087C4D4 (MiCreateHardwareEnclave.c)
 *     MiAllocateFastAwePages @ 0x14087DAC8 (MiAllocateFastAwePages.c)
 *     MiAllocateUserPhysicalPagesPrepare @ 0x14087E398 (MiAllocateUserPhysicalPagesPrepare.c)
 *     MiCreateAweInfoBitMap @ 0x14087EC68 (MiCreateAweInfoBitMap.c)
 *     MiCreateUserPhysicalView @ 0x14087EEBC (MiCreateUserPhysicalView.c)
 *     MiDeleteAweInfoPages @ 0x14087F2AC (MiDeleteAweInfoPages.c)
 *     MiProtectAwePrepare @ 0x14087F400 (MiProtectAwePrepare.c)
 *     NtFreeUserPhysicalPages @ 0x14087F7C0 (NtFreeUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x14087FCE0 (NtMapUserPhysicalPagesScatter.c)
 *     MiDeleteSparseRange @ 0x1408807B0 (MiDeleteSparseRange.c)
 *     MiFreeReadListPages @ 0x140A5B8D0 (MiFreeReadListPages.c)
 *     NtMapUserPhysicalPages @ 0x140B3C1D0 (NtMapUserPhysicalPages.c)
 *     MiGetAweVadPageSize @ 0x140B4CA44 (MiGetAweVadPageSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageChainCount(__int64 a1)
{
  return *(_QWORD *)(a1 + 16);
}
