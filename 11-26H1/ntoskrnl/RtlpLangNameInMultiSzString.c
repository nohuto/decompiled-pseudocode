/*
 * XREFs of RtlpLangNameInMultiSzString @ 0x140B2E0D0
 * Callers:
 *     RtlpIsALicensedLIPLanguage @ 0x14077BD04 (RtlpIsALicensedLIPLanguage.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x1408A9884 (_RtlpMuiRegAddBaseLanguage.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x1408AA550 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 *     RtlpIsALicensedRegularLanguage @ 0x140B2E03C (RtlpIsALicensedRegularLanguage.c)
 * Callees:
 *     _wcsicmp @ 0x140536570 (_wcsicmp.c)
 */

char __fastcall RtlpLangNameInMultiSzString(wchar_t *Str1, wchar_t *Str2)
{
  char v2; // bl
  const wchar_t *v4; // rdi
  __int64 v6; // rax

  v2 = 0;
  v4 = Str1;
  if ( Str1 && Str2 )
  {
    while ( v4 && *v4 )
    {
      if ( !wcsicmp(v4, Str2) )
        return 1;
      v6 = -1LL;
      do
        ++v6;
      while ( v4[v6] );
      v4 += v6 + 1;
    }
  }
  return v2;
}
