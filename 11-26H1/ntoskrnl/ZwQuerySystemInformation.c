/*
 * XREFs of ZwQuerySystemInformation @ 0x140728680
 * Callers:
 *     RtlpCreateHeap @ 0x1404DCF18 (RtlpCreateHeap.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x1404DDD28 (IopLiveDumpIsUnderMemoryPressure.c)
 *     HvlpProcessIommu @ 0x1404E7774 (HvlpProcessIommu.c)
 *     RtlpInitializeNonVolatileFlush @ 0x14050FBA0 (RtlpInitializeNonVolatileFlush.c)
 *     SmQuerySystemInformation @ 0x1405293B4 (SmQuerySystemInformation.c)
 *     DifZwQuerySystemInformationWrapper @ 0x1406B8260 (DifZwQuerySystemInformationWrapper.c)
 *     ExpLogSecurePoolCreate @ 0x1406D0820 (ExpLogSecurePoolCreate.c)
 *     ExpInitExpCheckTestSigningInfo @ 0x1406D3E80 (ExpInitExpCheckTestSigningInfo.c)
 *     WheapGetModuleInfo @ 0x1406DA41C (WheapGetModuleInfo.c)
 *     HalpCheckTestSigningEnabled @ 0x140788814 (HalpCheckTestSigningEnabled.c)
 *     PiIsHVCIEnabled @ 0x1407A8574 (PiIsHVCIEnabled.c)
 *     PipKsrCallback @ 0x1407B5D70 (PipKsrCallback.c)
 *     KsepGetLoadedModulesList @ 0x1407C16B4 (KsepGetLoadedModulesList.c)
 *     PopCheckTestsigningEnabled @ 0x1407CBC1C (PopCheckTestsigningEnabled.c)
 *     PopInitializeHibernateGlobals @ 0x1407D3434 (PopInitializeHibernateGlobals.c)
 *     PopValidateWinresume @ 0x1407D3AA4 (PopValidateWinresume.c)
 *     RtlLocalTimeToSystemTime @ 0x140806A30 (RtlLocalTimeToSystemTime.c)
 *     ExpCloudbookHardwareIDProvider @ 0x14083E2B0 (ExpCloudbookHardwareIDProvider.c)
 *     ExpCloudbookHardwareLockedProvider @ 0x14083E3B0 (ExpCloudbookHardwareLockedProvider.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x1408891DC (SdbpCheckMatchingRegistryEntry.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x14089757C (BiGetCurrentBootEntryIdentifier.c)
 *     PfpPrivSourceEnum @ 0x14091DEAC (PfpPrivSourceEnum.c)
 *     BiGetFirmwareType @ 0x1409A5660 (BiGetFirmwareType.c)
 *     EtwpLogMemInfoWs @ 0x1409BBBE8 (EtwpLogMemInfoWs.c)
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 *     ExpFindDiskSignature @ 0x140A2DFDC (ExpFindDiskSignature.c)
 *     EtwpTiQueryCodeIntegrityOptions @ 0x140A38068 (EtwpTiQueryCodeIntegrityOptions.c)
 *     RtlQueryModuleInformation @ 0x140AAD1D0 (RtlQueryModuleInformation.c)
 *     SiGetFirmwareType @ 0x140AEB804 (SiGetFirmwareType.c)
 *     SiQuerySystemInformationString @ 0x140B273D0 (SiQuerySystemInformationString.c)
 *     RtlSystemTimeToLocalTime @ 0x140B3CBB0 (RtlSystemTimeToLocalTime.c)
 *     PnpGetStableSystemBootTime @ 0x140B4EB80 (PnpGetStableSystemBootTime.c)
 *     PspQueryComPlusRunUnderWoW @ 0x140B4EC94 (PspQueryComPlusRunUnderWoW.c)
 *     AslEnvGetProcessWowInfo @ 0x140B70F50 (AslEnvGetProcessWowInfo.c)
 *     PopAllocateHiberContext @ 0x140B75B48 (PopAllocateHiberContext.c)
 *     PopGetHwConfigurationSignature @ 0x140C0EC5C (PopGetHwConfigurationSignature.c)
 *     IoShutdownSystem @ 0x140C12A68 (IoShutdownSystem.c)
 *     HdlspAddLogEntry @ 0x140C52008 (HdlspAddLogEntry.c)
 *     PopInitPlatformSettings @ 0x140CD5B14 (PopInitPlatformSettings.c)
 *     PopCheckShutdownMarker @ 0x140CD620C (PopCheckShutdownMarker.c)
 *     SepInitializeDebugOptions @ 0x140CE3440 (SepInitializeDebugOptions.c)
 *     MiInitializeCacheFlushing @ 0x140D0572C (MiInitializeCacheFlushing.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwQuerySystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&SystemInformationClass);
}
