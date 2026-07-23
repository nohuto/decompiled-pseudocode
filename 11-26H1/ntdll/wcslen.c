/*
 * XREFs of wcslen @ 0x18012D850
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x180019070 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x180019960 (LdrpSearchResourceSection_U.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001B390 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlAppendUnicodeToString @ 0x18001D520 (RtlAppendUnicodeToString.c)
 *     _GetOverlayPackageKeyForLanguage @ 0x18001DC20 (_GetOverlayPackageKeyForLanguage.c)
 *     _GetOverlayPackageTypeFromKey @ 0x18001E32C (_GetOverlayPackageTypeFromKey.c)
 *     _GetOverlayPackagePathFromKey @ 0x18001E478 (_GetOverlayPackagePathFromKey.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x18001E730 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     RtlGetFileMUIPath @ 0x1800206B0 (RtlGetFileMUIPath.c)
 *     RtlGetFullPathName_U @ 0x1800212E0 (RtlGetFullPathName_U.c)
 *     RtlpWow64SelectSystem32PathInternal @ 0x180021618 (RtlpWow64SelectSystem32PathInternal.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180024430 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x180026C60 (RtlpMuiRegTryToAppendLangId.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180026E60 (RtlFormatCurrentUserKeyPath.c)
 *     RtlCreateUnicodeString @ 0x180028180 (RtlCreateUnicodeString.c)
 *     RtlGetPersistedStateLocation @ 0x180028780 (RtlGetPersistedStateLocation.c)
 *     LdrpApplyFileNameRedirection @ 0x18002D310 (LdrpApplyFileNameRedirection.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x18002DE10 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x18002DEB0 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     RtlGetImageFileMachines @ 0x18002F2C0 (RtlGetImageFileMachines.c)
 *     LdrpCodeAuthzInitialize @ 0x18002FA10 (LdrpCodeAuthzInitialize.c)
 *     LdrpPreprocessDllName @ 0x180030180 (LdrpPreprocessDllName.c)
 *     RtlGetFullPathName_Ustr @ 0x180032060 (RtlGetFullPathName_Ustr.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18003FCD0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x18004125C (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpQueryRegString @ 0x1800413B8 (EtwpQueryRegString.c)
 *     EtwpGetRegDwordValue @ 0x180041564 (EtwpGetRegDwordValue.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180042BE0 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpQueryRegistryValues @ 0x1800440A0 (RtlpQueryRegistryValues.c)
 *     RtlpIsCustomLocale @ 0x18004C740 (RtlpIsCustomLocale.c)
 *     RtlpMatchUserLanguage @ 0x18004C874 (RtlpMatchUserLanguage.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18004CB84 (RtlpLoadInstallLanguageFallback.c)
 *     RtlInitUnicodeString @ 0x18004D1D0 (RtlInitUnicodeString.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x18004D6C0 (RtlpMuiRegGetLanguageSpec.c)
 *     GetNameFromLangListNode @ 0x18004DF10 (GetNameFromLangListNode.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x18004E02C (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18004E220 (RtlGetSystemPreferredUILanguages.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x18004EB30 (LdrpMergeParentBaseLanguagesToList.c)
 *     LdrpMergeLangFallbackLists @ 0x18004F000 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x18004F6F0 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlGetNeutralFallback @ 0x18004F8A0 (RtlGetNeutralFallback.c)
 *     RtlpAddNeutralsToMergedList @ 0x180050260 (RtlpAddNeutralsToMergedList.c)
 *     LdrpLangFallbackListAppendNode @ 0x1800505C0 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180050A20 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x180051150 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlLCIDToCultureName @ 0x1800512D0 (RtlLCIDToCultureName.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180052AB0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180053B7C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpComputeLangListCheckSum @ 0x180054740 (RtlpComputeLangListCheckSum.c)
 *     LdrResFallbackLangList @ 0x180054C10 (LdrResFallbackLangList.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800551A0 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     GetLCIDFromLangListNode @ 0x1800555D0 (GetLCIDFromLangListNode.c)
 *     RtlGetUILanguageInfo @ 0x180055900 (RtlGetUILanguageInfo.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x180055F40 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180056350 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlOpenCurrentUser @ 0x180056B10 (RtlOpenCurrentUser.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180056F4C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180057290 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadLanguageConfigList @ 0x180058140 (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800586F4 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpPopulateLanguageConfigList @ 0x180058A90 (RtlpPopulateLanguageConfigList.c)
 *     RtlCapabilityCheck @ 0x180059720 (RtlCapabilityCheck.c)
 *     EtwpGetPrivateLoggerContext @ 0x180066730 (EtwpGetPrivateLoggerContext.c)
 *     RtlQueryProcessDebugInformation @ 0x1800742B0 (RtlQueryProcessDebugInformation.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180082800 (RtlpGetDeviceFamilyInfoEnum.c)
 *     ReadUlongFromKey @ 0x180082ABC (ReadUlongFromKey.c)
 *     SwitchedRtlGetVersion @ 0x1800833F0 (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x180083D40 (RtlGetVersion.c)
 *     RtlpResetDriveEnvironment @ 0x18009A29C (RtlpResetDriveEnvironment.c)
 *     RtlpCheckRelativeDrive @ 0x18009A374 (RtlpCheckRelativeDrive.c)
 *     RtlpWow64ThunkEnvironmentTo64 @ 0x18009D5C0 (RtlpWow64ThunkEnvironmentTo64.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800A20D0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800A2AE0 (RtlQueryImageMitigationPolicy.c)
 *     RtlInitUnicodeStringEx @ 0x1800A39B0 (RtlInitUnicodeStringEx.c)
 *     LdrpMapResourceFile @ 0x1800A4CE0 (LdrpMapResourceFile.c)
 *     RtlDoesFileExists_UEx @ 0x1800A501C (RtlDoesFileExists_UEx.c)
 *     LdrResSearchResource @ 0x1800AA2E0 (LdrResSearchResource.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x1800B8F40 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpBuildSystem32FileName @ 0x1800BC260 (LdrpBuildSystem32FileName.c)
 *     LdrpIsReparsePoint @ 0x1800C3638 (LdrpIsReparsePoint.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1800C5290 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlDosPathNameToNtPathName_U_WithStatus @ 0x1800C9170 (RtlDosPathNameToNtPathName_U_WithStatus.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1800CA5C0 (RtlpGetNameFromLangInfoNode.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1800CAA80 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlGetFullPathName_UEx @ 0x1800CAE50 (RtlGetFullPathName_UEx.c)
 *     SendMessageToWERService @ 0x1800CB53C (SendMessageToWERService.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x1800CEE00 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800CF8A4 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     RtlQueryImageFileKeyOption @ 0x1800D1480 (RtlQueryImageFileKeyOption.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800D18C8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1800D1B94 (RtlpProcessIFEOKeyFilter.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x1800D37E0 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x1800D3C8C (WerpEscalationIsWMRSendStringSet.c)
 *     WerpEscalationReadUlongFromKey @ 0x1800D3D64 (WerpEscalationReadUlongFromKey.c)
 *     RtlIsDosDeviceName_U @ 0x1800D4440 (RtlIsDosDeviceName_U.c)
 *     RtlDosPathNameToNtPathName_U @ 0x1800D64C0 (RtlDosPathNameToNtPathName_U.c)
 *     LdrpReportError @ 0x1800D75E0 (LdrpReportError.c)
 *     RtlpLoadUserUIByPolicy @ 0x1800D8790 (RtlpLoadUserUIByPolicy.c)
 *     CompatCachepLookupCdb @ 0x1800D8F50 (CompatCachepLookupCdb.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x1800DD450 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlpQueryNlsSystemCodePages @ 0x1800DD69C (RtlpQueryNlsSystemCodePages.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800DE1D8 (RtlpMuiRegConfigMatchesInstalled.c)
 *     LdrLoadAlternateResourceModule @ 0x1800E2E40 (LdrLoadAlternateResourceModule.c)
 *     RtlpLoadMachineUIByPolicy @ 0x1800EB120 (RtlpLoadMachineUIByPolicy.c)
 *     RtlInitializeRXact @ 0x1800FCA20 (RtlInitializeRXact.c)
 *     RtlApplyRXact @ 0x1800FCE60 (RtlApplyRXact.c)
 *     RtlSetImageMitigationPolicy @ 0x180102700 (RtlSetImageMitigationPolicy.c)
 *     RtlWriteRegistryValue @ 0x1801063C0 (RtlWriteRegistryValue.c)
 *     RtlCreateBootStatusDataFile @ 0x18010B9B0 (RtlCreateBootStatusDataFile.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x18010BCFC (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlConnectToSm @ 0x18010F390 (RtlConnectToSm.c)
 *     RtlDeleteRegistryValue @ 0x18010F680 (RtlDeleteRegistryValue.c)
 *     LdrpCnvrtShortToLongFileName @ 0x180113BA8 (LdrpCnvrtShortToLongFileName.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1801245EC (RtlpMuiRegAddAlternateCodePage.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1801254D8 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     wcscat @ 0x18012D690 (wcscat.c)
 *     wcscpy @ 0x18012D6D0 (wcscpy.c)
 *     wcsncat @ 0x18012D980 (wcsncat.c)
 *     wcstombs @ 0x18012E310 (wcstombs.c)
 *     swscanf_s @ 0x180133F90 (swscanf_s.c)
 * Callees:
 *     <none>
 */

