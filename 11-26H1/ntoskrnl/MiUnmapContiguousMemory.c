/*
 * XREFs of MiUnmapContiguousMemory @ 0x1403456A8
 * Callers:
 *     HalpAcpiGetTableWork @ 0x140344BEC (HalpAcpiGetTableWork.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x140344D90 (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiGetRsdt @ 0x140344EE4 (HalpAcpiGetRsdt.c)
 *     HalpAcpiCheckAndMapTable @ 0x1403453F0 (HalpAcpiCheckAndMapTable.c)
 *     MmUnmapIoSpace @ 0x140345690 (MmUnmapIoSpace.c)
 *     MmFreeContiguousMemory @ 0x140346600 (MmFreeContiguousMemory.c)
 *     MiAllocateContiguousMemory @ 0x14034C30C (MiAllocateContiguousMemory.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x140358724 (HalpDmaAllocateNewTranslationBuffer.c)
 *     MiMapContiguousMemory @ 0x140365BB0 (MiMapContiguousMemory.c)
 *     HalpDmaFreeMapRegisterFrame @ 0x1405339CC (HalpDmaFreeMapRegisterFrame.c)
 *     HalInitializeBios @ 0x14057A9D0 (HalInitializeBios.c)
 *     HalpAcpiGetAllTablesWork @ 0x14057BAAC (HalpAcpiGetAllTablesWork.c)
 *     HalpMcaExtendedLogInitialize @ 0x14057D488 (HalpMcaExtendedLogInitialize.c)
 *     DifMmUnmapIoSpaceWrapper @ 0x14066C3C0 (DifMmUnmapIoSpaceWrapper.c)
 *     WmipReadSMBiosSysInfo @ 0x1406C7088 (WmipReadSMBiosSysInfo.c)
 *     WmipFirmwareTableHandler @ 0x1406C7240 (WmipFirmwareTableHandler.c)
 *     SfsInitialize @ 0x1406E141C (SfsInitialize.c)
 *     MiHugePageOperation @ 0x140709E08 (MiHugePageOperation.c)
 *     BgpFwLibraryEnable @ 0x14071AB1C (BgpFwLibraryEnable.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140CB4538 (HalpPowerInitFwPerformanceTableMappings.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140CB6CB8 (HalpDmaInitializeMasterAdapter.c)
 *     HalpAuditEnumerateRsdts @ 0x140CBA00C (HalpAuditEnumerateRsdts.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140CBA0F8 (HalpAuditEnumerateRsdtsInRange.c)
 *     HalpAuditQuerySlicAddresses @ 0x140CBA1EC (HalpAuditQuerySlicAddresses.c)
 *     PipInitComputerIds @ 0x140D0B980 (PipInitComputerIds.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiInsertCachedPte @ 0x140281740 (MiInsertCachedPte.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x140281FA4 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403459B0 (MiInsertLargeTbFlushEntry.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiRemovePteTracker @ 0x1404E696C (MiRemovePteTracker.c)
 *     MiUnmapLargePages @ 0x1405053F4 (MiUnmapLargePages.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KasanMarkAddressValidNoInline @ 0x1405257D0 (KasanMarkAddressValidNoInline.c)
 */

unsigned __int64 __fastcall MiUnmapContiguousMemory(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v6; // rbx
  unsigned int v7; // r13d
  unsigned int SystemRegionType; // eax
  __int64 v9; // rdx
  unsigned int v10; // r12d
  _KWAIT_BLOCK **v11; // rcx
  unsigned __int64 result; // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // rbp
  _KWAIT_BLOCK **p_WaitBlockList; // rcx
  unsigned __int8 CurrentIrql; // si
  __int64 *ProcessorFlushList; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx

  v6 = ((a1 & 0xFFF) + a2 + 4095) >> 12;
  if ( (dword_140FBF20C & 1) != 0 )
    MiRemovePteTracker(0LL);
  v7 = MI_IS_PHYSICAL_ADDRESS(a1);
  MiClearMappingAndDereferenceIoSpace(a1, v6);
  if ( a3 && byte_140FC8BD8 )
    KasanMarkAddressValidNoInline(a1 & 0xFFFFFFFFFFFFF000uLL, v6 << 12);
  SystemRegionType = MiGetSystemRegionType(a1);
  v10 = SystemRegionType;
  if ( v7 )
  {
    v13 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v14 = a2 >> 21;
    if ( (a2 & 0x1FFFFF) != 0 )
      goto LABEL_15;
    p_WaitBlockList = (_KWAIT_BLOCK **)&unk_140E34BC0;
    if ( SystemRegionType != 6 )
      p_WaitBlockList = &stru_140E366D8.WaitBlockList;
    result = MiInsertCachedPte(
               (__int64)p_WaitBlockList,
               (unsigned __int64 *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL),
               (unsigned int)v14);
    if ( !(_DWORD)result )
    {
LABEL_15:
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql < 2u )
      {
        v21 = KeGetCurrentIrql();
        if ( (_BYTE)v21 != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v9) = 2;
          KiRaiseIrqlProcessIrqlFlags(v21, v9);
        }
      }
      ProcessorFlushList = MiGetProcessorFlushList();
      MiInitializeTbFlushList(
        (_DWORD)ProcessorFlushList,
        (unsigned int)&unk_140E37340,
        *((_DWORD *)ProcessorFlushList + 3),
        8,
        1);
      for ( ; (_DWORD)v14; LODWORD(v14) = v14 - 1 )
      {
        MiInsertLargeTbFlushEntry(ProcessorFlushList, v7, v13);
        v13 += 8LL;
      }
      if ( ((a2 >> 12) & 0x1FF) != 0 )
        MiInsertTbFlushEntry(ProcessorFlushList, v13 << 25 >> 16 << 25 >> 16, (a2 >> 12) & 0x1FF);
      MiFlushTbList((__int64)ProcessorFlushList);
      MiReleaseProcessorFlushList(v19, v18, v20);
      if ( CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      return MiUnmapLargePages(a1, (a2 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL, v10);
    }
  }
  else
  {
    v11 = (_KWAIT_BLOCK **)&unk_140E34BC0;
    if ( SystemRegionType != 6 )
      v11 = &stru_140E366D8.WaitBlockList;
    return MiReleasePtes((__int64)v11, (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), v6);
  }
  return result;
}
