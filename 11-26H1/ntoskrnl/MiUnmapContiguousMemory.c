/*
 * XREFs of MiUnmapContiguousMemory @ 0x140343628
 * Callers:
 *     HalpAcpiGetTableWork @ 0x140342B6C (HalpAcpiGetTableWork.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x140342D10 (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiGetRsdt @ 0x140342E64 (HalpAcpiGetRsdt.c)
 *     HalpAcpiCheckAndMapTable @ 0x140343370 (HalpAcpiCheckAndMapTable.c)
 *     MmUnmapIoSpace @ 0x140343610 (MmUnmapIoSpace.c)
 *     MmFreeContiguousMemory @ 0x140344580 (MmFreeContiguousMemory.c)
 *     MiAllocateContiguousMemory @ 0x14034A28C (MiAllocateContiguousMemory.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x140356984 (HalpDmaAllocateNewTranslationBuffer.c)
 *     MiMapContiguousMemory @ 0x140363E10 (MiMapContiguousMemory.c)
 *     HalpDmaFreeMapRegisterFrame @ 0x1405314CC (HalpDmaFreeMapRegisterFrame.c)
 *     HalInitializeBios @ 0x1405784A0 (HalInitializeBios.c)
 *     HalpAcpiGetAllTablesWork @ 0x14057957C (HalpAcpiGetAllTablesWork.c)
 *     HalpMcaExtendedLogInitialize @ 0x14057AF58 (HalpMcaExtendedLogInitialize.c)
 *     DifMmUnmapIoSpaceWrapper @ 0x1406687E0 (DifMmUnmapIoSpaceWrapper.c)
 *     WmipReadSMBiosSysInfo @ 0x1406C34A8 (WmipReadSMBiosSysInfo.c)
 *     WmipFirmwareTableHandler @ 0x1406C3600 (WmipFirmwareTableHandler.c)
 *     SfsInitialize @ 0x1406DD17C (SfsInitialize.c)
 *     MiHugePageOperation @ 0x140705138 (MiHugePageOperation.c)
 *     BgpFwLibraryEnable @ 0x140715E2C (BgpFwLibraryEnable.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140CAE4F8 (HalpPowerInitFwPerformanceTableMappings.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140CB0C78 (HalpDmaInitializeMasterAdapter.c)
 *     HalpAuditEnumerateRsdts @ 0x140CB3FCC (HalpAuditEnumerateRsdts.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140CB40B8 (HalpAuditEnumerateRsdtsInRange.c)
 *     HalpAuditQuerySlicAddresses @ 0x140CB41AC (HalpAuditQuerySlicAddresses.c)
 *     PipInitComputerIds @ 0x140D056B0 (PipInitComputerIds.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024C8D0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetSystemRegionType @ 0x140264F40 (MiGetSystemRegionType.c)
 *     MiReleasePtes @ 0x140281CE0 (MiReleasePtes.c)
 *     MiInsertCachedPte @ 0x1402821D0 (MiInsertCachedPte.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x140282A34 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiGetProcessorFlushList @ 0x1403229E0 (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x140329040 (MiFlushTbList.c)
 *     MiInsertLargeTbFlushEntry @ 0x140343930 (MiInsertLargeTbFlushEntry.c)
 *     MiInsertTbFlushEntry @ 0x14035E7E0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140360920 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x1403613C0 (MiReleaseProcessorFlushList.c)
 *     MiRemovePteTracker @ 0x1404ED38C (MiRemovePteTracker.c)
 *     MiUnmapLargePages @ 0x14050B984 (MiUnmapLargePages.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KasanMarkAddressValidNoInline @ 0x140523160 (KasanMarkAddressValidNoInline.c)
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
  if ( (dword_140FBE20C & 1) != 0 )
    MiRemovePteTracker(0LL);
  v7 = MI_IS_PHYSICAL_ADDRESS(a1);
  MiClearMappingAndDereferenceIoSpace(a1, v6);
  if ( a3 && byte_140FC7BE8 )
    KasanMarkAddressValidNoInline(a1 & 0xFFFFFFFFFFFFF000uLL, v6 << 12);
  SystemRegionType = MiGetSystemRegionType(a1);
  v10 = SystemRegionType;
  if ( v7 )
  {
    v13 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v14 = a2 >> 21;
    if ( (a2 & 0x1FFFFF) != 0 )
      goto LABEL_15;
    p_WaitBlockList = (_KWAIT_BLOCK **)&unk_140E34A40;
    if ( SystemRegionType != 6 )
      p_WaitBlockList = &stru_140E36558.WaitBlockList;
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
        (unsigned int)&unk_140E371C0,
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
    v11 = (_KWAIT_BLOCK **)&unk_140E34A40;
    if ( SystemRegionType != 6 )
      v11 = &stru_140E36558.WaitBlockList;
    return MiReleasePtes((__int64)v11, (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), v6);
  }
  return result;
}
