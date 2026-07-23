/*
 * XREFs of ZwQuerySystemInformation @ 0x14069B800
 * Callers:
 *     SmQuerySystemInformation @ 0x140393568 (SmQuerySystemInformation.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x14049AA04 (IopLiveDumpIsUnderMemoryPressure.c)
 *     HvlpProcessIommu @ 0x1404D4A40 (HvlpProcessIommu.c)
 *     RtlpCreateHeap @ 0x1404D8494 (RtlpCreateHeap.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1404D93E8 (RtlpInitializeNonVolatileFlush.c)
 *     SmKmStoreTerminateWorker @ 0x140601AF0 (SmKmStoreTerminateWorker.c)
 *     DifZwQuerySystemInformationWrapper @ 0x14063A8F0 (DifZwQuerySystemInformationWrapper.c)
 *     ExpInitExpCheckTestSigningInfo @ 0x14064B960 (ExpInitExpCheckTestSigningInfo.c)
 *     HaliSetSystemInformation @ 0x1406F69E4 (HaliSetSystemInformation.c)
 *     PiIsHVCIEnabled @ 0x140718CD8 (PiIsHVCIEnabled.c)
 *     PipKsrCallback @ 0x140727ED0 (PipKsrCallback.c)
 *     KsepGetLoadedModulesList @ 0x140734060 (KsepGetLoadedModulesList.c)
 *     PopCheckTestsigningEnabled @ 0x14073D2E4 (PopCheckTestsigningEnabled.c)
 *     PopInitializeHibernateGlobals @ 0x14074684C (PopInitializeHibernateGlobals.c)
 *     PopValidateWinresume @ 0x140746DC4 (PopValidateWinresume.c)
 *     RtlLocalTimeToSystemTime @ 0x14076E9D0 (RtlLocalTimeToSystemTime.c)
 *     ExpCloudbookHardwareIDProvider @ 0x1407A8E70 (ExpCloudbookHardwareIDProvider.c)
 *     ExpCloudbookHardwareLockedProvider @ 0x1407A8F70 (ExpCloudbookHardwareLockedProvider.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x1407F329C (SdbpCheckMatchingRegistryEntry.c)
 *     AslEnvGetProcessWowInfo @ 0x1407FC0A8 (AslEnvGetProcessWowInfo.c)
 *     BiGetAliasedIdentifier @ 0x140802710 (BiGetAliasedIdentifier.c)
 *     PfpPrivSourceEnum @ 0x1408DED60 (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoWs @ 0x1408DF3F4 (EtwpLogMemInfoWs.c)
 *     sub_140979E70 @ 0x140979E70 (sub_140979E70.c)
 *     RtlQueryModuleInformation @ 0x140A21FC0 (RtlQueryModuleInformation.c)
 *     BiGetFirmwareType @ 0x140A27F84 (BiGetFirmwareType.c)
 *     SiGetFirmwareType @ 0x140A4086C (SiGetFirmwareType.c)
 *     ExpFindDiskSignature @ 0x140A61EC0 (ExpFindDiskSignature.c)
 *     SiQuerySystemInformationString @ 0x140A7CD38 (SiQuerySystemInformationString.c)
 *     EtwpTiQueryCodeIntegrityOptions @ 0x140A7E240 (EtwpTiQueryCodeIntegrityOptions.c)
 *     RtlSystemTimeToLocalTime @ 0x140A90450 (RtlSystemTimeToLocalTime.c)
 *     PspQueryComPlusRunUnderWoW @ 0x140A9EF00 (PspQueryComPlusRunUnderWoW.c)
 *     PnpGetStableSystemBootTime @ 0x140AA9CA4 (PnpGetStableSystemBootTime.c)
 *     PopAllocateHiberContext @ 0x140ABEFAC (PopAllocateHiberContext.c)
 *     IoShutdownSystem @ 0x140B4374C (IoShutdownSystem.c)
 *     PopGetHwConfigurationSignature @ 0x140B4CE34 (PopGetHwConfigurationSignature.c)
 *     HdlspAddLogEntry @ 0x140B9D008 (HdlspAddLogEntry.c)
 *     PopCheckShutdownMarker @ 0x140C1C5B4 (PopCheckShutdownMarker.c)
 *     SepInitializeDebugOptions @ 0x140C28900 (SepInitializeDebugOptions.c)
 *     MiInitializeCacheFlushing @ 0x140C48FA8 (MiInitializeCacheFlushing.c)
 *     PopInitPlatformSettings @ 0x140C54A50 (PopInitPlatformSettings.c)
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
