/*
 * XREFs of ZwEnumerateKey @ 0x140728600
 * Callers:
 *     HalpMcEnumerateAndSetPatchConfig @ 0x140595968 (HalpMcEnumerateAndSetPatchConfig.c)
 *     DifZwEnumerateKeyWrapper @ 0x1406A9050 (DifZwEnumerateKeyWrapper.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x140724EE4 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x140725134 (_RtlpRemovePendingDeleteLanguages.c)
 *     PiDcInitUpdateProperties @ 0x1407AA6AC (PiDcInitUpdateProperties.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14080AF40 (RtlpUpdateDynamicTimeZones.c)
 *     SepReadAndInsertCaps @ 0x14081D06C (SepReadAndInsertCaps.c)
 *     WdipSemLoadNextContextProvider @ 0x14082599C (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadNextEndEvent @ 0x140825C4C (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x140825F5C (WdipSemLoadNextScenario.c)
 *     WdipSemLoadScenarioTable @ 0x140826454 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1408271BC (WdipSemLoadLocalGroupPolicy.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x14082BDA4 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x14082C6B8 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x14082C8E4 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x14082D1D0 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     EtwpEnumerateAutologgerPath @ 0x140833C18 (EtwpEnumerateAutologgerPath.c)
 *     ApiSetpLoadSchemaExtensions @ 0x140850CEC (ApiSetpLoadSchemaExtensions.c)
 *     CmDeleteKeyRecursive @ 0x1408577C8 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x140858444 (CmpCloneHwProfile.c)
 *     CmpGetAcpiProfileInformation @ 0x140859190 (CmpGetAcpiProfileInformation.c)
 *     CmpMoveBiosAliasTable @ 0x140859990 (CmpMoveBiosAliasTable.c)
 *     CmpLoadLayerVersions @ 0x14085C0EC (CmpLoadLayerVersions.c)
 *     AslRegistryEnumKey @ 0x14088E73C (AslRegistryEnumKey.c)
 *     VrpPostEnumerateKey @ 0x140938960 (VrpPostEnumerateKey.c)
 *     _RegRtlEnumKey @ 0x140974C20 (_RegRtlEnumKey.c)
 *     BiEnumerateSubKeys @ 0x1409A2660 (BiEnumerateSubKeys.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140A42818 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140A47C2C (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgCopyDeviceKey @ 0x140A49C64 (PiDevCfgCopyDeviceKey.c)
 *     pIoQueryBusDescription @ 0x140A4AF48 (pIoQueryBusDescription.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140AB62AC (RtlpProcessIFEOKeyFilter.c)
 *     NtLockProductActivationKeys @ 0x140AE3B50 (NtLockProductActivationKeys.c)
 *     EtwpEnumerateKeyProviders @ 0x140B40078 (EtwpEnumerateKeyProviders.c)
 *     RegistryOverwriteCentralProcessor @ 0x140CB341C (RegistryOverwriteCentralProcessor.c)
 *     PipInitDeviceOverrideCache @ 0x140CC8264 (PipInitDeviceOverrideCache.c)
 *     PopReadSimulatedArchitecturalClasses @ 0x140CD9B7C (PopReadSimulatedArchitecturalClasses.c)
 *     PopReadSimulatedHGSClasses @ 0x140CD9D70 (PopReadSimulatedHGSClasses.c)
 *     PopReadSimulatedWpsContainment @ 0x140CDA41C (PopReadSimulatedWpsContainment.c)
 *     PsInitializeBootCpuPartitions @ 0x140CDDE44 (PsInitializeBootCpuPartitions.c)
 *     VhdAutoAttachVirtualDisks @ 0x140D089A4 (VhdAutoAttachVirtualDisks.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwEnumerateKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
