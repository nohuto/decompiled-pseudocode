/*
 * XREFs of SmpInvokeAutoChk @ 0x1400158B8
 * Callers:
 *     SmscpExecuteInitialCommand @ 0x140002CA0 (SmscpExecuteInitialCommand.c)
 *     SmpExecuteCommand @ 0x1400030A0 (SmpExecuteCommand.c)
 *     SmpStartCsr @ 0x1400032A0 (SmpStartCsr.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140004B90 (RtlStringCbPrintfW.c)
 *     SmpExecuteImage @ 0x140005010 (SmpExecuteImage.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

__int64 __fastcall SmpInvokeAutoChk(PCUNICODE_STRING Source, __int64 a2, const UNICODE_STRING *a3, int a4)
{
  __int64 v8; // r9
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t pszDest[512]; // [rsp+50h] [rbp-B0h] BYREF

  DestinationString = 0LL;
  if ( (a4 & 0x10) != 0 )
  {
    if ( RtlStringCbPrintfW(pszDest, 0x400uLL, L"%wZ program not found - skipping AUTOCHECK\n", Source) >= 0 )
    {
      RtlInitUnicodeStringEx(&DestinationString, pszDest);
      NtDisplayString(&DestinationString);
    }
  }
  else
  {
    DestinationString.MaximumLength = 1024;
    DestinationString.Buffer = pszDest;
    if ( RtlAppendUnicodeStringToString(&DestinationString, Source) >= 0
      && RtlAppendUnicodeToString(&DestinationString, L" ") >= 0
      && RtlAppendUnicodeStringToString(&DestinationString, a3) >= 0 )
    {
      SmpExecuteImage((__int64)Source, a2, (__int64)&DestinationString, v8, 0LL, a4 & 0xFFFEFFFB | 0x10000, 0LL);
    }
  }
  return 0LL;
}
