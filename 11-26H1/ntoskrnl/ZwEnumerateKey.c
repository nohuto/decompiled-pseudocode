/*
 * XREFs of ZwEnumerateKey @ 0x140723A30
 * Callers:
 *     HalpMcEnumerateAndSetPatchConfig @ 0x1405931E8 (HalpMcEnumerateAndSetPatchConfig.c)
 *     DifZwEnumerateKeyWrapper @ 0x1406A5470 (DifZwEnumerateKeyWrapper.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1407202C4 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x140720514 (_RtlpRemovePendingDeleteLanguages.c)
 *     PiDcInitUpdateProperties @ 0x1407A7AFC (PiDcInitUpdateProperties.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1408054A0 (RtlpUpdateDynamicTimeZones.c)
 *     SepReadAndInsertCaps @ 0x140816E5C (SepReadAndInsertCaps.c)
 *     WdipSemLoadNextContextProvider @ 0x14081F78C (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadNextEndEvent @ 0x14081FA3C (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x14081FD4C (WdipSemLoadNextScenario.c)
 *     WdipSemLoadScenarioTable @ 0x140820244 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x140820FAC (WdipSemLoadLocalGroupPolicy.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x140825B64 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x140826478 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1408266A4 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x140826F90 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     EtwpEnumerateAutologgerPath @ 0x14082D9D8 (EtwpEnumerateAutologgerPath.c)
 *     ApiSetpLoadSchemaExtensions @ 0x14084A9DC (ApiSetpLoadSchemaExtensions.c)
 *     CmDeleteKeyRecursive @ 0x1408514B8 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x140852134 (CmpCloneHwProfile.c)
 *     CmpGetAcpiProfileInformation @ 0x140852E80 (CmpGetAcpiProfileInformation.c)
 *     CmpMoveBiosAliasTable @ 0x140853680 (CmpMoveBiosAliasTable.c)
 *     CmpLoadLayerVersions @ 0x140855D54 (CmpLoadLayerVersions.c)
 *     AslRegistryEnumKey @ 0x140888340 (AslRegistryEnumKey.c)
 *     _RegRtlEnumKey @ 0x14091A1C0 (_RegRtlEnumKey.c)
 *     VrpPostEnumerateKey @ 0x140976950 (VrpPostEnumerateKey.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140987D80 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x1409880EC (PiDevCfgConfigureSoftwareDevices.c)
 *     BiEnumerateSubKeys @ 0x1409D1680 (BiEnumerateSubKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x140A731C8 (PiDevCfgCopyDeviceKey.c)
 *     pIoQueryBusDescription @ 0x140A744A8 (pIoQueryBusDescription.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140AB4F0C (RtlpProcessIFEOKeyFilter.c)
 *     NtLockProductActivationKeys @ 0x140AE5D90 (NtLockProductActivationKeys.c)
 *     EtwpEnumerateKeyProviders @ 0x140B3E040 (EtwpEnumerateKeyProviders.c)
 *     RegistryOverwriteCentralProcessor @ 0x140CAD3DC (RegistryOverwriteCentralProcessor.c)
 *     PipInitDeviceOverrideCache @ 0x140CC2194 (PipInitDeviceOverrideCache.c)
 *     PopReadSimulatedArchitecturalClasses @ 0x140CD39DC (PopReadSimulatedArchitecturalClasses.c)
 *     PopReadSimulatedHGSClasses @ 0x140CD3BD0 (PopReadSimulatedHGSClasses.c)
 *     PopReadSimulatedWpsContainment @ 0x140CD427C (PopReadSimulatedWpsContainment.c)
 *     PsInitializeBootCpuPartitions @ 0x140CD7AC4 (PsInitializeBootCpuPartitions.c)
 *     VhdAutoAttachVirtualDisks @ 0x140D02604 (VhdAutoAttachVirtualDisks.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(KeyHandle, *(_QWORD *)&Index);
}
