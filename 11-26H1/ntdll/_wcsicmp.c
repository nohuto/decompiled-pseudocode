/*
 * XREFs of _wcsicmp @ 0x180128F40
 * Callers:
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x180001794 (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlpMuiRegGetOrAddString @ 0x180002080 (RtlpMuiRegGetOrAddString.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x1800022C0 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlGetNeutralFallback @ 0x180004170 (RtlGetNeutralFallback.c)
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     RtlpAddNeutralsToMergedList @ 0x180004B30 (RtlpAddNeutralsToMergedList.c)
 *     LdrpLangFallbackListAppendNode @ 0x180004E90 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x1800052F0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1800061D0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlLookupAtomInAtomTable @ 0x180006500 (RtlLookupAtomInAtomTable.c)
 *     RtlpIsALicensedRegularLanguage @ 0x18000AB10 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18000AC20 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpLangNameInMultiSzString @ 0x18000AEC0 (RtlpLangNameInMultiSzString.c)
 *     LdrRscIsTypeExist @ 0x18002C2A0 (LdrRscIsTypeExist.c)
 *     LdrpSearchResourceSection_U @ 0x18002E860 (LdrpSearchResourceSection_U.c)
 *     LdrRemoveLoadAsDataTable @ 0x180032E70 (LdrRemoveLoadAsDataTable.c)
 *     RtlGetFileMUIPath @ 0x180035550 (RtlGetFileMUIPath.c)
 *     RtlAddAtomToAtomTableEx @ 0x1800375D0 (RtlAddAtomToAtomTableEx.c)
 *     RtlpFreeAllAtom @ 0x180037E24 (RtlpFreeAllAtom.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x18003AA20 (RtlpLangNameInMultiSzString_Size.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x1800A6EEC (LdrpVerifyAlternateResourceModuleEx.c)
 *     LdrpResSearchResourceMappedFile @ 0x1800A80C0 (LdrpResSearchResourceMappedFile.c)
 *     PsspWalkHandleTable @ 0x1800B6540 (PsspWalkHandleTable.c)
 *     AVrfpDllLoadNotificationInternal @ 0x1800C6C30 (AVrfpDllLoadNotificationInternal.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800E0938 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800E0C44 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     AVrfpParseVerifierDllsString @ 0x18011535C (AVrfpParseVerifierDllsString.c)
 *     LdrpUnloadNode @ 0x18011BEB0 (LdrpUnloadNode.c)
 *     AVrfpVerifierStopInitialize @ 0x1801201E8 (AVrfpVerifierStopInitialize.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x18012487C (RtlpMuiRegAddAlternateCodePage.c)
 *     AVrfpFindClosestThunkDuplicate @ 0x1801382D4 (AVrfpFindClosestThunkDuplicate.c)
 *     RtlpCleanupRegistryKeys @ 0x180142090 (RtlpCleanupRegistryKeys.c)
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
