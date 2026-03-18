/*
 * XREFs of _wcsicmp @ 0x140536570
 * Callers:
 *     VfUpdateWhitelist @ 0x1403B85C0 (VfUpdateWhitelist.c)
 *     VfAssignRuleClassIdToClassDriver @ 0x1403B8648 (VfAssignRuleClassIdToClassDriver.c)
 *     LdrpResSearchResourceMappedFile @ 0x1403DAAE8 (LdrpResSearchResourceMappedFile.c)
 *     LdrRscIsTypeExist @ 0x1403DD650 (LdrRscIsTypeExist.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x1404D6C7C (PopFxIsDevicePotentialDripsConstraint.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x1404DE090 (PiDevCfgGetMigrationDeviceIdScore.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1404F8068 (RtlpMuiRegAddAlternateCodePage.c)
 *     PipUpdateDeviceProducts @ 0x1405D7EE0 (PipUpdateDeviceProducts.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x1405DB1E8 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x1406186F8 (LdrpVerifyAlternateResourceModuleEx.c)
 *     ArbShareDriverExclusive @ 0x14078986C (ArbShareDriverExclusive.c)
 *     PnpCheckDriverDependencies @ 0x1407A43FC (PnpCheckDriverDependencies.c)
 *     IopIsPciRootBus @ 0x1407A67E0 (IopIsPciRootBus.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1407A7DB0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x1407A7FF4 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1407AA688 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x1407AAFA0 (PiDevCfgResetDeviceKeyCallback.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1407B46BC (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiDrvDbOverlayNodeHive @ 0x1407B5EC0 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1407B7038 (PiDrvDbRegisterNodeCallback.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1407B7138 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbSetupNodeHive @ 0x1407B7DA0 (PiDrvDbSetupNodeHive.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140881180 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x140881504 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140882FC0 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpGetVelocityState @ 0x140884A20 (SdbpGetVelocityState.c)
 *     SdbpMatchDeviceString @ 0x14088505C (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTagHelper @ 0x1408858D4 (SdbpFindNextNamedTagHelper.c)
 *     AslpFileGetVersionBlock @ 0x14088DAFC (AslpFileGetVersionBlock.c)
 *     BiGetNtPartitionPathCallback @ 0x1408924F0 (BiGetNtPartitionPathCallback.c)
 *     BiResolveLocateFileCallback @ 0x140893270 (BiResolveLocateFileCallback.c)
 *     SiIsValidDiskDevice @ 0x1408946C0 (SiIsValidDiskDevice.c)
 *     SiGetEspFromFirmware @ 0x1408950EC (SiGetEspFromFirmware.c)
 *     SiIsValidWindowsBootEntry @ 0x1408954B0 (SiIsValidWindowsBootEntry.c)
 *     _CmGetDeclarativeFilterList @ 0x14089B814 (_CmGetDeclarativeFilterList.c)
 *     _PnpMultiSzFind @ 0x14089D37C (_PnpMultiSzFind.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14089E93C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSuspendDatabase @ 0x14089F540 (DrvDbSuspendDatabase.c)
 *     VhdVerifyBootDisk @ 0x1408A5FFC (VhdVerifyBootDisk.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1408A7E84 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x1408A8D0C (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1408A8F74 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140909994 (PiDcUpdateDeviceContainerMembership.c)
 *     PiSwUpdateArrayProperties @ 0x14090BED4 (PiSwUpdateArrayProperties.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x14090C070 (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwStopDestroy @ 0x14090FEE8 (PiSwStopDestroy.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x140919488 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     RtlLookupAtomInAtomTable @ 0x14091A550 (RtlLookupAtomInAtomTable.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140987D80 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgMigrateDevice @ 0x14098B138 (PiDevCfgMigrateDevice.c)
 *     ConstraintEval @ 0x14098E0C4 (ConstraintEval.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14098EA84 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryApplyObjectEvent @ 0x14098F6F0 (PiDqQueryApplyObjectEvent.c)
 *     PiPnpRtlObjectEventWorker @ 0x140990D44 (PiPnpRtlObjectEventWorker.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14099A54C (PiUEventNotifyTargetDeviceChange.c)
 *     PiDqPropertyCallback @ 0x14099CAE0 (PiDqPropertyCallback.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x14099D360 (PiPnpRtlInterfaceFilterCallback.c)
 *     PropertyEval @ 0x1409A8E30 (PropertyEval.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x1409D60E8 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1409D8860 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     _CmUpdateDevicePanel @ 0x1409D97C8 (_CmUpdateDevicePanel.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1409DD768 (PiDcHandleCustomDeviceEvent.c)
 *     AslpFileVerQueryBlock @ 0x1409E5068 (AslpFileVerQueryBlock.c)
 *     WmipPrepareWnodeSI @ 0x140A0F5E4 (WmipPrepareWnodeSI.c)
 *     _CmIsLocalMachineContainer @ 0x140A2A6D8 (_CmIsLocalMachineContainer.c)
 *     RtlpHashStringToAtom @ 0x140A2FA00 (RtlpHashStringToAtom.c)
 *     PiDmCompareObjects @ 0x140A2FCA0 (PiDmCompareObjects.c)
 *     SLQueryLicenseValueInternal @ 0x140A6A758 (SLQueryLicenseValueInternal.c)
 *     EtwpStartLogger @ 0x140A6E1B4 (EtwpStartLogger.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140A71014 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveVariable @ 0x140A71BD0 (PiDevCfgResolveVariable.c)
 *     PiSwIrpStartCreateWorker @ 0x140A7B9C8 (PiSwIrpStartCreateWorker.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A80FB0 (DrvDbGetObjectSubKeyCallback.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x140A845E0 (PiPnpRtlObjectEventCompareObjects.c)
 *     LdrpSearchResourceSection_U @ 0x140A86DB4 (LdrpSearchResourceSection_U.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A9287C (SdbpFindFirstNamedTagHelper.c)
 *     _PnpMultiSzDeleteString @ 0x140A932B8 (_PnpMultiSzDeleteString.c)
 *     StringListContains @ 0x140A99BA0 (StringListContains.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140AA7A68 (PiBuildDeviceNodeInstancePath.c)
 *     PiDqActionDataGetChangedProperties @ 0x140AB458C (PiDqActionDataGetChangedProperties.c)
 *     GetPropertyFromPropArray @ 0x140AC4620 (GetPropertyFromPropArray.c)
 *     IopErrorLogThread @ 0x140ADBA70 (IopErrorLogThread.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140AEA684 (PiUEventNotifyDeviceInstanceChange.c)
 *     PipCheckForDenyExecute @ 0x140B02460 (PipCheckForDenyExecute.c)
 *     PiSwDeviceCompareObjects @ 0x140B03680 (PiSwDeviceCompareObjects.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x140B0C994 (PiSwDeviceMakeCompatibleIds.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x140B0E714 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     _CmMatchLastKnownParentCallback @ 0x140B0E8A0 (_CmMatchLastKnownParentCallback.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x140B1AF84 (PiDevCfgEnforceDevicePolicy.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140B234C4 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     SdbpFindMatchingName @ 0x140B27CD8 (SdbpFindMatchingName.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140B29ACC (DrvDbOpenDriverDatabaseRegKey.c)
 *     RtlpLangNameInMultiSzString @ 0x140B2E0D0 (RtlpLangNameInMultiSzString.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140B3C214 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x140B3E4A0 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140B40E8C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140B48EE0 (PiCreateDriverSwDeviceCallback.c)
 *     _CmMergeFilterLists @ 0x140B524DC (_CmMergeFilterLists.c)
 *     _CmFindFilterListInflectionPoint @ 0x140B527B8 (_CmFindFilterListInflectionPoint.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140B7F3A8 (DrvDbSetDriverPackageMappedProperty.c)
 *     VfIsPCIBus @ 0x140C25264 (VfIsPCIBus.c)
 *     BgpFoGetFontHandle @ 0x140C54508 (BgpFoGetFontHandle.c)
 *     PipMigrateResetDeviceCallback @ 0x140CC2C10 (PipMigrateResetDeviceCallback.c)
 *     PipPendingServicesFilter @ 0x140CC71D0 (PipPendingServicesFilter.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140CEBDA4 (CmSelectQualifiedInstallLanguage.c)
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
