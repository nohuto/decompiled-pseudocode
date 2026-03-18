/*
 * XREFs of _wcsicmp @ 0x1404FBC30
 * Callers:
 *     LdrRscIsTypeExist @ 0x1402F3E9C (LdrRscIsTypeExist.c)
 *     LdrpResSearchResourceMappedFile @ 0x1402F4C50 (LdrpResSearchResourceMappedFile.c)
 *     VfUpdateWhitelist @ 0x1403EB9A8 (VfUpdateWhitelist.c)
 *     VfAssignRuleClassIdToClassDriver @ 0x1403EBA34 (VfAssignRuleClassIdToClassDriver.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x14049C294 (PopFxIsDevicePotentialDripsConstraint.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x14049CD44 (PiDevCfgGetMigrationDeviceIdScore.c)
 *     PipUpdateDeviceProducts @ 0x14059FF50 (PipUpdateDeviceProducts.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x1405A33F8 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x1405DBC64 (LdrpVerifyAlternateResourceModuleEx.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x140696F90 (RtlpMuiRegAddAlternateCodePage.c)
 *     ArbShareDriverExclusive @ 0x1406FA53C (ArbShareDriverExclusive.c)
 *     PnpCheckDriverDependencies @ 0x140716E44 (PnpCheckDriverDependencies.c)
 *     IopIsPciRootBus @ 0x140719B60 (IopIsPciRootBus.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14071BA00 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x14071BC50 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14071D504 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14071ECF8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x14071F600 (PiDevCfgResetDeviceKeyCallback.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140729860 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiDrvDbOverlayNodeHive @ 0x14072B4B0 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbRegisterNodeCallback @ 0x14072C620 (PiDrvDbRegisterNodeCallback.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14072C720 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbSetupNodeHive @ 0x14072D3A4 (PiDrvDbSetupNodeHive.c)
 *     RtlpLangNameInMultiSzString @ 0x140774FE8 (RtlpLangNameInMultiSzString.c)
 *     SLQueryLicenseValueInternal @ 0x1407AA53C (SLQueryLicenseValueInternal.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x1407F15A0 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x1407F1944 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1407F347C (SdbpCheckMatchingRegistryValue.c)
 *     SdbpGetVelocityState @ 0x1407F5134 (SdbpGetVelocityState.c)
 *     SdbpMatchDeviceString @ 0x1407F5854 (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTagHelper @ 0x1407F5DF8 (SdbpFindNextNamedTagHelper.c)
 *     AslpFileGetVersionBlock @ 0x1407FEA10 (AslpFileGetVersionBlock.c)
 *     BiGetNtPartitionPath @ 0x140804030 (BiGetNtPartitionPath.c)
 *     SiGetEspFromFirmware @ 0x1408068A0 (SiGetEspFromFirmware.c)
 *     SiIsValidDiskDevice @ 0x140806C50 (SiIsValidDiskDevice.c)
 *     SiIsValidWindowsBootEntry @ 0x140806CFC (SiIsValidWindowsBootEntry.c)
 *     _CmGetDeclarativeFilterList @ 0x14080E65C (_CmGetDeclarativeFilterList.c)
 *     _PnpMultiSzFind @ 0x140810C1C (_PnpMultiSzFind.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1408127F4 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140813028 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSuspendDatabase @ 0x140813AC8 (DrvDbSuspendDatabase.c)
 *     VhdVerifyBootDisk @ 0x140819F1C (VhdVerifyBootDisk.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14081BE68 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x14081CDD0 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x14081D030 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     AslpFileVerQueryBlock @ 0x1408299FC (AslpFileVerQueryBlock.c)
 *     SdbpFindMatchingName @ 0x14082C2B0 (SdbpFindMatchingName.c)
 *     PiSwUpdateArrayProperties @ 0x1408351E8 (PiSwUpdateArrayProperties.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x140835384 (PiSwDeviceFindInterfaceEntry.c)
 *     PiPnpRtlObjectEventWorker @ 0x140836F20 (PiPnpRtlObjectEventWorker.c)
 *     PiDqQueryApplyObjectEvent @ 0x14083856C (PiDqQueryApplyObjectEvent.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140839434 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     ConstraintEval @ 0x140839B70 (ConstraintEval.c)
 *     PiDqActionDataGetChangedProperties @ 0x14083A250 (PiDqActionDataGetChangedProperties.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1408CE630 (PiPnpRtlInterfaceFilterCallback.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1408CFCE0 (PiUEventNotifyTargetDeviceChange.c)
 *     PiDqPropertyCallback @ 0x1408D2660 (PiDqPropertyCallback.c)
 *     PropertyEval @ 0x1408D2D00 (PropertyEval.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x14092EF8C (DrvDbGetDriverDatabaseMappedProperty.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x14094C400 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgMigrateDevice @ 0x14094DC38 (PiDevCfgMigrateDevice.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140950B3C (PiDcUpdateDeviceContainerMembership.c)
 *     RtlLookupAtomInAtomTable @ 0x1409529A0 (RtlLookupAtomInAtomTable.c)
 *     _CmIsLocalMachineContainer @ 0x14095CD8C (_CmIsLocalMachineContainer.c)
 *     PipCheckForDenyExecute @ 0x14095D068 (PipCheckForDenyExecute.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x140968418 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14096D434 (PiDcHandleCustomDeviceEvent.c)
 *     RtlpHashStringToAtom @ 0x14099BF00 (RtlpHashStringToAtom.c)
 *     PiDmCompareObjects @ 0x14099C640 (PiDmCompareObjects.c)
 *     PiSwStopDestroy @ 0x1409A13B8 (PiSwStopDestroy.c)
 *     PiSwIrpStartCreateWorker @ 0x1409A4180 (PiSwIrpStartCreateWorker.c)
 *     _CmFindFilterListInflectionPoint @ 0x1409A7CFC (_CmFindFilterListInflectionPoint.c)
 *     _CmMergeFilterLists @ 0x1409A7DB4 (_CmMergeFilterLists.c)
 *     _PnpMultiSzDeleteString @ 0x1409A8744 (_PnpMultiSzDeleteString.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1409ABB18 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     LdrpSearchResourceSection_U @ 0x1409AE35C (LdrpSearchResourceSection_U.c)
 *     WmipPrepareWnodeSI @ 0x1409B6860 (WmipPrepareWnodeSI.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A01530 (DrvDbGetObjectSubKeyCallback.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x140A01800 (PiPnpRtlObjectEventCompareObjects.c)
 *     StringListContains @ 0x140A0F244 (StringListContains.c)
 *     EtwpStartLogger @ 0x140A374DC (EtwpStartLogger.c)
 *     GetPropertyFromPropArray @ 0x140A3E650 (GetPropertyFromPropArray.c)
 *     IopErrorLogThread @ 0x140A44600 (IopErrorLogThread.c)
 *     _CmUpdateDevicePanel @ 0x140A45108 (_CmUpdateDevicePanel.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140A45D84 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140A4CCA0 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140A634F0 (PiBuildDeviceNodeInstancePath.c)
 *     PiSwDeviceCompareObjects @ 0x140A64820 (PiSwDeviceCompareObjects.c)
 *     PiDevCfgResolveVariable @ 0x140A67A58 (PiDevCfgResolveVariable.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x140A6B768 (PiSwDeviceMakeCompatibleIds.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x140A6CB44 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x140A7056C (PiDevCfgEnforceDevicePolicy.c)
 *     _CmMatchLastKnownParentCallback @ 0x140A71990 (_CmMatchLastKnownParentCallback.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140A75EEC (PiDevCfgConfigureDeviceInterfaces.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140A84448 (DrvDbOpenDriverDatabaseRegKey.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140A92448 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140A968D4 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140A9DAA0 (PiCreateDriverSwDeviceCallback.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140AB7E84 (SdbpFindFirstNamedTagHelper.c)
 *     BiIsValidDiskDevice @ 0x140AD62D4 (BiIsValidDiskDevice.c)
 *     VfIsPCIBus @ 0x140B772A4 (VfIsPCIBus.c)
 *     BgpFoGetFontHandle @ 0x140BA52B0 (BgpFoGetFontHandle.c)
 *     PipMigrateResetDeviceCallback @ 0x140C109C0 (PipMigrateResetDeviceCallback.c)
 *     PipPendingServicesFilter @ 0x140C14C20 (PipPendingServicesFilter.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140C37164 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsicmp(const wchar_t *Str1, const wchar_t *Str2)
{
  const wchar_t *v2; // r10
  signed __int64 v3; // r9
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
