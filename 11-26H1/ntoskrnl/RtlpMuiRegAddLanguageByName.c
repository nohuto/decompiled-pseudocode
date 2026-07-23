/*
 * XREFs of RtlpMuiRegAddLanguageByName @ 0x140B2FCBC
 * Callers:
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x140724EE4 (_RtlpMuiRegLoadInstalledFromKey.c)
 * Callees:
 *     RtlpMuiRegAddAlternateCodePage @ 0x1404F1678 (RtlpMuiRegAddAlternateCodePage.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x140779488 (RtlpMuiRegGetOrAddLangInfo.c)
 *     RtlpIsALicensedLIPLanguage @ 0x14077E944 (RtlpIsALicensedLIPLanguage.c)
 *     _RtlpMuiRegInitPartialLanguage @ 0x1408B0058 (_RtlpMuiRegInitPartialLanguage.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x140B2FD94 (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x140B2FE70 (_RtlpMuiRegInitLIPLanguage.c)
 *     RtlpIsALicensedRegularLanguage @ 0x140B300BC (RtlpIsALicensedRegularLanguage.c)
 */

__int64 __fastcall RtlpMuiRegAddLanguageByName(__int64 a1, void *a2, wchar_t *a3, __int64 a4, int a5, __int16 *a6)
{
  __int64 result; // rax
  char v10; // al
  __int128 v11; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+30h] [rbp-20h]
  int v13; // [rsp+38h] [rbp-18h]

  v12 = 0LL;
  v13 = 0;
  v11 = 0LL;
  result = RtlpMuiRegInitAnyLanguage(a1, &v11, a3, a4);
  if ( (int)result < 0 )
    return result;
  v10 = v11;
  if ( (v11 & 4) != 0 )
  {
    result = RtlpMuiRegInitLIPLanguage(a1, a2, &v11);
LABEL_4:
    if ( (int)result < 0 )
      return result;
    v10 = v11;
    goto LABEL_6;
  }
  if ( (v11 & 2) != 0 )
  {
    result = RtlpMuiRegInitPartialLanguage(a1, (__int64)a2, &v11);
    goto LABEL_4;
  }
LABEL_6:
  if ( (v10 & 4) != 0 )
    result = RtlpIsALicensedLIPLanguage(a1, a3);
  else
    result = RtlpIsALicensedRegularLanguage(a1, a3);
  if ( (int)result >= 0 )
  {
    LOWORD(v11) = v11 | 0x820;
    RtlpMuiRegAddAlternateCodePage((__int64)&v11, a2);
    return RtlpMuiRegGetOrAddLangInfo((__int64 *)(a1 + 24), (__int64)&v11, a6);
  }
  return result;
}
