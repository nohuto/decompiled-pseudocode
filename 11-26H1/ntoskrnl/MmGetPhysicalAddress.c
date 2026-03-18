/*
 * XREFs of MmGetPhysicalAddress @ 0x14024D8F0
 * Callers:
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14024E9A0 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     HvlpAcquireHypercallPage @ 0x14032B970 (HvlpAcquireHypercallPage.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x140348C34 (HalpAllocateCommonBufferDmaThin.c)
 *     HalAllocateCommonBufferExV2 @ 0x14034A060 (HalAllocateCommonBufferExV2.c)
 *     EtwTraceContAllocationEvent @ 0x14034A910 (EtwTraceContAllocationEvent.c)
 *     HalpDmaAllocateMapRegisters @ 0x14035A8E0 (HalpDmaAllocateMapRegisters.c)
 *     HalpIommuMapLogical @ 0x14047B810 (HalpIommuMapLogical.c)
 *     HalpIommuMapLogicalRange @ 0x14047BE6C (HalpIommuMapLogicalRange.c)
 *     EtwpFreeTraceBuffer @ 0x140488B18 (EtwpFreeTraceBuffer.c)
 *     PnprCopyReservedMapping @ 0x14050D5C8 (PnprCopyReservedMapping.c)
 *     HalpDmaAllocateContiguousMemory @ 0x1405153D0 (HalpDmaAllocateContiguousMemory.c)
 *     IvtBuildScalableModePasidDirectoryEntry @ 0x140516AD8 (IvtBuildScalableModePasidDirectoryEntry.c)
 *     IvtUpdateScalableModePasidTablesForPasid @ 0x140522078 (IvtUpdateScalableModePasidTablesForPasid.c)
 *     PnprRecopyAddress @ 0x1405229F8 (PnprRecopyAddress.c)
 *     IvtBuildScalableModeContextEntry @ 0x14052D3F4 (IvtBuildScalableModeContextEntry.c)
 *     HalpDmaFreeMapRegisterFrame @ 0x1405314CC (HalpDmaFreeMapRegisterFrame.c)
 *     HalpInterruptBuildGlobalStartupStub @ 0x14057C69C (HalpInterruptBuildGlobalStartupStub.c)
 *     HalpHvStartVirtualProcessorViaXboxNanovisor @ 0x140585E58 (HalpHvStartVirtualProcessorViaXboxNanovisor.c)
 *     HalpDmaAllocateMapRegisterFrame @ 0x140588C88 (HalpDmaAllocateMapRegisterFrame.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140589FC0 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalpDmaControllerInitializeController @ 0x14058C908 (HalpDmaControllerInitializeController.c)
 *     HalpInterruptBuildStartupStub @ 0x140592E3C (HalpInterruptBuildStartupStub.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x140597C14 (ExtEnvAllocatePhysicalMemory.c)
 *     IommuHvInitializeSvmLibrary @ 0x14059D61C (IommuHvInitializeSvmLibrary.c)
 *     HalpIommuGetDmarptRootAddress @ 0x1405A0B0C (HalpIommuGetDmarptRootAddress.c)
 *     HalpIommuInitializeDmarPageTable @ 0x1405A0B74 (HalpIommuInitializeDmarPageTable.c)
 *     HsaAllocatePasidTables @ 0x1405A8A28 (HsaAllocatePasidTables.c)
 *     HsaUpdateDeviceTableEntry @ 0x1405AAA50 (HsaUpdateDeviceTableEntry.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1405B9830 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpSetupCachedHypercallPages @ 0x1405BB1B8 (HvlpSetupCachedHypercallPages.c)
 *     HvlpSetupSchedulerAssist @ 0x1405BB26C (HvlpSetupSchedulerAssist.c)
 *     HvlpMapApicBackingPage @ 0x1405BFC2C (HvlpMapApicBackingPage.c)
 *     HvlpTryConfigureInterface @ 0x1405C17EC (HvlpTryConfigureInterface.c)
 *     HvlpPhase0Enlightenments @ 0x1405C1F24 (HvlpPhase0Enlightenments.c)
 *     HvlpSetupPageListIteration @ 0x1405C23D8 (HvlpSetupPageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x1405C2484 (HvlpStartSecurePageListIteration.c)
 *     HvlSetupLiveDumpBuffer @ 0x1405C25C8 (HvlSetupLiveDumpBuffer.c)
 *     VslFinalizeLiveDumpInSk @ 0x1405C2C8C (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x1405C2D7C (VslFinishStartSecureProcessor.c)
 *     VslpAddLiveDumpBufferChunk @ 0x1405C4534 (VslpAddLiveDumpBufferChunk.c)
 *     IoFreeDumpRange @ 0x1405C6FD0 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x1405C7A20 (IoSetDumpRange.c)
 *     IopRemovePageDumpRange @ 0x1405C9CAC (IopRemovePageDumpRange.c)
 *     IopWriteTriageDumpToFirmware @ 0x1405CA3D8 (IopWriteTriageDumpToFirmware.c)
 *     PopGetNextTable @ 0x1406071C8 (PopGetNextTable.c)
 *     SfsInitialize @ 0x1406DD17C (SfsInitialize.c)
 *     BgpFwLibraryEnable @ 0x140715E2C (BgpFwLibraryEnable.c)
 *     HalpDmaCvmMakeContiguousVirtualBufferPrivate @ 0x140782EFC (HalpDmaCvmMakeContiguousVirtualBufferPrivate.c)
 *     HalpDmaCvmMakeContiguousVirtualBufferShared @ 0x140782F78 (HalpDmaCvmMakeContiguousVirtualBufferShared.c)
 *     HvlInitializeProcessor @ 0x1407918C4 (HvlInitializeProcessor.c)
 *     VslStartSecureProcessor @ 0x140792CA4 (VslStartSecureProcessor.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x14082E080 (EtwpBuildMdlForTraceBuffer.c)
 *     HalpCommitCR3Worker @ 0x140BEC7F0 (HalpCommitCR3Worker.c)
 *     HalpMmBuildTiledMemoryMap @ 0x140BEC874 (HalpMmBuildTiledMemoryMap.c)
 *     HalpUpdateTiledCR3Mapping @ 0x140BEC904 (HalpUpdateTiledCR3Mapping.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140BECDA8 (HalpCheckLowMemoryPreSleep.c)
 *     IvtInitializeIommu @ 0x140BEFC90 (IvtInitializeIommu.c)
 *     HsaInitializeIommu @ 0x140BF0BE0 (HsaInitializeIommu.c)
 *     PopBuildMemoryImageHeader @ 0x140BF9C6C (PopBuildMemoryImageHeader.c)
 *     PopRequestRead @ 0x140BFB3E8 (PopRequestRead.c)
 *     PopRequestWrite @ 0x140BFB804 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140BFCC1C (PopWriteHiberPages.c)
 *     PopHiberReadChecksums @ 0x140C09444 (PopHiberReadChecksums.c)
 *     ViAllocateMapRegisterFile @ 0x140C25F78 (ViAllocateMapRegisterFile.c)
 *     BgpFwLibraryInitialize @ 0x140C545B8 (BgpFwLibraryInitialize.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 *     sub_140CA8B24 @ 0x140CA8B24 (sub_140CA8B24.c)
 *     VslBindNtIum @ 0x140CB97F0 (VslBindNtIum.c)
 *     VslpIumPhase0Initialize @ 0x140CB9CAC (VslpIumPhase0Initialize.c)
 * Callees:
 *     MiGetVirtualAddressState @ 0x14024D274 (MiGetVirtualAddressState.c)
 *     MiMirrorInSingleProcessorMode @ 0x1402A2D34 (MiMirrorInSingleProcessorMode.c)
 *     DbgPrintEx @ 0x140397530 (DbgPrintEx.c)
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
