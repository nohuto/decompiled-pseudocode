/*
 * XREFs of NtOpenKey @ 0x18015F180
 * Callers:
 *     RtlpGetCustomCultureRegKey @ 0x1800010D8 (RtlpGetCustomCultureRegKey.c)
 *     RtlpGetLocaleDataKey @ 0x1800012E0 (RtlpGetLocaleDataKey.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18000144C (RtlpLoadInstallLanguageFallback.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18000844C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlOpenCurrentUser @ 0x18000B3E0 (RtlOpenCurrentUser.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18000B504 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18000B81C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18000BB60 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadLanguageConfigList @ 0x18000CA10 (RtlpLoadLanguageConfigList.c)
 *     RtlCapabilityCheck @ 0x18000DFF0 (RtlCapabilityCheck.c)
 *     _GetOverlayPackageKeyForLanguage @ 0x180032AC0 (_GetOverlayPackageKeyForLanguage.c)
 *     RtlGetPersistedStateLocation @ 0x18003E210 (RtlGetPersistedStateLocation.c)
 *     LdrpCodeAuthzInitialize @ 0x1800454A0 (LdrpCodeAuthzInitialize.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180055750 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x180056CDC (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpQueryRegString @ 0x180056E38 (EtwpQueryRegString.c)
 *     EtwpGetRegDwordValue @ 0x180056FE4 (EtwpGetRegDwordValue.c)
 *     RtlpQueryRegistryValues @ 0x180059B20 (RtlpQueryRegistryValues.c)
 *     RtlpGetRegistryHandle @ 0x18005A6B8 (RtlpGetRegistryHandle.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x18005AAC0 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x1800623B0 (RtlpGetDeviceFamilyInfoEnum.c)
 *     WerpGlobalFlagsForProcess @ 0x180088964 (WerpGlobalFlagsForProcess.c)
 *     RtlpLookupCurDirSetting @ 0x18009B4AC (RtlpLookupCurDirSetting.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800A2FA0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800A39B0 (RtlQueryImageMitigationPolicy.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800A48D4 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1800A4ACC (RtlpGetNtProductTypeFromRegistry.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x1800D3400 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800D34B8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1800D3784 (RtlpProcessIFEOKeyFilter.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x1800D3BFC (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     RtlpQueryNlsSystemCodePages @ 0x1800D594C (RtlpQueryNlsSystemCodePages.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x1800D6CCC (WerpEscalationIsWMRSendStringSet.c)
 *     RtlpLoadUserUIByPolicy @ 0x1800DB8B0 (RtlpLoadUserUIByPolicy.c)
 *     LdrpOpenKey @ 0x1800DC350 (LdrpOpenKey.c)
 *     SaferpIsV2PolicyPresent @ 0x1800E4790 (SaferpIsV2PolicyPresent.c)
 *     LdrpInitializeSmtDelayedSleep @ 0x1800E9CA4 (LdrpInitializeSmtDelayedSleep.c)
 *     RtlpLoadMachineUIByPolicy @ 0x1800EBF50 (RtlpLoadMachineUIByPolicy.c)
 *     RtlpNtOpenKey @ 0x1800ED140 (RtlpNtOpenKey.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800FBA6C (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     RXactpCommit @ 0x1800FD868 (RXactpCommit.c)
 *     RtlSetImageMitigationPolicy @ 0x180103380 (RtlSetImageMitigationPolicy.c)
 *     RtlpLookupSafeCurDirList @ 0x180106064 (RtlpLookupSafeCurDirList.c)
 *     RtlOpenModernAppOptionsKey @ 0x180108640 (RtlOpenModernAppOptionsKey.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x18010C1AC (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlpAreLegacyDosDeviceNamesEnabled @ 0x1801149C4 (RtlpAreLegacyDosDeviceNamesEnabled.c)
 *     LdrpInitializeExecutionOptions @ 0x180118558 (LdrpInitializeExecutionOptions.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x180125768 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x180125AF4 (RtlpIsEmptyImageFileOptionsKey.c)
 *     WerpEscalationIsDisabled @ 0x18013AEEC (WerpEscalationIsDisabled.c)
 *     RtlpHpApplyGlobalSegmentHeapConfigurations @ 0x180144FA4 (RtlpHpApplyGlobalSegmentHeapConfigurations.c)
 *     RtlOsDeploymentState @ 0x180148EE0 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x180149310 (RtlQueryValidationRunlevel.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenKey()
{
  __int64 result; // rax

  result = 18LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
