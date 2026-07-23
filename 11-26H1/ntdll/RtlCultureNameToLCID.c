/*
 * XREFs of RtlCultureNameToLCID @ 0x18004FE40
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x180019070 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x180019960 (LdrpSearchResourceSection_U.c)
 *     RtlGetFileMUIPath @ 0x1800206B0 (RtlGetFileMUIPath.c)
 *     RtlpMUIEnumerateFolder @ 0x180022388 (RtlpMUIEnumerateFolder.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180024430 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x180026C60 (RtlpMuiRegTryToAppendLangId.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18004CB84 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x18004D6C0 (RtlpMuiRegGetLanguageSpec.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x18004E02C (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlGetNeutralFallback @ 0x18004F8A0 (RtlGetNeutralFallback.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180050A20 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x180051150 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180052AB0 (RtlGetThreadPreferredUILanguages.c)
 *     LdrResFallbackLangList @ 0x180054C10 (LdrResFallbackLangList.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800551A0 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     GetLCIDFromLangListNode @ 0x1800555D0 (GetLCIDFromLangListNode.c)
 *     RtlGetUILanguageInfo @ 0x180055900 (RtlGetUILanguageInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180056350 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800586F4 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpPopulateLanguageConfigList @ 0x180058A90 (RtlpPopulateLanguageConfigList.c)
 *     LdrResSearchResource @ 0x1800AA2E0 (LdrResSearchResource.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800DAF20 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800DE1D8 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800DE4E4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     LdrLoadAlternateResourceModule @ 0x1800E2E40 (LdrLoadAlternateResourceModule.c)
 *     RtlpGetLCIDFromLangInfoNode @ 0x1800FD440 (RtlpGetLCIDFromLangInfoNode.c)
 *     LdrResRelease @ 0x180102480 (LdrResRelease.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x18010E690 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     _RtlMuiRegAddLIPParent @ 0x180112F1C (_RtlMuiRegAddLIPParent.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x180126050 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpSetInstallLanguage @ 0x180142A80 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1801430B0 (RtlpSetPreferredUILanguages.c)
 *     RtlpRefreshCachedUILanguage @ 0x18014DA10 (RtlpRefreshCachedUILanguage.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x18014DEA0 (_RtlpMuiRegInitAnyLanguage.c)
 * Callees:
 *     RtlpIsCustomLocale @ 0x18004C740 (RtlpIsCustomLocale.c)
 *     RtlpMatchUserLanguage @ 0x18004C874 (RtlpMatchUserLanguage.c)
 *     RtlpNlsGetNameIndex @ 0x180050060 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x180050148 (RtlpLoadNlsData.c)
 *     RtlpMatchUILanguage @ 0x180112884 (RtlpMatchUILanguage.c)
 *     __report_rangecheckfailure @ 0x1801268D0 (__report_rangecheckfailure.c)
 *     _wcsicmp @ 0x180128CB0 (_wcsicmp.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

BOOLEAN __cdecl RtlCultureNameToLCID(PUNICODE_STRING String, PLCID Lcid)
{
  BOOLEAN v2; // r9
  size_t Length; // r8
  unsigned __int16 v5; // bp
  wchar_t *Buffer; // rdx
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  wchar_t *v9; // rcx
  unsigned __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rbx
  int v13; // edi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v17; // rbx
  int NameIndex; // eax
  bool matched; // al
  wchar_t String2[88]; // [rsp+20h] [rbp-E8h] BYREF

  v2 = 0;
  if ( !String )
    return v2;
  if ( !Lcid )
    return v2;
  Length = String->Length;
  v5 = 0;
  if ( !(_WORD)Length )
    return v2;
  Buffer = String->Buffer;
  if ( !Buffer || (unsigned int)(Length + 2) > 0x55 )
    return v2;
  v7 = String->Length;
  memmove(String2, Buffer, Length);
  v10 = v7 >> 1;
  if ( v10 >= 85 )
    _report_rangecheckfailure();
  String2[v10] = 0;
  if ( g_RegInfo )
  {
    v11 = *((_QWORD *)g_RegInfo + 3);
    if ( v11 )
    {
      if ( *(_QWORD *)(v11 + 16) && g_RegInfo && String2[0] )
      {
        v12 = *((_QWORD *)g_RegInfo + 4);
        if ( v12 )
        {
          v13 = 0;
          v14 = 0LL;
          while ( v13 < *(unsigned __int16 *)(v12 + 6) )
          {
            v9 = (wchar_t *)(*(_QWORD *)(v12 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v12 + 16) + v14));
            if ( v9 == String2 || !wcsicmp(v9, String2) )
            {
              if ( v13 < 0 )
                break;
              goto LABEL_19;
            }
            ++v13;
            v14 += 2LL;
          }
        }
        LOWORD(v13) = -1;
LABEL_19:
        if ( (v13 & 0x8000u) == 0 )
        {
          while ( v5 < *(_WORD *)(v11 + 6) )
          {
            v8 = 28LL * v5;
            v15 = *(_QWORD *)(v11 + 16);
            if ( *(_WORD *)(v8 + v15 + 6) == (_WORD)v13 )
            {
              *Lcid = *(unsigned __int16 *)(v8 + v15 + 4);
              return 1;
            }
            ++v5;
          }
        }
      }
    }
  }
  v17 = pTblPtrs;
  if ( !pTblPtrs )
  {
    if ( !(unsigned __int8)RtlpLoadNlsData(v9, v8) )
      return 0;
    v17 = pTblPtrs;
  }
  NameIndex = RtlpNlsGetNameIndex(String2);
  if ( NameIndex < 0 )
  {
    if ( RtlpIsCustomLocale(String2) )
    {
      if ( !(unsigned __int8)RtlpMatchUILanguage(String2) )
      {
        matched = RtlpMatchUserLanguage(String2);
        v2 = 1;
        if ( matched )
          *Lcid = 3072;
        else
          *Lcid = 4096;
        return v2;
      }
      *Lcid = 5120;
      return 1;
    }
    return 0;
  }
  *Lcid = *(_DWORD *)(*(_QWORD *)(v17 + 24) + 8LL * NameIndex + 4) & 0x7FFFFFFF;
  return 1;
}
