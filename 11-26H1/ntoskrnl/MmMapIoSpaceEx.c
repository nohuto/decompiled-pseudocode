/*
 * XREFs of MmMapIoSpaceEx @ 0x140365B60
 * Callers:
 *     HalpAcpiGetRsdt @ 0x140344EE4 (HalpAcpiGetRsdt.c)
 *     HalpAcpiCheckAndMapTable @ 0x1403453F0 (HalpAcpiCheckAndMapTable.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x140358724 (HalpDmaAllocateNewTranslationBuffer.c)
 *     MmMapIoSpace @ 0x1404B1B90 (MmMapIoSpace.c)
 *     HalpReadGenericErrorInfo @ 0x1404D5D28 (HalpReadGenericErrorInfo.c)
 *     HalInitializeBios @ 0x14057A9D0 (HalInitializeBios.c)
 *     HalpMcaExtendedLogInitialize @ 0x14057D488 (HalpMcaExtendedLogInitialize.c)
 *     HalpDmaAllocateMapRegisterFrame @ 0x14058B358 (HalpDmaAllocateMapRegisterFrame.c)
 *     HalpSignalRAS @ 0x140590BDC (HalpSignalRAS.c)
 *     HvlPhase1Initialize @ 0x1405BB23C (HvlPhase1Initialize.c)
 *     HvlpEnableNextLogicalProcessor @ 0x1405BC94C (HvlpEnableNextLogicalProcessor.c)
 *     HvlpMapGhcb @ 0x1405C251C (HvlpMapGhcb.c)
 *     HvlpInitializeHvCrashdump @ 0x1405C3378 (HvlpInitializeHvCrashdump.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x1405C7E30 (BgkNotifyDisplayOwnershipLost.c)
 *     DifMmMapIoSpaceExWrapper @ 0x14066B000 (DifMmMapIoSpaceExWrapper.c)
 *     WmipFirmwareTableHandler @ 0x1406C7240 (WmipFirmwareTableHandler.c)
 *     SfsInitialize @ 0x1406E141C (SfsInitialize.c)
 *     MiHugePageOperation @ 0x140709E08 (MiHugePageOperation.c)
 *     BgpFwLibraryEnable @ 0x14071AB1C (BgpFwLibraryEnable.c)
 *     BgpFwMapFrameBuffer @ 0x14071AD4C (BgpFwMapFrameBuffer.c)
 *     IpmiHwKcsInit @ 0x140721C78 (IpmiHwKcsInit.c)
 *     InbvPortInitialize @ 0x1407234A0 (InbvPortInitialize.c)
 *     HalpDmaCvmMakeContiguousVirtualBufferShared @ 0x140785AAC (HalpDmaCvmMakeContiguousVirtualBufferShared.c)
 *     HvlInitializeProcessor @ 0x1407943F4 (HvlInitializeProcessor.c)
 *     HvlpEnableRootVirtualProcessor @ 0x140794748 (HvlpEnableRootVirtualProcessor.c)
 *     WmipFindSMBiosStructure @ 0x1408289B4 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x140828AD0 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x140828BC8 (WmipGetSMBiosEventlog.c)
 *     WmipParseSysIdTable @ 0x1408290D4 (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x14084EF00 (WheapClearPoison.c)
 *     WmipGetSMBiosTableData @ 0x140AC6900 (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x140B6B030 (ExpGetSystemPlatformBinary.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140BF1DF4 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140BF205C (HalpInitGenericErrorSourceEntryV2.c)
 *     HalpInitializeGenericErrorSource @ 0x140BF23F8 (HalpInitializeGenericErrorSource.c)
 *     PopGetHwConfigurationSignature @ 0x140C0EC5C (PopGetHwConfigurationSignature.c)
 *     HalpMapNvsArea @ 0x140C10598 (HalpMapNvsArea.c)
 *     VerifierMmMapIoSpace @ 0x140C457B0 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapIoSpaceEx @ 0x140C458B0 (VerifierMmMapIoSpaceEx.c)
 *     KiVerifyXcpt15 @ 0x140C863F0 (KiVerifyXcpt15.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140CB4538 (HalpPowerInitFwPerformanceTableMappings.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140CB6CB8 (HalpDmaInitializeMasterAdapter.c)
 *     HalpAuditEnumerateRsdts @ 0x140CBA00C (HalpAuditEnumerateRsdts.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140CBA0F8 (HalpAuditEnumerateRsdtsInRange.c)
 *     HalpAuditQuerySlicAddresses @ 0x140CBA1EC (HalpAuditQuerySlicAddresses.c)
 *     PipInitComputerIds @ 0x140D0B980 (PipInitComputerIds.c)
 * Callees:
 *     MiMapContiguousMemory @ 0x140365BB0 (MiMapContiguousMemory.c)
 *     MiMakeProtectionMask @ 0x1403667E0 (MiMakeProtectionMask.c)
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
