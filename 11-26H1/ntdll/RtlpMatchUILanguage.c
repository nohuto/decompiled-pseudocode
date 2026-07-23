/*
 * XREFs of RtlpMatchUILanguage @ 0x180112884
 * Callers:
 *     RtlLocaleNameToLcid @ 0x18004FCE0 (RtlLocaleNameToLcid.c)
 *     RtlCultureNameToLCID @ 0x18004FE40 (RtlCultureNameToLCID.c)
 *     LdrpLangFallbackListAppendNode @ 0x1800505C0 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180050A20 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18004D1D0 (RtlInitUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x18007B0A0 (RtlCompareUnicodeStrings.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180112980 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     __report_rangecheckfailure @ 0x1801268D0 (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

bool __fastcall RtlpMatchUILanguage(PCWSTR SourceString)
{
  unsigned __int64 v2; // rax
  _UNICODE_STRING v4; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
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
  return RtlCompareUnicodeStrings(
           DestinationString.Buffer,
           (unsigned __int64)DestinationString.Length >> 1,
           v4.Buffer,
           (unsigned __int64)v4.Length >> 1,
           1u) == 0;
}
