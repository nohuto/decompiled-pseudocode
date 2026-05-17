/*
 * XREFs of wcslen @ 0x18012DAE0
 * Callers:
 *     RtlpIsCustomLocale @ 0x180001008 (RtlpIsCustomLocale.c)
 *     RtlpMatchUserLanguage @ 0x18000113C (RtlpMatchUserLanguage.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18000144C (RtlpLoadInstallLanguageFallback.c)
 *     RtlInitUnicodeString @ 0x180001AA0 (RtlInitUnicodeString.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x180001F90 (RtlpMuiRegGetLanguageSpec.c)
 *     GetNameFromLangListNode @ 0x1800027E0 (GetNameFromLangListNode.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x1800028FC (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180002AF0 (RtlGetSystemPreferredUILanguages.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x180003400 (LdrpMergeParentBaseLanguagesToList.c)
 *     LdrpMergeLangFallbackLists @ 0x1800038D0 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180003FC0 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlGetNeutralFallback @ 0x180004170 (RtlGetNeutralFallback.c)
 *     RtlpAddNeutralsToMergedList @ 0x180004B30 (RtlpAddNeutralsToMergedList.c)
 *     LdrpLangFallbackListAppendNode @ 0x180004E90 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x1800052F0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x180005A20 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlLCIDToCultureName @ 0x180005BA0 (RtlLCIDToCultureName.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180007380 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18000844C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpComputeLangListCheckSum @ 0x180009010 (RtlpComputeLangListCheckSum.c)
 *     LdrResFallbackLangList @ 0x1800094E0 (LdrResFallbackLangList.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x180009A70 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     GetLCIDFromLangListNode @ 0x180009EA0 (GetLCIDFromLangListNode.c)
 *     RtlGetUILanguageInfo @ 0x18000A1D0 (RtlGetUILanguageInfo.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x18000A810 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18000AC20 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlOpenCurrentUser @ 0x18000B3E0 (RtlOpenCurrentUser.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18000B81C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18000BB60 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadLanguageConfigList @ 0x18000CA10 (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x18000CFC4 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpPopulateLanguageConfigList @ 0x18000D360 (RtlpPopulateLanguageConfigList.c)
 *     RtlCapabilityCheck @ 0x18000DFF0 (RtlCapabilityCheck.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18002DF70 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x18002E860 (LdrpSearchResourceSection_U.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180030230 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlAppendUnicodeToString @ 0x1800323C0 (RtlAppendUnicodeToString.c)
 *     _GetOverlayPackageKeyForLanguage @ 0x180032AC0 (_GetOverlayPackageKeyForLanguage.c)
 *     _GetOverlayPackageTypeFromKey @ 0x1800331CC (_GetOverlayPackageTypeFromKey.c)
 *     _GetOverlayPackagePathFromKey @ 0x180033318 (_GetOverlayPackagePathFromKey.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x1800335D0 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     RtlGetFileMUIPath @ 0x180035550 (RtlGetFileMUIPath.c)
 *     RtlGetFullPathName_U @ 0x180036180 (RtlGetFullPathName_U.c)
 *     RtlpWow64SelectSystem32PathInternal @ 0x1800364B8 (RtlpWow64SelectSystem32PathInternal.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180039EC0 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x18003C6F0 (RtlpMuiRegTryToAppendLangId.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18003C8F0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlCreateUnicodeString @ 0x18003DC10 (RtlCreateUnicodeString.c)
 *     RtlGetPersistedStateLocation @ 0x18003E210 (RtlGetPersistedStateLocation.c)
 *     LdrpApplyFileNameRedirection @ 0x180042DA0 (LdrpApplyFileNameRedirection.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x1800438A0 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x180043940 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     RtlGetImageFileMachines @ 0x180044D50 (RtlGetImageFileMachines.c)
 *     LdrpCodeAuthzInitialize @ 0x1800454A0 (LdrpCodeAuthzInitialize.c)
 *     LdrpPreprocessDllName @ 0x180045C10 (LdrpPreprocessDllName.c)
 *     RtlGetFullPathName_Ustr @ 0x180047AE0 (RtlGetFullPathName_Ustr.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180055750 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x180056CDC (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpQueryRegString @ 0x180056E38 (EtwpQueryRegString.c)
 *     EtwpGetRegDwordValue @ 0x180056FE4 (EtwpGetRegDwordValue.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180058660 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpQueryRegistryValues @ 0x180059B20 (RtlpQueryRegistryValues.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x1800623B0 (RtlpGetDeviceFamilyInfoEnum.c)
 *     ReadUlongFromKey @ 0x18006266C (ReadUlongFromKey.c)
 *     SwitchedRtlGetVersion @ 0x180062FA0 (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x1800638F0 (RtlGetVersion.c)
 *     EtwpGetPrivateLoggerContext @ 0x180077F10 (EtwpGetPrivateLoggerContext.c)
 *     RtlQueryProcessDebugInformation @ 0x18008F550 (RtlQueryProcessDebugInformation.c)
 *     RtlpResetDriveEnvironment @ 0x18009B16C (RtlpResetDriveEnvironment.c)
 *     RtlpCheckRelativeDrive @ 0x18009B244 (RtlpCheckRelativeDrive.c)
 *     RtlpWow64ThunkEnvironmentTo64 @ 0x18009E490 (RtlpWow64ThunkEnvironmentTo64.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800A2FA0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800A39B0 (RtlQueryImageMitigationPolicy.c)
 *     RtlInitUnicodeStringEx @ 0x1800A4880 (RtlInitUnicodeStringEx.c)
 *     LdrpMapResourceFile @ 0x1800A5BB0 (LdrpMapResourceFile.c)
 *     RtlDoesFileExists_UEx @ 0x1800A5EEC (RtlDoesFileExists_UEx.c)
 *     LdrResSearchResource @ 0x1800AB1B0 (LdrResSearchResource.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x1800BBA10 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpBuildSystem32FileName @ 0x1800BE800 (LdrpBuildSystem32FileName.c)
 *     LdrpIsReparsePoint @ 0x1800C5E78 (LdrpIsReparsePoint.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1800C7AD0 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlDosPathNameToNtPathName_U_WithStatus @ 0x1800CBA00 (RtlDosPathNameToNtPathName_U_WithStatus.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1800CCE50 (RtlpGetNameFromLangInfoNode.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1800CD310 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlGetFullPathName_UEx @ 0x1800CD6E0 (RtlGetFullPathName_UEx.c)
 *     SendMessageToWERService @ 0x1800CDDCC (SendMessageToWERService.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x1800D1690 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800D2134 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     RtlQueryImageFileKeyOption @ 0x1800D3070 (RtlQueryImageFileKeyOption.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800D34B8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1800D3784 (RtlpProcessIFEOKeyFilter.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x1800D5700 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlpQueryNlsSystemCodePages @ 0x1800D594C (RtlpQueryNlsSystemCodePages.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x1800D6820 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x1800D6CCC (WerpEscalationIsWMRSendStringSet.c)
 *     WerpEscalationReadUlongFromKey @ 0x1800D6DA4 (WerpEscalationReadUlongFromKey.c)
 *     RtlIsDosDeviceName_U @ 0x1800D7480 (RtlIsDosDeviceName_U.c)
 *     RtlDosPathNameToNtPathName_U @ 0x1800D9500 (RtlDosPathNameToNtPathName_U.c)
 *     LdrpReportError @ 0x1800DA620 (LdrpReportError.c)
 *     RtlpLoadUserUIByPolicy @ 0x1800DB8B0 (RtlpLoadUserUIByPolicy.c)
 *     CompatCachepLookupCdb @ 0x1800DBFE0 (CompatCachepLookupCdb.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800E0938 (RtlpMuiRegConfigMatchesInstalled.c)
 *     LdrLoadAlternateResourceModule @ 0x1800E4F90 (LdrLoadAlternateResourceModule.c)
 *     RtlpLoadMachineUIByPolicy @ 0x1800EBF50 (RtlpLoadMachineUIByPolicy.c)
 *     RtlInitializeRXact @ 0x1800FD2D0 (RtlInitializeRXact.c)
 *     RtlApplyRXact @ 0x1800FD710 (RtlApplyRXact.c)
 *     RtlSetImageMitigationPolicy @ 0x180103380 (RtlSetImageMitigationPolicy.c)
 *     RtlWriteRegistryValue @ 0x1801069C0 (RtlWriteRegistryValue.c)
 *     RtlCreateBootStatusDataFile @ 0x18010BE60 (RtlCreateBootStatusDataFile.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x18010C1AC (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlConnectToSm @ 0x18010F800 (RtlConnectToSm.c)
 *     RtlDeleteRegistryValue @ 0x18010FAF0 (RtlDeleteRegistryValue.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1801143AC (LdrpCnvrtShortToLongFileName.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x18012487C (RtlpMuiRegAddAlternateCodePage.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x180125768 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     wcscat @ 0x18012D920 (wcscat.c)
 *     wcscpy @ 0x18012D960 (wcscpy.c)
 *     wcsncat @ 0x18012DC10 (wcsncat.c)
 *     wcstombs @ 0x18012E5A0 (wcstombs.c)
 *     swscanf_s @ 0x180134220 (swscanf_s.c)
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
