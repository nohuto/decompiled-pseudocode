/*
 * XREFs of RtlpLangNameInMultiSzString @ 0x1800565F0
 * Callers:
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x180055F40 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpIsALicensedRegularLanguage @ 0x180056240 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpIsALicensedLIPLanguage @ 0x18005657C (RtlpIsALicensedLIPLanguage.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x180125AA4 (RtlpAddLanguagesToMultiSZ.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x18014DB64 (_RtlpMuiRegAddBaseLanguage.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x18014E600 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     _wcsicmp @ 0x180128CB0 (_wcsicmp.c)
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
