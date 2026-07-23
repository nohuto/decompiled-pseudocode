/*
 * XREFs of RtlpMuiRegAddLanguageByName @ 0x18014D174
 * Callers:
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1801254D8 (_RtlpMuiRegLoadInstalledFromKey.c)
 * Callees:
 *     RtlpIsALicensedRegularLanguage @ 0x180056240 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpIsALicensedLIPLanguage @ 0x18005657C (RtlpIsALicensedLIPLanguage.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1801245EC (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x18014D72C (RtlpMuiRegGetOrAddLangInfo.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x18014DEA0 (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x18014DF78 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x18014E1C4 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpMuiRegAddLanguageByName(_QWORD *a1, void *a2, wchar_t *a3, __int64 a4, int a5, __int64 a6)
{
  __int64 result; // rax
  char v10; // cl
  bool v11; // sf
  __int16 v12; // ax
  __int128 v13; // [rsp+38h] [rbp-28h] BYREF
  __int64 v14; // [rsp+48h] [rbp-18h]
  int v15; // [rsp+50h] [rbp-10h]

  v14 = 0LL;
  v15 = 0;
  v13 = 0LL;
  result = RtlpMuiRegInitAnyLanguage(a1, &v13);
  if ( (int)result < 0 )
    return result;
  v10 = v13;
  if ( (v13 & 4) != 0 )
  {
    result = RtlpMuiRegInitLIPLanguage(a1, a2, &v13);
    goto LABEL_4;
  }
  if ( (v13 & 2) != 0 )
  {
    if ( !a1 || !a2 )
    {
      result = 3221225485LL;
LABEL_12:
      if ( (int)result < 0 )
        return result;
      goto LABEL_13;
    }
    v11 = (int)RtlpMuiRegPopulateBaseLanguages((int)a1) < 0;
    v12 = v13;
    if ( v11 )
    {
      v12 = v13 | 0x1000;
      LOWORD(v13) = v13 | 0x1000;
    }
    LOWORD(v13) = v12 | 0x1000;
    result = 0LL;
LABEL_4:
    v10 = v13;
    goto LABEL_12;
  }
LABEL_13:
  if ( (v10 & 4) != 0 )
    result = RtlpIsALicensedLIPLanguage((__int64)a1, a3);
  else
    result = RtlpIsALicensedRegularLanguage(a1, a3);
  if ( (int)result >= 0 )
  {
    LOWORD(v13) = v13 | 0x820;
    RtlpMuiRegAddAlternateCodePage((__int64)&v13, a2);
    return RtlpMuiRegGetOrAddLangInfo(a1 + 3, &v13, a6);
  }
  return result;
}
