/*
 * XREFs of MmMapIoSpaceEx @ 0x140363DC0
 * Callers:
 *     HalpAcpiGetRsdt @ 0x140342E64 (HalpAcpiGetRsdt.c)
 *     HalpAcpiCheckAndMapTable @ 0x140343370 (HalpAcpiCheckAndMapTable.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x140356984 (HalpDmaAllocateNewTranslationBuffer.c)
 *     MmMapIoSpace @ 0x1404B8360 (MmMapIoSpace.c)
 *     HalpReadGenericErrorInfo @ 0x1404DC648 (HalpReadGenericErrorInfo.c)
 *     HalInitializeBios @ 0x1405784A0 (HalInitializeBios.c)
 *     HalpMcaExtendedLogInitialize @ 0x14057AF58 (HalpMcaExtendedLogInitialize.c)
 *     HalpDmaAllocateMapRegisterFrame @ 0x140588C88 (HalpDmaAllocateMapRegisterFrame.c)
 *     HalpSignalRAS @ 0x14058E45C (HalpSignalRAS.c)
 *     HvlPhase1Initialize @ 0x1405B89CC (HvlPhase1Initialize.c)
 *     HvlpEnableNextLogicalProcessor @ 0x1405BA0DC (HvlpEnableNextLogicalProcessor.c)
 *     HvlpMapGhcb @ 0x1405BFCAC (HvlpMapGhcb.c)
 *     HvlpInitializeHvCrashdump @ 0x1405C0B08 (HvlpInitializeHvCrashdump.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x1405C55C0 (BgkNotifyDisplayOwnershipLost.c)
 *     DifMmMapIoSpaceExWrapper @ 0x140667420 (DifMmMapIoSpaceExWrapper.c)
 *     WmipFirmwareTableHandler @ 0x1406C3600 (WmipFirmwareTableHandler.c)
 *     SfsInitialize @ 0x1406DD17C (SfsInitialize.c)
 *     MiHugePageOperation @ 0x140705138 (MiHugePageOperation.c)
 *     BgpFwLibraryEnable @ 0x140715E2C (BgpFwLibraryEnable.c)
 *     BgpFwMapFrameBuffer @ 0x14071605C (BgpFwMapFrameBuffer.c)
 *     IpmiHwKcsInit @ 0x14071CFE8 (IpmiHwKcsInit.c)
 *     InbvPortInitialize @ 0x14071E810 (InbvPortInitialize.c)
 *     HalpDmaCvmMakeContiguousVirtualBufferShared @ 0x140782F78 (HalpDmaCvmMakeContiguousVirtualBufferShared.c)
 *     HvlInitializeProcessor @ 0x1407918C4 (HvlInitializeProcessor.c)
 *     HvlpEnableRootVirtualProcessor @ 0x140791C18 (HvlpEnableRootVirtualProcessor.c)
 *     WmipFindSMBiosStructure @ 0x1408227A4 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x1408228C0 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x1408229B8 (WmipGetSMBiosEventlog.c)
 *     WmipParseSysIdTable @ 0x140822EC4 (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x140848C30 (WheapClearPoison.c)
 *     WmipGetSMBiosTableData @ 0x140AC4C90 (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x140B680A0 (ExpGetSystemPlatformBinary.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140BEBDF4 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140BEC05C (HalpInitGenericErrorSourceEntryV2.c)
 *     HalpInitializeGenericErrorSource @ 0x140BEC3F8 (HalpInitializeGenericErrorSource.c)
 *     PopGetHwConfigurationSignature @ 0x140C08A4C (PopGetHwConfigurationSignature.c)
 *     HalpMapNvsArea @ 0x140C0A388 (HalpMapNvsArea.c)
 *     VerifierMmMapIoSpace @ 0x140C3F7A0 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapIoSpaceEx @ 0x140C3F8A0 (VerifierMmMapIoSpaceEx.c)
 *     KiVerifyXcpt15 @ 0x140C803F0 (KiVerifyXcpt15.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140CAE4F8 (HalpPowerInitFwPerformanceTableMappings.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140CB0C78 (HalpDmaInitializeMasterAdapter.c)
 *     HalpAuditEnumerateRsdts @ 0x140CB3FCC (HalpAuditEnumerateRsdts.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140CB40B8 (HalpAuditEnumerateRsdtsInRange.c)
 *     HalpAuditQuerySlicAddresses @ 0x140CB41AC (HalpAuditQuerySlicAddresses.c)
 *     PipInitComputerIds @ 0x140D056B0 (PipInitComputerIds.c)
 * Callees:
 *     MiMapContiguousMemory @ 0x140363E10 (MiMapContiguousMemory.c)
 *     MiMakeProtectionMask @ 0x140364A40 (MiMakeProtectionMask.c)
 */

__int64 __fastcall MmMapIoSpaceEx(__int64 a1, __int64 a2, unsigned int a3)
{
  int ProtectionMask; // eax
  int v4; // r10d
  int v5; // r11d

  ProtectionMask = MiMakeProtectionMask(a3);
  if ( (ProtectionMask & 2) != 0 && (ProtectionMask & 0xFFFFFFF8) == 0x18 && (ProtectionMask & 7) != 0 )
    return 0LL;
  else
    return MiMapContiguousMemory(v4, v5, v5, ProtectionMask, 0);
}
