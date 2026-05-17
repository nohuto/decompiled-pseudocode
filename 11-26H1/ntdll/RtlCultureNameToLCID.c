/*
 * XREFs of RtlCultureNameToLCID @ 0x180004710
 * Callers:
 *     RtlpLoadInstallLanguageFallback @ 0x18000144C (RtlpLoadInstallLanguageFallback.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x180001F90 (RtlpMuiRegGetLanguageSpec.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x1800028FC (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlGetNeutralFallback @ 0x180004170 (RtlGetNeutralFallback.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x1800052F0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x180005A20 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180007380 (RtlGetThreadPreferredUILanguages.c)
 *     LdrResFallbackLangList @ 0x1800094E0 (LdrResFallbackLangList.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x180009A70 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     GetLCIDFromLangListNode @ 0x180009EA0 (GetLCIDFromLangListNode.c)
 *     RtlGetUILanguageInfo @ 0x18000A1D0 (RtlGetUILanguageInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18000AC20 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x18000CFC4 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpPopulateLanguageConfigList @ 0x18000D360 (RtlpPopulateLanguageConfigList.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18002DF70 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x18002E860 (LdrpSearchResourceSection_U.c)
 *     RtlGetFileMUIPath @ 0x180035550 (RtlGetFileMUIPath.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180039EC0 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x18003C6F0 (RtlpMuiRegTryToAppendLangId.c)
 *     LdrResSearchResource @ 0x1800AB1B0 (LdrResSearchResource.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800DDFB0 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800E0938 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800E0C44 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     LdrLoadAlternateResourceModule @ 0x1800E4F90 (LdrLoadAlternateResourceModule.c)
 *     RtlpGetLCIDFromLangInfoNode @ 0x1800FDCF0 (RtlpGetLCIDFromLangInfoNode.c)
 *     RtlpMUIEnumerateFolder @ 0x18010288C (RtlpMUIEnumerateFolder.c)
 *     LdrResRelease @ 0x180103100 (LdrResRelease.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x18010EB40 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     _RtlMuiRegAddLIPParent @ 0x18011346C (_RtlMuiRegAddLIPParent.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1801262E0 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpSetInstallLanguage @ 0x180142B80 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1801431B0 (RtlpSetPreferredUILanguages.c)
 *     RtlpRefreshCachedUILanguage @ 0x18014DB60 (RtlpRefreshCachedUILanguage.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x18014DFF0 (_RtlpMuiRegInitAnyLanguage.c)
 * Callees:
 *     RtlpIsCustomLocale @ 0x180001008 (RtlpIsCustomLocale.c)
 *     RtlpMatchUserLanguage @ 0x18000113C (RtlpMatchUserLanguage.c)
 *     RtlpNlsGetNameIndex @ 0x180004930 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x180004A18 (RtlpLoadNlsData.c)
 *     RtlpMatchUILanguage @ 0x180112DD4 (RtlpMatchUILanguage.c)
 *     __report_rangecheckfailure @ 0x180126B60 (__report_rangecheckfailure.c)
 *     _wcsicmp @ 0x180128F40 (_wcsicmp.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

char __fastcall RtlCultureNameToLCID(unsigned __int16 *a1, int *a2)
{
  char v2; // r9
  size_t v4; // r8
  unsigned __int16 v5; // bp
  const void *v6; // rdx
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
  if ( !a1 )
    return v2;
  if ( !a2 )
    return v2;
  v4 = *a1;
  v5 = 0;
  if ( !(_WORD)v4 )
    return v2;
  v6 = (const void *)*((_QWORD *)a1 + 1);
  if ( !v6 || (unsigned int)(v4 + 2) > 0x55 )
    return v2;
  v7 = *a1;
  memmove(String2, v6, v4);
  v10 = v7 >> 1;
  if ( v10 >= 85 )
    _report_rangecheckfailure();
  String2[v10] = 0;
  if ( g_RegInfo )
  {
    v11 = *(_QWORD *)(g_RegInfo + 24);
    if ( v11 )
    {
      if ( *(_QWORD *)(v11 + 16) && g_RegInfo && String2[0] )
      {
        v12 = *(_QWORD *)(g_RegInfo + 32);
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
              *a2 = *(unsigned __int16 *)(v8 + v15 + 4);
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
          *a2 = 3072;
        else
          *a2 = 4096;
        return v2;
      }
      *a2 = 5120;
      return 1;
    }
    return 0;
  }
  *a2 = *(_DWORD *)(*(_QWORD *)(v17 + 24) + 8LL * NameIndex + 4) & 0x7FFFFFFF;
  return 1;
}
