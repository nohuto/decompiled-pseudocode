/*
 * XREFs of RtlpMatchUILanguage @ 0x180112DD4
 * Callers:
 *     RtlLocaleNameToLcid @ 0x1800045B0 (RtlLocaleNameToLcid.c)
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     LdrpLangFallbackListAppendNode @ 0x180004E90 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x1800052F0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180001AA0 (RtlInitUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x180083D00 (RtlCompareUnicodeStrings.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180112ED0 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     __report_rangecheckfailure @ 0x180126B60 (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

bool __fastcall RtlpMatchUILanguage(PCWSTR SourceString)
{
  unsigned __int64 v2; // rax
  UNICODE_STRING v4; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR SourceStringa[88]; // [rsp+50h] [rbp-B0h] BYREF

  *(_QWORD *)&v4.Length = 85LL;
  if ( (int)RtlpGetUserOrMachineUILanguage4NLS(1LL, SourceStringa, &v4) < 0 || *(_QWORD *)&v4.Length >= 0x55uLL )
    return 0;
  v2 = *(_QWORD *)&v4.Length;
  DestinationString = 0LL;
  v4 = 0LL;
  if ( v2 >= 85 )
    _report_rangecheckfailure();
  SourceStringa[v2] = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlInitUnicodeString(&v4, SourceStringa);
  return (unsigned int)RtlCompareUnicodeStrings(
                         DestinationString.Buffer,
                         (unsigned __int64)DestinationString.Length >> 1,
                         (_BYTE *)v4.Buffer,
                         (unsigned __int64)v4.Length >> 1,
                         1) == 0;
}
