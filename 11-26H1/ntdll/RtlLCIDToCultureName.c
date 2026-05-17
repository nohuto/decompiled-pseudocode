/*
 * XREFs of RtlLCIDToCultureName @ 0x180005BA0
 * Callers:
 *     GetNameFromLangListNode @ 0x1800027E0 (GetNameFromLangListNode.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x180003400 (LdrpMergeParentBaseLanguagesToList.c)
 *     LdrpMergeLangFallbackLists @ 0x1800038D0 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180003FC0 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlGetNeutralFallback @ 0x180004170 (RtlGetNeutralFallback.c)
 *     RtlpAddNeutralsToMergedList @ 0x180004B30 (RtlpAddNeutralsToMergedList.c)
 *     RtlpInitAndCallLcidToCultureName @ 0x180004E70 (RtlpInitAndCallLcidToCultureName.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x1800052F0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1800061D0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180007380 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpComputeLangListCheckSum @ 0x180009010 (RtlpComputeLangListCheckSum.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x180009A70 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlGetUILanguageInfo @ 0x18000A1D0 (RtlGetUILanguageInfo.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x18000A810 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlGetFileMUIPath @ 0x180035550 (RtlGetFileMUIPath.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180039EC0 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1800CCE50 (RtlpGetNameFromLangInfoNode.c)
 *     RtlUnicodeStringToLcid @ 0x1801148C4 (RtlUnicodeStringToLcid.c)
 *     RtlpCleanupRegistryKeys @ 0x180142090 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1801424F0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpGetDefaultLanguageBaseOrParent @ 0x180142888 (RtlpGetDefaultLanguageBaseOrParent.c)
 *     RtlpSetInstallLanguage @ 0x180142B80 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1801431B0 (RtlpSetPreferredUILanguages.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180143D50 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpMuiRegGetInstalledLanguageInfoByIndex @ 0x18014D74C (RtlpMuiRegGetInstalledLanguageInfoByIndex.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x18014E314 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x18014E750 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     RtlpGetUserLocaleName @ 0x180001200 (RtlpGetUserLocaleName.c)
 *     RtlpLoadNlsData @ 0x180004A18 (RtlpLoadNlsData.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x180006140 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1800061D0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpNlsGetLcidIndex @ 0x180006490 (RtlpNlsGetLcidIndex.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180112ED0 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlLCIDToCultureName(unsigned int a1, __int64 a2)
{
  int inited; // ebp
  unsigned __int8 v3; // di
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rbx
  size_t v10; // rax
  unsigned __int16 Length; // r9
  _WORD *v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  __int64 v15; // rbx
  __int16 v16; // cx
  _WORD *v17; // rcx
  int LcidIndex; // eax
  __int64 v20; // rcx
  wchar_t *Buffer; // rdx
  _WORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int64 v25; // r14
  __int16 v26; // bx
  __int16 v27; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v28; // [rsp+28h] [rbp-F0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE Src[176]; // [rsp+40h] [rbp-D8h] BYREF

  inited = 0;
  v3 = 0;
  v27 = 0;
  v5 = a1;
  if ( !a1 || !a2 || a1 == 4096 )
    return v3;
  if ( g_RegInfo )
  {
    if ( (int)RtlpMuiRegGetInstalledLanguageIndexByLangId(g_RegInfo, (unsigned __int16)a1, 0LL, &v27) >= 0 )
    {
      v6 = *(__int16 *)(*(_QWORD *)(*(_QWORD *)(g_RegInfo + 24) + 16LL) + 28LL * v27 + 6);
      if ( (__int16)v6 > 0 )
      {
        _mm_lfence();
        DestinationString = 0LL;
        v7 = *(_QWORD *)(g_RegInfo + 32);
        v8 = *(__int16 *)(*(_QWORD *)(v7 + 16) + 2 * v6);
        v9 = *(_QWORD *)(v7 + 24) + 2 * v8;
        LOWORD(v10) = 0;
        if ( v9 )
        {
          v10 = 2 * wcslen((const wchar_t *)(*(_QWORD *)(v7 + 24) + 2 * v8));
          if ( v10 >= 0xFFFE )
            LOWORD(v10) = -4;
          Length = v10;
        }
        else
        {
          Length = DestinationString.Length;
        }
        if ( (unsigned __int16)v10 > *(_WORD *)(a2 + 2) )
          return v3;
        v12 = *(_WORD **)(a2 + 8);
        v13 = (unsigned __int64)*(unsigned __int16 *)(a2 + 2) >> 1;
        if ( !v13 )
          return v3;
        v14 = 2147483646 - v13;
        v15 = v9 - (_QWORD)v12;
        do
        {
          if ( !(v14 + v13) )
            break;
          v16 = *(_WORD *)((char *)v12 + v15);
          if ( !v16 )
            break;
          *v12++ = v16;
          --v13;
        }
        while ( v13 );
        v17 = v12 - 1;
        if ( v13 )
          v17 = v12;
        *v17 = 0;
        if ( !v13 )
          return v3;
        *(_WORD *)a2 = Length;
        return 1;
      }
    }
  }
  v28 = 85LL;
  DestinationString = 0LL;
  if ( !*(_QWORD *)(a2 + 8) )
    return v3;
  if ( v5 == 5120 )
  {
    if ( (int)RtlpGetUserOrMachineUILanguage4NLS(1LL, Src, &v28) < 0 )
      return v3;
    if ( (unsigned int)v28 >= 0x55 || (v25 = 2LL * (unsigned int)v28, *(unsigned __int16 *)(a2 + 2) <= v25) )
    {
      inited = -1073741789;
    }
    else
    {
      v26 = 2 * v28;
      memmove(*(void **)(a2 + 8), Src, (unsigned __int16)(2 * v28));
      *(_WORD *)(v25 + *(_QWORD *)(a2 + 8)) = 0;
      *(_WORD *)a2 = v26;
    }
LABEL_35:
    if ( inited < 0 )
      return v3;
    return 1;
  }
  if ( ((v5 - 1024) & 0xFFFFF7FF) == 0 )
  {
    DestinationString.Buffer = (wchar_t *)Src;
    DestinationString.MaximumLength = 170;
    if ( (int)RtlpGetUserLocaleName(&DestinationString) < 0 )
      return v3;
    Buffer = DestinationString.Buffer;
    v24 = DestinationString.Length >> 1;
    goto LABEL_34;
  }
  if ( pTblPtrs || RtlpLoadNlsData() )
  {
    if ( v5 == 2048 )
      v5 = gSystemLocale;
    LcidIndex = RtlpNlsGetLcidIndex(v5);
    if ( LcidIndex >= 0 )
    {
      _mm_lfence();
      v20 = *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 16) + 8LL * LcidIndex + 6);
      Buffer = (wchar_t *)(*(_QWORD *)(pTblPtrs + 32) + 2LL + 2 * v20);
      if ( Buffer )
      {
        v22 = (_WORD *)(*(_QWORD *)(pTblPtrs + 32) + 2LL + 2 * v20);
        v23 = 84LL;
        while ( *v22 )
        {
          ++v22;
          if ( !--v23 )
            return v3;
        }
        v24 = 84 - v23;
LABEL_34:
        inited = RtlpInitUnicodeStringUsingBuffer(0LL, Buffer, v24, a2);
        goto LABEL_35;
      }
    }
  }
  return v3;
}
