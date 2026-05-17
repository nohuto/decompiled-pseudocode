/*
 * XREFs of RtlInitUnicodeString @ 0x180001AA0
 * Callers:
 *     RtlpGetUserLocaleName @ 0x180001200 (RtlpGetUserLocaleName.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x180001794 (RtlpConsoleFallbackNameFromLocaleName.c)
 *     GetNameFromLangListNode @ 0x1800027E0 (GetNameFromLangListNode.c)
 *     LdrpMergeLangFallbackLists @ 0x1800038D0 (LdrpMergeLangFallbackLists.c)
 *     RtlGetNeutralFallback @ 0x180004170 (RtlGetNeutralFallback.c)
 *     RtlpAddNeutralsToMergedList @ 0x180004B30 (RtlpAddNeutralsToMergedList.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x18000A810 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpWow64SelectSystem32PathInternal @ 0x1800364B8 (RtlpWow64SelectSystem32PathInternal.c)
 *     LdrpLoadShimEngine @ 0x1800C6518 (LdrpLoadShimEngine.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800D1F10 (LdrpIsVerifierActivationFilterMatched.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800DDFB0 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800E0C44 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlpGetLCIDFromLangInfoNode @ 0x1800FDCF0 (RtlpGetLCIDFromLangInfoNode.c)
 *     LdrResRelease @ 0x180103100 (LdrResRelease.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x18010C1AC (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x18010EB40 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x180112290 (LdrpInitializeApplicationVerifierPackage.c)
 *     RtlpMatchUILanguage @ 0x180112DD4 (RtlpMatchUILanguage.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180112ED0 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     LdrpMUIEtwOutput @ 0x180113278 (LdrpMUIEtwOutput.c)
 *     _RtlMuiRegAddLIPParent @ 0x18011346C (_RtlMuiRegAddLIPParent.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x180113900 (RtlpOpenAndMapCustomCultureFile.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1801143AC (LdrpCnvrtShortToLongFileName.c)
 *     AVrfpParseVerifierDllsString @ 0x18011535C (AVrfpParseVerifierDllsString.c)
 *     AvrfMiniLoadDll @ 0x180116838 (AvrfMiniLoadDll.c)
 *     LdrpInitializeExecutionOptions @ 0x180118558 (LdrpInitializeExecutionOptions.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x180123C1C (RtlpSetTimeZoneInformationWorker.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x18012487C (RtlpMuiRegAddAlternateCodePage.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x180125768 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1801262E0 (RtlpConvertCultureNamesToLCIDs.c)
 *     WerpEscalationIsDisabled @ 0x18013AEEC (WerpEscalationIsDisabled.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1801424F0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpSetInstallLanguage @ 0x180142B80 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x18014303C (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1801431B0 (RtlpSetPreferredUILanguages.c)
 *     RtlOsDeploymentState @ 0x180148EE0 (RtlOsDeploymentState.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1801493F0 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpGetWindowsPolicy @ 0x18014D1B4 (RtlpGetWindowsPolicy.c)
 *     RtlpRefreshCachedUILanguage @ 0x18014DB60 (RtlpRefreshCachedUILanguage.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x18014DCB4 (_RtlpMuiRegAddBaseLanguage.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x18014DFF0 (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x18014E0C8 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x18014E314 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x18014EF30 (_RtlpRemovePendingDeleteLanguages.c)
 * Callees:
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 */

void __stdcall RtlInitUnicodeString(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  size_t v3; // rax

  *(_QWORD *)&DestinationString->Length = 0LL;
  DestinationString->Buffer = (wchar_t *)SourceString;
  if ( SourceString )
  {
    v3 = 2 * wcslen(SourceString);
    if ( v3 >= 0xFFFE )
      LOWORD(v3) = -4;
    DestinationString->Length = v3;
    DestinationString->MaximumLength = v3 + 2;
  }
}
