/*
 * XREFs of ZwEnumerateKey @ 0x14069B780
 * Callers:
 *     BiZwEnumerateKey @ 0x1404AB2B4 (BiZwEnumerateKey.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x140556BB8 (HalpMcEnumerateAndSetPatchConfig.c)
 *     DifZwEnumerateKeyWrapper @ 0x140633A20 (DifZwEnumerateKeyWrapper.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1406974FC (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x140697730 (_RtlpRemovePendingDeleteLanguages.c)
 *     PiDcInitUpdateProperties @ 0x14071B75C (PiDcInitUpdateProperties.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14077366C (RtlpUpdateDynamicTimeZones.c)
 *     SepReadAndInsertCaps @ 0x140785F10 (SepReadAndInsertCaps.c)
 *     WdipSemLoadNextContextProvider @ 0x140791C78 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadNextEndEvent @ 0x140791F28 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x140792238 (WdipSemLoadNextScenario.c)
 *     WdipSemLoadScenarioTable @ 0x140792730 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x140793624 (WdipSemLoadLocalGroupPolicy.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x14079879C (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x140799098 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1407992C4 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x140799B94 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     EtwpEnumerateAutologgerPath @ 0x14079FAC8 (EtwpEnumerateAutologgerPath.c)
 *     ApiSetpLoadSchemaExtensions @ 0x1407BA348 (ApiSetpLoadSchemaExtensions.c)
 *     CmDeleteKeyRecursive @ 0x1407C2CD8 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x1407C391C (CmpCloneHwProfile.c)
 *     CmpGetAcpiProfileInformation @ 0x1407C4658 (CmpGetAcpiProfileInformation.c)
 *     CmpMoveBiosAliasTable @ 0x1407C4E54 (CmpMoveBiosAliasTable.c)
 *     CmpLoadLayerVersions @ 0x1407C7810 (CmpLoadLayerVersions.c)
 *     AslRegistryEnumKey @ 0x1407F8EB0 (AslRegistryEnumKey.c)
 *     VrpPostEnumerateKey @ 0x140948938 (VrpPostEnumerateKey.c)
 *     PiDevCfgCopyDeviceKey @ 0x14094C804 (PiDevCfgCopyDeviceKey.c)
 *     pIoQueryBusDescription @ 0x14094CFE4 (pIoQueryBusDescription.c)
 *     _RegRtlEnumKey @ 0x1409525D4 (_RegRtlEnumKey.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x14095FDA0 (PiDevCfgConfigureSoftwareDevices.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140A2B5D8 (RtlpProcessIFEOKeyFilter.c)
 *     NtLockProductActivationKeys @ 0x140A35D60 (NtLockProductActivationKeys.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140A75EEC (PiDevCfgConfigureDeviceInterfaces.c)
 *     EtwpEnumerateKeyProviders @ 0x140A9438C (EtwpEnumerateKeyProviders.c)
 *     RegistryOverwriteCentralProcessor @ 0x140BFC46C (RegistryOverwriteCentralProcessor.c)
 *     PipInitDeviceOverrideCache @ 0x140C0FF48 (PipInitDeviceOverrideCache.c)
 *     PopReadSimulatedArchitecturalClasses @ 0x140C1FD64 (PopReadSimulatedArchitecturalClasses.c)
 *     PopReadSimulatedHGSClasses @ 0x140C1FF50 (PopReadSimulatedHGSClasses.c)
 *     PsInitializeBootCpuPartitions @ 0x140C235D0 (PsInitializeBootCpuPartitions.c)
 *     VhdAutoAttachVirtualDisks @ 0x140C4BCCC (VhdAutoAttachVirtualDisks.c)
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
