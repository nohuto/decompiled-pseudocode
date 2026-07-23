/*
 * XREFs of RtlInitUnicodeString @ 0x18004D1D0
 * Callers:
 *     RtlpWow64SelectSystem32PathInternal @ 0x180021618 (RtlpWow64SelectSystem32PathInternal.c)
 *     RtlpGetUserLocaleName @ 0x18004C938 (RtlpGetUserLocaleName.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x18004CECC (RtlpConsoleFallbackNameFromLocaleName.c)
 *     GetNameFromLangListNode @ 0x18004DF10 (GetNameFromLangListNode.c)
 *     LdrpMergeLangFallbackLists @ 0x18004F000 (LdrpMergeLangFallbackLists.c)
 *     RtlGetNeutralFallback @ 0x18004F8A0 (RtlGetNeutralFallback.c)
 *     RtlpAddNeutralsToMergedList @ 0x180050260 (RtlpAddNeutralsToMergedList.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x180055F40 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     LdrpLoadShimEngine @ 0x1800C3CD8 (LdrpLoadShimEngine.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800CF680 (LdrpIsVerifierActivationFilterMatched.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800DAF20 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800DE4E4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlpGetLCIDFromLangInfoNode @ 0x1800FD440 (RtlpGetLCIDFromLangInfoNode.c)
 *     LdrResRelease @ 0x180102480 (LdrResRelease.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x18010BCFC (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x18010E690 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x180111D40 (LdrpInitializeApplicationVerifierPackage.c)
 *     RtlpMatchUILanguage @ 0x180112884 (RtlpMatchUILanguage.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180112980 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     LdrpMUIEtwOutput @ 0x180112D28 (LdrpMUIEtwOutput.c)
 *     _RtlMuiRegAddLIPParent @ 0x180112F1C (_RtlMuiRegAddLIPParent.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x180113198 (RtlpOpenAndMapCustomCultureFile.c)
 *     LdrpCnvrtShortToLongFileName @ 0x180113BA8 (LdrpCnvrtShortToLongFileName.c)
 *     AVrfpParseVerifierDllsString @ 0x180114B3C (AVrfpParseVerifierDllsString.c)
 *     AvrfMiniLoadDll @ 0x180116018 (AvrfMiniLoadDll.c)
 *     LdrpInitializeExecutionOptions @ 0x180118308 (LdrpInitializeExecutionOptions.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x18012398C (RtlpSetTimeZoneInformationWorker.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1801245EC (RtlpMuiRegAddAlternateCodePage.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1801254D8 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x180126050 (RtlpConvertCultureNamesToLCIDs.c)
 *     WerpEscalationIsDisabled @ 0x18013AC5C (WerpEscalationIsDisabled.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1801423F0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpSetInstallLanguage @ 0x180142A80 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x180142F3C (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1801430B0 (RtlpSetPreferredUILanguages.c)
 *     RtlOsDeploymentState @ 0x180148D90 (RtlOsDeploymentState.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1801492A0 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpGetWindowsPolicy @ 0x18014D064 (RtlpGetWindowsPolicy.c)
 *     RtlpRefreshCachedUILanguage @ 0x18014DA10 (RtlpRefreshCachedUILanguage.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x18014DB64 (_RtlpMuiRegAddBaseLanguage.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x18014DEA0 (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x18014DF78 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x18014E1C4 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x18014EDE0 (_RtlpRemovePendingDeleteLanguages.c)
 * Callees:
 *     wcslen @ 0x18012D850 (wcslen.c)
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
