/*
 * XREFs of RtlpIsALicensedRegularLanguage @ 0x180056240
 * Callers:
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800551A0 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x180055F40 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpMuiRegAddLanguageByName @ 0x18014D174 (RtlpMuiRegAddLanguageByName.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18014E6A8 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpLangNameInMultiSzString @ 0x1800565F0 (RtlpLangNameInMultiSzString.c)
 *     _wcsicmp @ 0x180128CB0 (_wcsicmp.c)
 */

__int64 __fastcall RtlpIsALicensedRegularLanguage(_QWORD *a1, wchar_t *a2)
{
  const wchar_t *v4; // rbx
  wchar_t *v6; // rcx
  wchar_t *v7; // rcx
  unsigned int v8; // edx
  char v9; // al
  unsigned int v10; // ecx
  __int64 v11; // rax

  if ( !a1 )
    return 3221225524LL;
  v4 = (const wchar_t *)a1[17];
  if ( v4 )
  {
    if ( a2 )
    {
      while ( v4 && *v4 )
      {
        if ( !wcsicmp(v4, a2) )
          goto LABEL_5;
        v11 = -1LL;
        while ( v4[++v11] != 0 )
          ;
        v4 += v11 + 1;
      }
    }
    return 3221225524LL;
  }
  else
  {
LABEL_5:
    v6 = (wchar_t *)a1[16];
    if ( v6 )
    {
      v9 = RtlpLangNameInMultiSzString(v6, a2);
      v10 = 0;
      if ( !v9 )
        return (unsigned int)-1073741772;
      return v10;
    }
    else
    {
      v7 = (wchar_t *)a1[19];
      v8 = 0;
      if ( v7 )
        return (unsigned __int8)RtlpLangNameInMultiSzString(v7, a2) != 0 ? 0xC0000034 : 0;
      return v8;
    }
  }
}
