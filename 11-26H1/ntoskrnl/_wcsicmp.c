/*
 * XREFs of _wcsicmp @ 0x1405389F0
 * Callers:
 *     VfUpdateWhitelist @ 0x1403C24C0 (VfUpdateWhitelist.c)
 *     VfAssignRuleClassIdToClassDriver @ 0x1403C2548 (VfAssignRuleClassIdToClassDriver.c)
 *     LdrpResSearchResourceMappedFile @ 0x1403DDCD8 (LdrpResSearchResourceMappedFile.c)
 *     LdrRscIsTypeExist @ 0x1403E0840 (LdrRscIsTypeExist.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x1404D044C (PopFxIsDevicePotentialDripsConstraint.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x1404D7770 (PiDevCfgGetMigrationDeviceIdScore.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1404F1678 (RtlpMuiRegAddAlternateCodePage.c)
 *     PipUpdateDeviceProducts @ 0x1405DA6E0 (PipUpdateDeviceProducts.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x1405DDA98 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x14061B748 (LdrpVerifyAlternateResourceModuleEx.c)
 *     ArbShareDriverExclusive @ 0x14078C39C (ArbShareDriverExclusive.c)
 *     PnpCheckDriverDependencies @ 0x1407A6F3C (PnpCheckDriverDependencies.c)
 *     IopIsPciRootBus @ 0x1407A9390 (IopIsPciRootBus.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1407AA960 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x1407AABA4 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1407AD478 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x1407ADFC0 (PiDevCfgResetDeviceKeyCallback.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1407B771C (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiDrvDbOverlayNodeHive @ 0x1407B8F20 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1407BA098 (PiDrvDbRegisterNodeCallback.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1407BA198 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbSetupNodeHive @ 0x1407BAE00 (PiDrvDbSetupNodeHive.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140887580 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x140887904 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1408893C0 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpGetVelocityState @ 0x14088AE20 (SdbpGetVelocityState.c)
 *     SdbpMatchDeviceString @ 0x14088B45C (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTagHelper @ 0x14088BCD4 (SdbpFindNextNamedTagHelper.c)
 *     AslpFileGetVersionBlock @ 0x140893EF8 (AslpFileGetVersionBlock.c)
 *     BiGetNtPartitionPathCallback @ 0x1408988F0 (BiGetNtPartitionPathCallback.c)
 *     BiResolveLocateFileCallback @ 0x140899670 (BiResolveLocateFileCallback.c)
 *     SiIsValidDiskDevice @ 0x14089AAC0 (SiIsValidDiskDevice.c)
 *     SiGetEspFromFirmware @ 0x14089B4EC (SiGetEspFromFirmware.c)
 *     SiIsValidWindowsBootEntry @ 0x14089B8B0 (SiIsValidWindowsBootEntry.c)
 *     _CmGetDeclarativeFilterList @ 0x1408A1C14 (_CmGetDeclarativeFilterList.c)
 *     _PnpMultiSzFind @ 0x1408A377C (_PnpMultiSzFind.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1408A4D3C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSuspendDatabase @ 0x1408A5940 (DrvDbSuspendDatabase.c)
 *     VhdVerifyBootDisk @ 0x1408AC46C (VhdVerifyBootDisk.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1408AE2F4 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x1408AF17C (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1408AF3E4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     ConstraintEval @ 0x14094EB24 (ConstraintEval.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14094F4E4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryApplyObjectEvent @ 0x140950150 (PiDqQueryApplyObjectEvent.c)
 *     PiPnpRtlObjectEventWorker @ 0x1409517A4 (PiPnpRtlObjectEventWorker.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14095AFAC (PiUEventNotifyTargetDeviceChange.c)
 *     PiDqPropertyCallback @ 0x14095D540 (PiDqPropertyCallback.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x14095DDC0 (PiPnpRtlInterfaceFilterCallback.c)
 *     PropertyEval @ 0x140969840 (PropertyEval.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x140973EE8 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     RtlLookupAtomInAtomTable @ 0x140974FB0 (RtlLookupAtomInAtomTable.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1409A9750 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x1409AA6B8 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1409ABF4C (PiDcUpdateDeviceContainerMembership.c)
 *     PiSwUpdateArrayProperties @ 0x1409ADFF8 (PiSwUpdateArrayProperties.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x1409AE194 (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwStopDestroy @ 0x1409B2018 (PiSwStopDestroy.c)
 *     AslpFileVerQueryBlock @ 0x1409D7CBC (AslpFileVerQueryBlock.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1409DAF9C (PiBuildDeviceNodeInstancePath.c)
 *     WmipPrepareWnodeSI @ 0x140A0E7D4 (WmipPrepareWnodeSI.c)
 *     _CmUpdateDevicePanel @ 0x140A16A1C (_CmUpdateDevicePanel.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140A1AA20 (PiDcHandleCustomDeviceEvent.c)
 *     _CmIsLocalMachineContainer @ 0x140A3D768 (_CmIsLocalMachineContainer.c)
 *     RtlpHashStringToAtom @ 0x140A41880 (RtlpHashStringToAtom.c)
 *     PiDmCompareObjects @ 0x140A41B20 (PiDmCompareObjects.c)
 *     PiDevCfgMigrateDevice @ 0x140A45858 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140A46B84 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140A47C2C (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgResolveVariable @ 0x140A480A0 (PiDevCfgResolveVariable.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x140A496A0 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     SLQueryLicenseValueInternal @ 0x140A770F8 (SLQueryLicenseValueInternal.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A86E20 (DrvDbGetObjectSubKeyCallback.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x140A89960 (PiPnpRtlObjectEventCompareObjects.c)
 *     PiSwIrpStartCreateWorker @ 0x140A8CB08 (PiSwIrpStartCreateWorker.c)
 *     LdrpSearchResourceSection_U @ 0x140A8DEE4 (LdrpSearchResourceSection_U.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A973CC (SdbpFindFirstNamedTagHelper.c)
 *     _PnpMultiSzDeleteString @ 0x140A97E08 (_PnpMultiSzDeleteString.c)
 *     StringListContains @ 0x140A9DD20 (StringListContains.c)
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 *     PiDqActionDataGetChangedProperties @ 0x140AB592C (PiDqActionDataGetChangedProperties.c)
 *     GetPropertyFromPropArray @ 0x140AC6290 (GetPropertyFromPropArray.c)
 *     IopErrorLogThread @ 0x140AD8FC0 (IopErrorLogThread.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140AED174 (PiUEventNotifyDeviceInstanceChange.c)
 *     PipCheckForDenyExecute @ 0x140B04190 (PipCheckForDenyExecute.c)
 *     PiSwDeviceCompareObjects @ 0x140B05290 (PiSwDeviceCompareObjects.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x140B0E0E4 (PiSwDeviceMakeCompatibleIds.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x140B0FF4C (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     _CmMatchLastKnownParentCallback @ 0x140B100D0 (_CmMatchLastKnownParentCallback.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x140B1D234 (PiDevCfgEnforceDevicePolicy.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140B258C4 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     SdbpFindMatchingName @ 0x140B29968 (SdbpFindMatchingName.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140B2BB4C (DrvDbOpenDriverDatabaseRegKey.c)
 *     RtlpLangNameInMultiSzString @ 0x140B30150 (RtlpLangNameInMultiSzString.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140B3E494 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140B42E9C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140B4AC70 (PiCreateDriverSwDeviceCallback.c)
 *     _CmMergeFilterLists @ 0x140B54D7C (_CmMergeFilterLists.c)
 *     _CmFindFilterListInflectionPoint @ 0x140B55058 (_CmFindFilterListInflectionPoint.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140B88288 (DrvDbSetDriverPackageMappedProperty.c)
 *     VfIsPCIBus @ 0x140C2B274 (VfIsPCIBus.c)
 *     BgpFoGetFontHandle @ 0x140C5A508 (BgpFoGetFontHandle.c)
 *     PipMigrateResetDeviceCallback @ 0x140CC8CE0 (PipMigrateResetDeviceCallback.c)
 *     PipPendingServicesFilter @ 0x140CCD2C0 (PipPendingServicesFilter.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140CF20A8 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsicmp(const wchar_t *Str1, const wchar_t *Str2)
{
  const wchar_t *v2; // r9
  signed __int64 v3; // r10
  unsigned __int16 v4; // r8
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // r8

  v2 = Str2;
  v3 = (char *)Str1 - (char *)Str2;
  do
  {
    v4 = *(const wchar_t *)((char *)v2 + v3);
    v5 = *v2++;
    v6 = v4 + 32;
    if ( (unsigned __int16)(v4 - 65) > 0x19u )
      v6 = v4;
    v7 = v5 + 32;
    if ( (unsigned __int16)(v5 - 65) > 0x19u )
      v7 = v5;
  }
  while ( v6 && v6 == v7 );
  return v6 - v7;
}
