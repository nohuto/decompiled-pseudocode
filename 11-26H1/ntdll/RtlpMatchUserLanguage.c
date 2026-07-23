/*
 * XREFs of RtlpMatchUserLanguage @ 0x18004C874
 * Callers:
 *     RtlLocaleNameToLcid @ 0x18004FCE0 (RtlLocaleNameToLcid.c)
 *     RtlCultureNameToLCID @ 0x18004FE40 (RtlCultureNameToLCID.c)
 *     LdrpLangFallbackListAppendNode @ 0x1800505C0 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180050A20 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 * Callees:
 *     RtlpGetUserLocaleName @ 0x18004C938 (RtlpGetUserLocaleName.c)
 *     RtlCompareUnicodeStrings @ 0x18007B0A0 (RtlCompareUnicodeStrings.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

bool __fastcall RtlpMatchUserLanguage(wchar_t *String)
{
  size_t v2; // rax
  PCWCH String2[4]; // [rsp+30h] [rbp-E8h] BYREF
  char v5; // [rsp+50h] [rbp-C8h] BYREF

  String2[0] = (PCWCH)11141120;
  String2[1] = (PCWCH)&v5;
  if ( (int)RtlpGetUserLocaleName((PUNICODE_STRING)String2) < 0 )
    return 0;
  LOWORD(v2) = 0;
  if ( String )
  {
    v2 = 2 * wcslen(String);
    if ( v2 >= 0xFFFE )
      LOWORD(v2) = -4;
  }
  return RtlCompareUnicodeStrings(
           String,
           (unsigned __int64)(unsigned __int16)v2 >> 1,
           String2[1],
           (unsigned __int64)LOWORD(String2[0]) >> 1,
           1u) == 0;
}