size_t __cdecl wcslen(const wchar_t *String)
{
  __int64 v4; // rcx
  bool v5; // zf
  __m128i *i; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  bool v9; // cf
  const wchar_t *v10; // rcx
  unsigned __int64 v11; // r9
  const wchar_t *v12; // rax
  size_t v13; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  const wchar_t *v19; // rcx
  unsigned __int64 v20; // r9
  const wchar_t *v21; // rax

  v4 = (unsigned __int8)String & 1;
  if ( (_isa_info & 0x10) != 0 )
  {
    v5 = v4 == 0;
    i = (__m128i *)String;
    if ( !v5 )
    {
      while ( i->m128i_i16[0] )
        i = (__m128i *)((char *)i + 2);
      return ((char *)i - (char *)String) >> 1;
    }
    v7 = (unsigned __int8)String & 0x1F;
    v8 = 32 - v7;
    v9 = v7 != 0;
    v10 = String;
    v11 = (v8 & (unsigned __int64)-(__int64)v9) >> 1;
    v12 = &String[v11];
    if ( String != v12 )
    {
      do
      {
        if ( !*v10 )
          break;
        ++v10;
      }
      while ( v10 != v12 );
    }
    v13 = v10 - String;
    if ( v13 == v11 )
    {
      i = (__m128i *)&String[v13];
      __asm { vpxor   xmm2, xmm2, xmm2 }
      while ( 1 )
      {
        __asm
        {
          vpcmpeqw ymm1, ymm2, ymmword ptr [rcx]
          vpmovmskb eax, ymm1
        }
        if ( _EAX )
          break;
        i += 2;
      }
      __asm { vzeroupper }
      while ( i->m128i_i16[0] )
        i = (__m128i *)((char *)i + 2);
      return ((char *)i - (char *)String) >> 1;
    }
  }
  else
  {
    v5 = v4 == 0;
    i = (__m128i *)String;
    if ( !v5 )
    {
      while ( i->m128i_i16[0] )
        i = (__m128i *)((char *)i + 2);
      return ((char *)i - (char *)String) >> 1;
    }
    v17 = (unsigned __int8)String & 0xF;
    v18 = 16 - v17;
    v9 = v17 != 0;
    v19 = String;
    v20 = (v18 & (unsigned __int64)-(__int64)v9) >> 1;
    v21 = &String[v20];
    if ( String != v21 )
    {
      do
      {
        if ( !*v19 )
          break;
        ++v19;
      }
      while ( v19 != v21 );
    }
    v13 = v19 - String;
    if ( v13 == v20 )
    {
      for ( i = (__m128i *)&String[v13]; !_mm_movemask_epi8(_mm_cmpeq_epi16((__m128i)0LL, *i)); ++i )
        ;
      while ( i->m128i_i16[0] )
        i = (__m128i *)((char *)i + 2);
      return ((char *)i - (char *)String) >> 1;
    }
  }
  return v13;
}
