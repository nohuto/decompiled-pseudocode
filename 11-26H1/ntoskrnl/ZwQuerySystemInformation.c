/*
 * XREFs of ZwQuerySystemInformation @ 0x140723AB0
 * Callers:
 *     RtlpCreateHeap @ 0x1404E3978 (RtlpCreateHeap.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x1404E4788 (IopLiveDumpIsUnderMemoryPressure.c)
 *     HvlpProcessIommu @ 0x1404EE194 (HvlpProcessIommu.c)
 *     RtlpInitializeNonVolatileFlush @ 0x140516130 (RtlpInitializeNonVolatileFlush.c)
 *     SmQuerySystemInformation @ 0x140526D44 (SmQuerySystemInformation.c)
 *     DifZwQuerySystemInformationWrapper @ 0x1406B4680 (DifZwQuerySystemInformationWrapper.c)
 *     ExpLogSecurePoolCreate @ 0x1406CC7F0 (ExpLogSecurePoolCreate.c)
 *     ExpInitExpCheckTestSigningInfo @ 0x1406CFE50 (ExpInitExpCheckTestSigningInfo.c)
 *     WheapGetModuleInfo @ 0x1406D633C (WheapGetModuleInfo.c)
 *     HalpCheckTestSigningEnabled @ 0x140785CE4 (HalpCheckTestSigningEnabled.c)
 *     PiIsHVCIEnabled @ 0x1407A59C4 (PiIsHVCIEnabled.c)
 *     PipKsrCallback @ 0x1407B2D10 (PipKsrCallback.c)
 *     KsepGetLoadedModulesList @ 0x1407BE654 (KsepGetLoadedModulesList.c)
 *     PopCheckTestsigningEnabled @ 0x1407C8B7C (PopCheckTestsigningEnabled.c)
 *     PopInitializeHibernateGlobals @ 0x1407D0394 (PopInitializeHibernateGlobals.c)
 *     PopValidateWinresume @ 0x1407D0A04 (PopValidateWinresume.c)
 *     RtlLocalTimeToSystemTime @ 0x140800F90 (RtlLocalTimeToSystemTime.c)
 *     ExpCloudbookHardwareIDProvider @ 0x140838070 (ExpCloudbookHardwareIDProvider.c)
 *     ExpCloudbookHardwareLockedProvider @ 0x140838170 (ExpCloudbookHardwareLockedProvider.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x140882DDC (SdbpCheckMatchingRegistryEntry.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x140891180 (BiGetCurrentBootEntryIdentifier.c)
 *     PfpPrivSourceEnum @ 0x14096984C (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoWs @ 0x14096E598 (EtwpLogMemInfoWs.c)
 *     BiGetFirmwareType @ 0x1409D4680 (BiGetFirmwareType.c)
 *     SPCall2ServerInternal @ 0x140A1AE00 (SPCall2ServerInternal.c)
 *     EtwpTiQueryCodeIntegrityOptions @ 0x140A24FC8 (EtwpTiQueryCodeIntegrityOptions.c)
 *     ExpFindDiskSignature @ 0x140A9578C (ExpFindDiskSignature.c)
 *     RtlQueryModuleInformation @ 0x140AAF580 (RtlQueryModuleInformation.c)
 *     SiGetFirmwareType @ 0x140AE9454 (SiGetFirmwareType.c)
 *     SiQuerySystemInformationString @ 0x140B25240 (SiQuerySystemInformationString.c)
 *     RtlSystemTimeToLocalTime @ 0x140B3A810 (RtlSystemTimeToLocalTime.c)
 *     PnpGetStableSystemBootTime @ 0x140B4CDF0 (PnpGetStableSystemBootTime.c)
 *     PspQueryComPlusRunUnderWoW @ 0x140B4CF04 (PspQueryComPlusRunUnderWoW.c)
 *     AslEnvGetProcessWowInfo @ 0x140B6DB80 (AslEnvGetProcessWowInfo.c)
 *     PopAllocateHiberContext @ 0x140B71364 (PopAllocateHiberContext.c)
 *     PopGetHwConfigurationSignature @ 0x140C08A4C (PopGetHwConfigurationSignature.c)
 *     IoShutdownSystem @ 0x140C0C858 (IoShutdownSystem.c)
 *     HdlspAddLogEntry @ 0x140C4C008 (HdlspAddLogEntry.c)
 *     PopInitPlatformSettings @ 0x140CCF964 (PopInitPlatformSettings.c)
 *     PopCheckShutdownMarker @ 0x140CD0064 (PopCheckShutdownMarker.c)
 *     SepInitializeDebugOptions @ 0x140CDD0A8 (SepInitializeDebugOptions.c)
 *     MiInitializeCacheFlushing @ 0x140CFF38C (MiInitializeCacheFlushing.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySystemInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
