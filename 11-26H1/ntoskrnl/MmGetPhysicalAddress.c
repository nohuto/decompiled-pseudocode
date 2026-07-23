/*
 * XREFs of MmGetPhysicalAddress @ 0x14024F250
 * Callers:
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140250300 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x14034ACB4 (HalpAllocateCommonBufferDmaThin.c)
 *     HalAllocateCommonBufferExV2 @ 0x14034C0E0 (HalAllocateCommonBufferExV2.c)
 *     EtwTraceContAllocationEvent @ 0x14034C990 (EtwTraceContAllocationEvent.c)
 *     HalpDmaAllocateMapRegisters @ 0x14035C680 (HalpDmaAllocateMapRegisters.c)
 *     HalpIommuMapLogical @ 0x140475180 (HalpIommuMapLogical.c)
 *     HalpIommuMapLogicalRange @ 0x1404757DC (HalpIommuMapLogicalRange.c)
 *     EtwpFreeTraceBuffer @ 0x140482658 (EtwpFreeTraceBuffer.c)
 *     PnprCopyReservedMapping @ 0x140507038 (PnprCopyReservedMapping.c)
 *     HalpDmaAllocateContiguousMemory @ 0x14050EE40 (HalpDmaAllocateContiguousMemory.c)
 *     IvtBuildScalableModePasidDirectoryEntry @ 0x140510548 (IvtBuildScalableModePasidDirectoryEntry.c)
 *     IvtUpdateScalableModePasidTablesForPasid @ 0x1405246E4 (IvtUpdateScalableModePasidTablesForPasid.c)
 *     PnprRecopyAddress @ 0x140525064 (PnprRecopyAddress.c)
 *     IvtBuildScalableModeContextEntry @ 0x14052F914 (IvtBuildScalableModeContextEntry.c)
 *     HalpDmaFreeMapRegisterFrame @ 0x1405339CC (HalpDmaFreeMapRegisterFrame.c)
 *     HalpInterruptBuildGlobalStartupStub @ 0x14057EBCC (HalpInterruptBuildGlobalStartupStub.c)
 *     HalpHvStartVirtualProcessorViaXboxNanovisor @ 0x140588378 (HalpHvStartVirtualProcessorViaXboxNanovisor.c)
 *     HalpDmaAllocateMapRegisterFrame @ 0x14058B358 (HalpDmaAllocateMapRegisterFrame.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14058C6F0 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalpDmaControllerInitializeController @ 0x14058F088 (HalpDmaControllerInitializeController.c)
 *     HalpInterruptBuildStartupStub @ 0x1405955BC (HalpInterruptBuildStartupStub.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14059A394 (ExtEnvAllocatePhysicalMemory.c)
 *     IommuHvInitializeSvmLibrary @ 0x14059FD9C (IommuHvInitializeSvmLibrary.c)
 *     HalpIommuGetDmarptRootAddress @ 0x1405A331C (HalpIommuGetDmarptRootAddress.c)
 *     HalpIommuInitializeDmarPageTable @ 0x1405A3384 (HalpIommuInitializeDmarPageTable.c)
 *     HsaAllocatePasidTables @ 0x1405AB238 (HsaAllocatePasidTables.c)
 *     HsaUpdateDeviceTableEntry @ 0x1405AD260 (HsaUpdateDeviceTableEntry.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1405BC0A0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpSetupCachedHypercallPages @ 0x1405BDA28 (HvlpSetupCachedHypercallPages.c)
 *     HvlpSetupSchedulerAssist @ 0x1405BDADC (HvlpSetupSchedulerAssist.c)
 *     HvlpMapApicBackingPage @ 0x1405C249C (HvlpMapApicBackingPage.c)
 *     HvlpTryConfigureInterface @ 0x1405C405C (HvlpTryConfigureInterface.c)
 *     HvlpPhase0Enlightenments @ 0x1405C4794 (HvlpPhase0Enlightenments.c)
 *     HvlpSetupPageListIteration @ 0x1405C4C48 (HvlpSetupPageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x1405C4CF4 (HvlpStartSecurePageListIteration.c)
 *     HvlSetupLiveDumpBuffer @ 0x1405C4E38 (HvlSetupLiveDumpBuffer.c)
 *     VslFinalizeLiveDumpInSk @ 0x1405C54FC (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x1405C55EC (VslFinishStartSecureProcessor.c)
 *     VslpAddLiveDumpBufferChunk @ 0x1405C6DA4 (VslpAddLiveDumpBufferChunk.c)
 *     IoFreeDumpRange @ 0x1405C98A0 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x1405CA2F0 (IoSetDumpRange.c)
 *     IopRemovePageDumpRange @ 0x1405CC57C (IopRemovePageDumpRange.c)
 *     IopWriteTriageDumpToFirmware @ 0x1405CCCA8 (IopWriteTriageDumpToFirmware.c)
 *     PopGetNextTable @ 0x140609D24 (PopGetNextTable.c)
 *     SfsInitialize @ 0x1406E141C (SfsInitialize.c)
 *     BgpFwLibraryEnable @ 0x14071AB1C (BgpFwLibraryEnable.c)
 *     HalpDmaCvmMakeContiguousVirtualBufferPrivate @ 0x140785A30 (HalpDmaCvmMakeContiguousVirtualBufferPrivate.c)
 *     HalpDmaCvmMakeContiguousVirtualBufferShared @ 0x140785AAC (HalpDmaCvmMakeContiguousVirtualBufferShared.c)
 *     HvlInitializeProcessor @ 0x1407943F4 (HvlInitializeProcessor.c)
 *     VslStartSecureProcessor @ 0x1407957D4 (VslStartSecureProcessor.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1408342C0 (EtwpBuildMdlForTraceBuffer.c)
 *     HalpCommitCR3Worker @ 0x140BF27F0 (HalpCommitCR3Worker.c)
 *     HalpMmBuildTiledMemoryMap @ 0x140BF2874 (HalpMmBuildTiledMemoryMap.c)
 *     HalpUpdateTiledCR3Mapping @ 0x140BF2904 (HalpUpdateTiledCR3Mapping.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140BF2DA8 (HalpCheckLowMemoryPreSleep.c)
 *     IvtInitializeIommu @ 0x140BF5C90 (IvtInitializeIommu.c)
 *     HsaInitializeIommu @ 0x140BF6BE0 (HsaInitializeIommu.c)
 *     PopBuildMemoryImageHeader @ 0x140BFFC6C (PopBuildMemoryImageHeader.c)
 *     PopRequestRead @ 0x140C013E8 (PopRequestRead.c)
 *     PopRequestWrite @ 0x140C01804 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140C02C1C (PopWriteHiberPages.c)
 *     PopHiberReadChecksums @ 0x140C0F654 (PopHiberReadChecksums.c)
 *     ViAllocateMapRegisterFile @ 0x140C2BF88 (ViAllocateMapRegisterFile.c)
 *     BgpFwLibraryInitialize @ 0x140C5A5B8 (BgpFwLibraryInitialize.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 *     sub_140CAEB24 @ 0x140CAEB24 (sub_140CAEB24.c)
 *     VslBindNtIum @ 0x140CBF830 (VslBindNtIum.c)
 *     VslpIumPhase0Initialize @ 0x140CBFCEC (VslpIumPhase0Initialize.c)
 * Callees:
 *     MiGetVirtualAddressState @ 0x14024EBD4 (MiGetVirtualAddressState.c)
 *     MiMirrorInSingleProcessorMode @ 0x1402A2284 (MiMirrorInSingleProcessorMode.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 */

PHYSICAL_ADDRESS __stdcall MmGetPhysicalAddress(PVOID BaseAddress)
{
  PHYSICAL_ADDRESS v2; // rbx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  PHYSICAL_ADDRESS v5; // [rsp+30h] [rbp-18h]

  v5.QuadPart = 0LL;
  v2.QuadPart = 0LL;
  v4 = 0LL;
  if ( (int)MiGetVirtualAddressState((__int64)&v4, (unsigned __int64)BaseAddress, 0) >= 0 )
    return v5;
  if ( !(unsigned int)MiMirrorInSingleProcessorMode() )
    DbgPrintEx(0x66u, 0, "MM:MmGetPhysicalAddress failed base address was %p\n", BaseAddress);
  return v2;
}
