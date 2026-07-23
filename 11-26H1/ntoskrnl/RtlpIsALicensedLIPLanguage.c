/*
 * XREFs of RtlpIsALicensedLIPLanguage @ 0x14077E944
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x140B2FCBC (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     RtlpLangNameInMultiSzString @ 0x140B30150 (RtlpLangNameInMultiSzString.c)
 */

__int64 __fastcall RtlpIsALicensedLIPLanguage(__int64 a1, wchar_t *a2)
{
  __int64 result; // rax
  wchar_t *v5; // rcx
  wchar_t *v6; // rcx

  if ( !a1 )
    return 3221225485LL;
  v5 = *(wchar_t **)(a1 + 136);
  if ( v5 && (unsigned __int8)RtlpLangNameInMultiSzString(v5, a2) )
    return 3221225524LL;
  v6 = *(wchar_t **)(a1 + 152);
  result = 0LL;
  if ( v6 )
    return (unsigned __int8)RtlpLangNameInMultiSzString(v6, a2) != 0 ? 0xC0000034 : 0;
  return result;
}
