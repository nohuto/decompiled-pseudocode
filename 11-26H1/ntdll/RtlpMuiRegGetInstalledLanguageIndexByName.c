/*
 * XREFs of RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180056350
 * Callers:
 *     RtlGetUserPreferredUILanguages @ 0x180023010 (RtlGetUserPreferredUILanguages.c)
 *     RtlpGetAlternateCodePage @ 0x18004CAC4 (RtlpGetAlternateCodePage.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18004E220 (RtlGetSystemPreferredUILanguages.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800551A0 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlGetUILanguageInfo @ 0x180055900 (RtlGetUILanguageInfo.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x180055F40 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpAutoCompleteLanguageFallback @ 0x180141E20 (RtlpAutoCompleteLanguageFallback.c)
 *     RtlpCleanupRegistryKeys @ 0x180141F90 (RtlpCleanupRegistryKeys.c)
 *     RtlpGetInstalledLanguageType @ 0x180142960 (RtlpGetInstalledLanguageType.c)
 *     RtlpSetPreferredUILanguages @ 0x1801430B0 (RtlpSetPreferredUILanguages.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x18014EDE0 (_RtlpRemovePendingDeleteLanguages.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x18004FE40 (RtlCultureNameToLCID.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180051900 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     _wcsicmp @ 0x180128CB0 (_wcsicmp.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 */

__int64 __fastcall RtlpMuiRegGetInstalledLanguageIndexByName(__int64 a1, wchar_t *a2, char a3, _WORD *a4)
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
  _UNICODE_STRING String; // [rsp+20h] [rbp-48h] BYREF
  DWORD Lcid; // [rsp+70h] [rbp+8h] BYREF
  char v23; // [rsp+80h] [rbp+18h]
  _WORD *v24; // [rsp+88h] [rbp+20h]

  v24 = a4;
  v23 = a3;
  v4 = 0;
  Lcid = 0;
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
          v6 = v23;
          v5 = v24;
          goto LABEL_19;
        }
        v14 = (const wchar_t *)(*(_QWORD *)(v11 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v11 + 16) + i));
        if ( v14 == a2 || !wcsicmp(v14, a2) )
          break;
        ++v12;
      }
      v6 = v23;
      v5 = v24;
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
      v6 = v23;
    }
  }
  if ( v6 )
  {
    *(_DWORD *)(&String.MaximumLength + 1) = 0;
    String.Buffer = a2;
    v20 = 2 * wcslen(a2);
    if ( v20 >= 0xFFFE )
      LOWORD(v20) = -4;
    String.Length = v20;
    String.MaximumLength = v20 + 2;
    if ( RtlCultureNameToLCID(&String, &Lcid) && Lcid != 4096 )
      InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, Lcid, 0, v24);
  }
  if ( v4 && InstalledLanguageIndexByLangId == -1073741772 )
    return (unsigned int)-1073741637;
  return InstalledLanguageIndexByLangId;
}
