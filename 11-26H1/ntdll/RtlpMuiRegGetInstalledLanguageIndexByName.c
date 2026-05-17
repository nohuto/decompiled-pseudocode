/*
 * XREFs of RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18000AC20
 * Callers:
 *     RtlpGetAlternateCodePage @ 0x18000138C (RtlpGetAlternateCodePage.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180002AF0 (RtlGetSystemPreferredUILanguages.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x180009A70 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlGetUILanguageInfo @ 0x18000A1D0 (RtlGetUILanguageInfo.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x18000A810 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlGetUserPreferredUILanguages @ 0x180038AA0 (RtlGetUserPreferredUILanguages.c)
 *     RtlpAutoCompleteLanguageFallback @ 0x180141F20 (RtlpAutoCompleteLanguageFallback.c)
 *     RtlpCleanupRegistryKeys @ 0x180142090 (RtlpCleanupRegistryKeys.c)
 *     RtlpGetInstalledLanguageType @ 0x180142A60 (RtlpGetInstalledLanguageType.c)
 *     RtlpSetPreferredUILanguages @ 0x1801431B0 (RtlpSetPreferredUILanguages.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x18014EF30 (_RtlpRemovePendingDeleteLanguages.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1800061D0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     _wcsicmp @ 0x180128F40 (_wcsicmp.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 */

__int64 __fastcall RtlpMuiRegGetInstalledLanguageIndexByName(__int64 a1, const wchar_t *a2, char a3, _WORD *a4)
{
  char v4; // r12
  _WORD *v5; // r10
  char v6; // r9
  unsigned int InstalledLanguageIndexByLangId; // r15d
  __int64 v10; // r13
  __int64 v11; // rbx
  int v12; // edi
  __int64 i; // rbp
  const wchar_t *v14; // rcx
  int j; // edx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int16 v18; // r9
  size_t v20; // rax
  unsigned __int16 v21[2]; // [rsp+20h] [rbp-48h] BYREF
  int v22; // [rsp+24h] [rbp-44h]
  const wchar_t *v23; // [rsp+28h] [rbp-40h]
  int v24; // [rsp+70h] [rbp+8h] BYREF
  char v25; // [rsp+80h] [rbp+18h]
  _WORD *v26; // [rsp+88h] [rbp+20h]

  v26 = a4;
  v25 = a3;
  v4 = 0;
  v24 = 0;
  v5 = a4;
  v6 = a3;
  InstalledLanguageIndexByLangId = -1073741772;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v10 = *(_QWORD *)(a1 + 24);
  if ( *a2 )
  {
    v11 = *(_QWORD *)(a1 + 32);
    if ( v11 )
    {
      v12 = 0;
      for ( i = 0LL; ; i += 2LL )
      {
        if ( v12 >= *(unsigned __int16 *)(v11 + 6) )
        {
          v6 = v25;
          v5 = v26;
          goto LABEL_19;
        }
        v14 = (const wchar_t *)(*(_QWORD *)(v11 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v11 + 16) + i));
        if ( v14 == a2 || !wcsicmp(v14, a2) )
          break;
        ++v12;
      }
      v6 = v25;
      v5 = v26;
      if ( v12 < 0 )
        goto LABEL_19;
    }
    else
    {
LABEL_19:
      LOWORD(v12) = -1;
    }
    if ( (v12 & 0x8000u) == 0 )
    {
      for ( j = 0; j < *(unsigned __int16 *)(v10 + 6); ++j )
      {
        v16 = 28LL * j;
        v17 = *(_QWORD *)(v10 + 16);
        if ( *(_WORD *)(v16 + v17 + 6) == (_WORD)v12 )
        {
          v18 = *(_WORD *)(v16 + v17);
          if ( (v18 & 0x1020) == 0x20 )
          {
            if ( v5 )
            {
              *v5 = j;
              return 0LL;
            }
          }
          else if ( (v18 & 0x1000) != 0 )
          {
            v4 = 1;
          }
        }
      }
      v6 = v25;
    }
  }
  if ( v6 )
  {
    v22 = 0;
    v23 = a2;
    v20 = 2 * wcslen(a2);
    if ( v20 >= 0xFFFE )
      LOWORD(v20) = -4;
    v21[0] = v20;
    v21[1] = v20 + 2;
    if ( RtlCultureNameToLCID(v21, &v24) && v24 != 4096 )
      InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, v24, 0, v26);
  }
  if ( v4 && InstalledLanguageIndexByLangId == -1073741772 )
    return (unsigned int)-1073741637;
  return InstalledLanguageIndexByLangId;
}
