/*
 * XREFs of RtlLCIDToCultureName @ 0x1800512D0
 * Callers:
 *     RtlGetFileMUIPath @ 0x1800206B0 (RtlGetFileMUIPath.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180024430 (LdrpConvertLangFallbackListToMultiSz.c)
 *     GetNameFromLangListNode @ 0x18004DF10 (GetNameFromLangListNode.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x18004EB30 (LdrpMergeParentBaseLanguagesToList.c)
 *     LdrpMergeLangFallbackLists @ 0x18004F000 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x18004F6F0 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlGetNeutralFallback @ 0x18004F8A0 (RtlGetNeutralFallback.c)
 *     RtlpAddNeutralsToMergedList @ 0x180050260 (RtlpAddNeutralsToMergedList.c)
 *     RtlpInitAndCallLcidToCultureName @ 0x1800505A0 (RtlpInitAndCallLcidToCultureName.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180050A20 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180051900 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180052AB0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpComputeLangListCheckSum @ 0x180054740 (RtlpComputeLangListCheckSum.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800551A0 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlGetUILanguageInfo @ 0x180055900 (RtlGetUILanguageInfo.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x180055F40 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1800CA5C0 (RtlpGetNameFromLangInfoNode.c)
 *     RtlUnicodeStringToLcid @ 0x1801140C0 (RtlUnicodeStringToLcid.c)
 *     RtlpCleanupRegistryKeys @ 0x180141F90 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1801423F0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpGetDefaultLanguageBaseOrParent @ 0x180142788 (RtlpGetDefaultLanguageBaseOrParent.c)
 *     RtlpSetInstallLanguage @ 0x180142A80 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1801430B0 (RtlpSetPreferredUILanguages.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180143C50 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpMuiRegGetInstalledLanguageInfoByIndex @ 0x18014D5FC (RtlpMuiRegGetInstalledLanguageInfoByIndex.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x18014E1C4 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x18014E600 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     RtlpGetUserLocaleName @ 0x18004C938 (RtlpGetUserLocaleName.c)
 *     RtlpLoadNlsData @ 0x180050148 (RtlpLoadNlsData.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x180051870 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180051900 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpNlsGetLcidIndex @ 0x180051BC0 (RtlpNlsGetLcidIndex.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180112980 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

BOOLEAN __cdecl RtlLCIDToCultureName(LCID Lcid, PUNICODE_STRING String)
{
  __int64 v2; // r8
  ULONG *v3; // r9
  int inited; // ebp
  BOOLEAN v5; // di
  PUNICODE_STRING v6; // rsi
  LCID v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rbx
  size_t v12; // rax
  unsigned __int16 Length; // r9
  wchar_t *Buffer; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  __int64 v17; // rbx
  wchar_t v18; // cx
  wchar_t *v19; // rcx
  int LcidIndex; // eax
  __int64 v22; // rcx
  wchar_t *v23; // rdx
  _WORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned __int64 v27; // r14
  unsigned __int16 v28; // bx
  __int16 v29; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v30; // [rsp+28h] [rbp-F0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE Src[176]; // [rsp+40h] [rbp-D8h] BYREF

  inited = 0;
  v5 = 0;
  v29 = 0;
  v6 = String;
  v7 = Lcid;
  if ( !Lcid || !String || Lcid == 4096 )
    return v5;
  v8 = (__int64)g_RegInfo;
  if ( g_RegInfo )
  {
    if ( (int)RtlpMuiRegGetInstalledLanguageIndexByLangId(g_RegInfo, (unsigned __int16)v7, 0LL, &v29) >= 0 )
    {
      v8 = 28LL * v29;
      String = (PUNICODE_STRING)*(__int16 *)(*(_QWORD *)(*((_QWORD *)g_RegInfo + 3) + 16LL) + v8 + 6);
      if ( (__int16)String > 0 )
      {
        _mm_lfence();
        DestinationString = 0LL;
        v9 = *((_QWORD *)g_RegInfo + 4);
        v10 = *(__int16 *)(*(_QWORD *)(v9 + 16) + 2LL * (_QWORD)String);
        v11 = *(_QWORD *)(v9 + 24) + 2 * v10;
        LOWORD(v12) = 0;
        if ( v11 )
        {
          v12 = 2 * wcslen((const wchar_t *)(*(_QWORD *)(v9 + 24) + 2 * v10));
          if ( v12 >= 0xFFFE )
            LOWORD(v12) = -4;
          Length = v12;
        }
        else
        {
          Length = DestinationString.Length;
        }
        if ( (unsigned __int16)v12 > v6->MaximumLength )
          return v5;
        Buffer = v6->Buffer;
        v15 = (unsigned __int64)v6->MaximumLength >> 1;
        if ( !v15 )
          return v5;
        v16 = 2147483646 - v15;
        v17 = v11 - (_QWORD)Buffer;
        do
        {
          if ( !(v16 + v15) )
            break;
          v18 = *(wchar_t *)((char *)Buffer + v17);
          if ( !v18 )
            break;
          *Buffer++ = v18;
          --v15;
        }
        while ( v15 );
        v19 = Buffer - 1;
        if ( v15 )
          v19 = Buffer;
        *v19 = 0;
        if ( !v15 )
          return v5;
        v6->Length = Length;
        return 1;
      }
    }
  }
  v30 = 85LL;
  DestinationString = 0LL;
  if ( !v6->Buffer )
    return v5;
  if ( v7 == 5120 )
  {
    if ( (int)RtlpGetUserOrMachineUILanguage4NLS(1LL, Src, &v30) < 0 )
      return v5;
    if ( (unsigned int)v30 >= 0x55 || (v27 = 2LL * (unsigned int)v30, v6->MaximumLength <= v27) )
    {
      inited = -1073741789;
    }
    else
    {
      v28 = 2 * v30;
      memmove(v6->Buffer, Src, (unsigned __int16)(2 * v30));
      v6->Buffer[v27 / 2] = 0;
      v6->Length = v28;
    }
LABEL_35:
    if ( inited < 0 )
      return v5;
    return 1;
  }
  if ( ((v7 - 1024) & 0xFFFFF7FF) == 0 )
  {
    DestinationString.Buffer = (wchar_t *)Src;
    DestinationString.MaximumLength = 170;
    if ( (int)RtlpGetUserLocaleName(&DestinationString) < 0 )
      return v5;
    v23 = DestinationString.Buffer;
    v26 = DestinationString.Length >> 1;
    goto LABEL_34;
  }
  if ( pTblPtrs || RtlpLoadNlsData(v8, (__int64)String, v2, v3) )
  {
    if ( v7 == 2048 )
      v7 = gSystemLocale;
    LcidIndex = RtlpNlsGetLcidIndex(v7);
    if ( LcidIndex >= 0 )
    {
      _mm_lfence();
      v22 = *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 16) + 8LL * LcidIndex + 6);
      v23 = (wchar_t *)(*(_QWORD *)(pTblPtrs + 32) + 2LL + 2 * v22);
      if ( v23 )
      {
        v24 = (_WORD *)(*(_QWORD *)(pTblPtrs + 32) + 2LL + 2 * v22);
        v25 = 84LL;
        while ( *v24 )
        {
          ++v24;
          if ( !--v25 )
            return v5;
        }
        v26 = 84 - v25;
LABEL_34:
        inited = RtlpInitUnicodeStringUsingBuffer(0LL, v23, v26, v6);
        goto LABEL_35;
      }
    }
  }
  return v5;
}
