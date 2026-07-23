/*
 * XREFs of _wcsicmp @ 0x180128CB0
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x1800012A0 (RtlAddAtomToAtomTableEx.c)
 *     RtlpFreeAllAtom @ 0x180001AF4 (RtlpFreeAllAtom.c)
 *     LdrRscIsTypeExist @ 0x1800173A0 (LdrRscIsTypeExist.c)
 *     LdrpSearchResourceSection_U @ 0x180019960 (LdrpSearchResourceSection_U.c)
 *     LdrRemoveLoadAsDataTable @ 0x18001DFD0 (LdrRemoveLoadAsDataTable.c)
 *     RtlGetFileMUIPath @ 0x1800206B0 (RtlGetFileMUIPath.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x180024F90 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x18004CECC (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlpMuiRegGetOrAddString @ 0x18004D7B0 (RtlpMuiRegGetOrAddString.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x18004D9F0 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlGetNeutralFallback @ 0x18004F8A0 (RtlGetNeutralFallback.c)
 *     RtlCultureNameToLCID @ 0x18004FE40 (RtlCultureNameToLCID.c)
 *     RtlpAddNeutralsToMergedList @ 0x180050260 (RtlpAddNeutralsToMergedList.c)
 *     LdrpLangFallbackListAppendNode @ 0x1800505C0 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180050A20 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180051900 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlLookupAtomInAtomTable @ 0x180051C30 (RtlLookupAtomInAtomTable.c)
 *     RtlpIsALicensedRegularLanguage @ 0x180056240 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180056350 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpLangNameInMultiSzString @ 0x1800565F0 (RtlpLangNameInMultiSzString.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x1800A601C (LdrpVerifyAlternateResourceModuleEx.c)
 *     LdrpResSearchResourceMappedFile @ 0x1800A71F0 (LdrpResSearchResourceMappedFile.c)
 *     PsspWalkHandleTable @ 0x1800B3A60 (PsspWalkHandleTable.c)
 *     AVrfpDllLoadNotificationInternal @ 0x1800C43F0 (AVrfpDllLoadNotificationInternal.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800DE1D8 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800DE4E4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     AVrfpParseVerifierDllsString @ 0x180114B3C (AVrfpParseVerifierDllsString.c)
 *     LdrpUnloadNode @ 0x18011BC60 (LdrpUnloadNode.c)
 *     AVrfpVerifierStopInitialize @ 0x18011FF98 (AVrfpVerifierStopInitialize.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1801245EC (RtlpMuiRegAddAlternateCodePage.c)
 *     AVrfpFindClosestThunkDuplicate @ 0x180138044 (AVrfpFindClosestThunkDuplicate.c)
 *     RtlpCleanupRegistryKeys @ 0x180141F90 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsicmp(const wchar_t *String1, const wchar_t *String2)
{
  const wchar_t *v2; // r8
  signed __int64 v3; // r9
  unsigned __int16 v4; // dx
  wchar_t v5; // cx

  v2 = String2;
  v3 = (char *)String1 - (char *)String2;
  do
  {
    v4 = *(const wchar_t *)((char *)v2 + v3) + 32;
    if ( (unsigned __int16)(*(const wchar_t *)((char *)v2 + v3) - 65) > 0x19u )
      v4 = *(const wchar_t *)((char *)v2 + v3);
    v5 = *v2 + 32;
    if ( (unsigned __int16)(*v2 - 65) > 0x19u )
      v5 = *v2;
    ++v2;
  }
  while ( v4 && v4 == v5 );
  return v4 - v5;
}
