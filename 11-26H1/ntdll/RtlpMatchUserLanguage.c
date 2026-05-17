/*
 * XREFs of RtlpMatchUserLanguage @ 0x18000113C
 * Callers:
 *     RtlLocaleNameToLcid @ 0x1800045B0 (RtlLocaleNameToLcid.c)
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     LdrpLangFallbackListAppendNode @ 0x180004E90 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x1800052F0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 * Callees:
 *     RtlpGetUserLocaleName @ 0x180001200 (RtlpGetUserLocaleName.c)
 *     RtlCompareUnicodeStrings @ 0x180083D00 (RtlCompareUnicodeStrings.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

bool __fastcall RtlpMatchUserLanguage(wchar_t *String)
{
  size_t v2; // rax
  char v4; // [rsp+20h] [rbp-F8h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-E8h] BYREF
  char v6; // [rsp+50h] [rbp-C8h] BYREF

  *(_QWORD *)&DestinationString.Length = 11141120LL;
  DestinationString.Buffer = (wchar_t *)&v6;
  if ( (int)RtlpGetUserLocaleName(&DestinationString) < 0 )
    return 0;
  LOWORD(v2) = 0;
  if ( String )
  {
    v2 = 2 * wcslen(String);
    if ( v2 >= 0xFFFE )
      LOWORD(v2) = -4;
  }
  v4 = 1;
  return (unsigned int)RtlCompareUnicodeStrings(
                         String,
                         (unsigned __int64)(unsigned __int16)v2 >> 1,
                         DestinationString.Buffer,
                         (unsigned __int64)DestinationString.Length >> 1,
                         v4) == 0;
}
