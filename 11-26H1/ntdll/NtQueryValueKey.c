/*
 * XREFs of NtQueryValueKey @ 0x18015F220
 * Callers:
 *     RtlpIsCustomLocale @ 0x180001008 (RtlpIsCustomLocale.c)
 *     RtlpGetUserLocaleName @ 0x180001200 (RtlpGetUserLocaleName.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18000144C (RtlpLoadInstallLanguageFallback.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18000B81C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18000BB60 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadLanguageConfigList @ 0x18000CA10 (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x18000CFC4 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlCapabilityCheck @ 0x18000DFF0 (RtlCapabilityCheck.c)
 *     _GetOverlayPackageTypeFromKey @ 0x1800331CC (_GetOverlayPackageTypeFromKey.c)
 *     RtlGetPersistedStateLocation @ 0x18003E210 (RtlGetPersistedStateLocation.c)
 *     LdrpCodeAuthzInitialize @ 0x1800454A0 (LdrpCodeAuthzInitialize.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180055750 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x180056CDC (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpQueryRegString @ 0x180056E38 (EtwpQueryRegString.c)
 *     EtwpGetRegDwordValue @ 0x180056FE4 (EtwpGetRegDwordValue.c)
 *     RtlpQueryRegistryValues @ 0x180059B20 (RtlpQueryRegistryValues.c)
 *     ReadUlongFromKey @ 0x18006266C (ReadUlongFromKey.c)
 *     RtlpLookupCurDirSetting @ 0x18009B4AC (RtlpLookupCurDirSetting.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800A39B0 (RtlQueryImageMitigationPolicy.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800A48D4 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1800A4ACC (RtlpGetNtProductTypeFromRegistry.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800C1AB0 (LdrAppxHandleIntegrityFailure.c)
 *     RtlQueryImageFileKeyOption @ 0x1800D3070 (RtlQueryImageFileKeyOption.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1800D3784 (RtlpProcessIFEOKeyFilter.c)
 *     RtlpQueryNlsSystemCodePages @ 0x1800D594C (RtlpQueryNlsSystemCodePages.c)
 *     WerpEscalationReadUlongFromKey @ 0x1800D6DA4 (WerpEscalationReadUlongFromKey.c)
 *     LdrpQueryValueKey @ 0x1800D9FF0 (LdrpQueryValueKey.c)
 *     QueryRegistryValue @ 0x1800DF5EC (QueryRegistryValue.c)
 *     SaferpIsV2PolicyPresent @ 0x1800E4790 (SaferpIsV2PolicyPresent.c)
 *     RtlpNtQueryValueKey @ 0x1800E6050 (RtlpNtQueryValueKey.c)
 *     LdrpInitializeSmtDelayedSleepQueryRegistry @ 0x1800E9D64 (LdrpInitializeSmtDelayedSleepQueryRegistry.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800FBA6C (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     RtlInitializeRXact @ 0x1800FD2D0 (RtlInitializeRXact.c)
 *     RtlSetImageMitigationPolicy @ 0x180103380 (RtlSetImageMitigationPolicy.c)
 *     RtlpLookupSafeCurDirList @ 0x180106064 (RtlpLookupSafeCurDirList.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x18010C1AC (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlpAreLegacyDosDeviceNamesEnabled @ 0x1801149C4 (RtlpAreLegacyDosDeviceNamesEnabled.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x18012487C (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlQueryRegistryValueWithFallback @ 0x1801253C0 (RtlQueryRegistryValueWithFallback.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x180137C60 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     RtlpHpApplyGlobalSegmentHeapConfigurations @ 0x180144FA4 (RtlpHpApplyGlobalSegmentHeapConfigurations.c)
 *     RtlOsDeploymentState @ 0x180148EE0 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x180149310 (RtlQueryValidationRunlevel.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x18014E314 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryValueKey()
{
  __int64 result; // rax

  result = 23LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
