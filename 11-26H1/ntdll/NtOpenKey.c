/*
 * XREFs of NtOpenKey @ 0x18015F080
 * Callers:
 *     _GetOverlayPackageKeyForLanguage @ 0x18001DC20 (_GetOverlayPackageKeyForLanguage.c)
 *     RtlGetPersistedStateLocation @ 0x180028780 (RtlGetPersistedStateLocation.c)
 *     LdrpCodeAuthzInitialize @ 0x18002FA10 (LdrpCodeAuthzInitialize.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18003FCD0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x18004125C (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpQueryRegString @ 0x1800413B8 (EtwpQueryRegString.c)
 *     EtwpGetRegDwordValue @ 0x180041564 (EtwpGetRegDwordValue.c)
 *     RtlpQueryRegistryValues @ 0x1800440A0 (RtlpQueryRegistryValues.c)
 *     RtlpGetRegistryHandle @ 0x180044C38 (RtlpGetRegistryHandle.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x180045040 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     RtlpGetCustomCultureRegKey @ 0x18004C810 (RtlpGetCustomCultureRegKey.c)
 *     RtlpGetLocaleDataKey @ 0x18004CA18 (RtlpGetLocaleDataKey.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18004CB84 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180053B7C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlOpenCurrentUser @ 0x180056B10 (RtlOpenCurrentUser.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180056C34 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180056F4C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180057290 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadLanguageConfigList @ 0x180058140 (RtlpLoadLanguageConfigList.c)
 *     RtlCapabilityCheck @ 0x180059720 (RtlCapabilityCheck.c)
 *     WerpGlobalFlagsForProcess @ 0x18007FCE4 (WerpGlobalFlagsForProcess.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180082800 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlpLookupCurDirSetting @ 0x18009A5DC (RtlpLookupCurDirSetting.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800A20D0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800A2AE0 (RtlQueryImageMitigationPolicy.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800A3A04 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1800A3BFC (RtlpGetNtProductTypeFromRegistry.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x1800D1810 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800D18C8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1800D1B94 (RtlpProcessIFEOKeyFilter.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x1800D200C (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x1800D3C8C (WerpEscalationIsWMRSendStringSet.c)
 *     RtlpLoadUserUIByPolicy @ 0x1800D8790 (RtlpLoadUserUIByPolicy.c)
 *     LdrpOpenKey @ 0x1800D92C0 (LdrpOpenKey.c)
 *     RtlpQueryNlsSystemCodePages @ 0x1800DD69C (RtlpQueryNlsSystemCodePages.c)
 *     SaferpIsV2PolicyPresent @ 0x1800E2640 (SaferpIsV2PolicyPresent.c)
 *     LdrpInitializeSmtDelayedSleep @ 0x1800E8EB4 (LdrpInitializeSmtDelayedSleep.c)
 *     RtlpLoadMachineUIByPolicy @ 0x1800EB120 (RtlpLoadMachineUIByPolicy.c)
 *     RtlpNtOpenKey @ 0x1800EC5E0 (RtlpNtOpenKey.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800FB1BC (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     RXactpCommit @ 0x1800FCFB8 (RXactpCommit.c)
 *     RtlSetImageMitigationPolicy @ 0x180102700 (RtlSetImageMitigationPolicy.c)
 *     RtlpLookupSafeCurDirList @ 0x180105A64 (RtlpLookupSafeCurDirList.c)
 *     RtlOpenModernAppOptionsKey @ 0x180108040 (RtlOpenModernAppOptionsKey.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x18010BCFC (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlpAreLegacyDosDeviceNamesEnabled @ 0x1801141C0 (RtlpAreLegacyDosDeviceNamesEnabled.c)
 *     LdrpInitializeExecutionOptions @ 0x180118308 (LdrpInitializeExecutionOptions.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1801254D8 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x180125864 (RtlpIsEmptyImageFileOptionsKey.c)
 *     WerpEscalationIsDisabled @ 0x18013AC5C (WerpEscalationIsDisabled.c)
 *     RtlpHpApplyGlobalSegmentHeapConfigurations @ 0x180144E54 (RtlpHpApplyGlobalSegmentHeapConfigurations.c)
 *     RtlOsDeploymentState @ 0x180148D90 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x1801491C0 (RtlQueryValidationRunlevel.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 18;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
