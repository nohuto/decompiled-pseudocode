/*
 * XREFs of RtlpLangNameInMultiSzString @ 0x140B30150
 * Callers:
 *     RtlpIsALicensedLIPLanguage @ 0x14077E944 (RtlpIsALicensedLIPLanguage.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x1408AFCF4 (_RtlpMuiRegAddBaseLanguage.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x1408B09C0 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 *     RtlpIsALicensedRegularLanguage @ 0x140B300BC (RtlpIsALicensedRegularLanguage.c)
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
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
