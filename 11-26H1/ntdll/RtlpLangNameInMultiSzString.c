/*
 * XREFs of RtlpLangNameInMultiSzString @ 0x18000AEC0
 * Callers:
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x18000A810 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpIsALicensedRegularLanguage @ 0x18000AB10 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpIsALicensedLIPLanguage @ 0x18000AE4C (RtlpIsALicensedLIPLanguage.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x180125D34 (RtlpAddLanguagesToMultiSZ.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x18014DCB4 (_RtlpMuiRegAddBaseLanguage.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x18014E750 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     _wcsicmp @ 0x180128F40 (_wcsicmp.c)
 */

char __fastcall RtlpLangNameInMultiSzString(wchar_t *String1, wchar_t *String2)
{
  const wchar_t *v3; // rbx
  __int64 v5; // rax

  v3 = String1;
  if ( String1 && String2 )
  {
    while ( v3 && *v3 )
    {
      if ( !wcsicmp(v3, String2) )
        return 1;
      v5 = -1LL;
      while ( v3[++v5] != 0 )
        ;
      v3 += v5 + 1;
    }
  }
  return 0;
}
