/*
 * XREFs of NtQueryValueKey @ 0x18015F120
 * Callers:
 *     _GetOverlayPackageTypeFromKey @ 0x18001E32C (_GetOverlayPackageTypeFromKey.c)
 *     RtlGetPersistedStateLocation @ 0x180028780 (RtlGetPersistedStateLocation.c)
 *     LdrpCodeAuthzInitialize @ 0x18002FA10 (LdrpCodeAuthzInitialize.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18003FCD0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x18004125C (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpQueryRegString @ 0x1800413B8 (EtwpQueryRegString.c)
 *     EtwpGetRegDwordValue @ 0x180041564 (EtwpGetRegDwordValue.c)
 *     RtlpQueryRegistryValues @ 0x1800440A0 (RtlpQueryRegistryValues.c)
 *     RtlpIsCustomLocale @ 0x18004C740 (RtlpIsCustomLocale.c)
 *     RtlpGetUserLocaleName @ 0x18004C938 (RtlpGetUserLocaleName.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18004CB84 (RtlpLoadInstallLanguageFallback.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180056F4C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180057290 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadLanguageConfigList @ 0x180058140 (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800586F4 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlCapabilityCheck @ 0x180059720 (RtlCapabilityCheck.c)
 *     ReadUlongFromKey @ 0x180082ABC (ReadUlongFromKey.c)
 *     RtlpLookupCurDirSetting @ 0x18009A5DC (RtlpLookupCurDirSetting.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800A2AE0 (RtlQueryImageMitigationPolicy.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800A3A04 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1800A3BFC (RtlpGetNtProductTypeFromRegistry.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800BF760 (LdrAppxHandleIntegrityFailure.c)
 *     RtlQueryImageFileKeyOption @ 0x1800D1480 (RtlQueryImageFileKeyOption.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1800D1B94 (RtlpProcessIFEOKeyFilter.c)
 *     WerpEscalationReadUlongFromKey @ 0x1800D3D64 (WerpEscalationReadUlongFromKey.c)
 *     LdrpQueryValueKey @ 0x1800D6FB0 (LdrpQueryValueKey.c)
 *     QueryRegistryValue @ 0x1800DC55C (QueryRegistryValue.c)
 *     RtlpQueryNlsSystemCodePages @ 0x1800DD69C (RtlpQueryNlsSystemCodePages.c)
 *     SaferpIsV2PolicyPresent @ 0x1800E2640 (SaferpIsV2PolicyPresent.c)
 *     RtlpNtQueryValueKey @ 0x1800E4260 (RtlpNtQueryValueKey.c)
 *     LdrpInitializeSmtDelayedSleepQueryRegistry @ 0x1800E8F74 (LdrpInitializeSmtDelayedSleepQueryRegistry.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800FB1BC (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     RtlInitializeRXact @ 0x1800FCA20 (RtlInitializeRXact.c)
 *     RtlSetImageMitigationPolicy @ 0x180102700 (RtlSetImageMitigationPolicy.c)
 *     RtlpLookupSafeCurDirList @ 0x180105A64 (RtlpLookupSafeCurDirList.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x18010BCFC (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlpAreLegacyDosDeviceNamesEnabled @ 0x1801141C0 (RtlpAreLegacyDosDeviceNamesEnabled.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1801245EC (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlQueryRegistryValueWithFallback @ 0x180125130 (RtlQueryRegistryValueWithFallback.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x1801379D0 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     RtlpHpApplyGlobalSegmentHeapConfigurations @ 0x180144E54 (RtlpHpApplyGlobalSegmentHeapConfigurations.c)
 *     RtlOsDeploymentState @ 0x180148D90 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x1801491C0 (RtlQueryValidationRunlevel.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x18014E1C4 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  NTSTATUS result; // eax

  result = 23;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
