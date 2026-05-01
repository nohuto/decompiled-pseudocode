/*
 * XREFs of ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x18001FE34
 * Callers:
 *     ??$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x1802414B4 (--$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z.c)
 *     ??$ReportFailure_HrMsg@$02@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x1802973B4 (--$ReportFailure_HrMsg@$02@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 *     ??$ReportFailure_HrMsg@$00@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x18031CF24 (--$ReportFailure_HrMsg@$00@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 *     ?ReportTraceLoggingMessage@TraceLoggingProvider@wil@@IEAAXPEBDPEAD@Z @ 0x1803249B4 (-ReportTraceLoggingMessage@TraceLoggingProvider@wil@@IEAAXPEBDPEAD@Z.c)
 *     ??$ReportFailure_CaughtExceptionMsg@$01@details@wil@@YAJPEAXIPEBD1101PEAD@Z @ 0x18033D1CC (--$ReportFailure_CaughtExceptionMsg@$01@details@wil@@YAJPEAXIPEBD1101PEAD@Z.c)
 *     ??$ReportFailure_HrMsg@$0A@@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x180353E8C (--$ReportFailure_HrMsg@$0A@@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18001FEDC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _vsnwprintf @ 0x1802D3068 (_vsnwprintf.c)
 *     _alloca_probe @ 0x1806A4AA0 (_alloca_probe.c)
 */

void __fastcall wil::details::PrintLoggingMessage(wil::details *this, unsigned __int16 *a2, __int64 a3, va_list a4)
{
  wchar_t Format[2048]; // [rsp+20h] [rbp-1028h] BYREF

  if ( a3 )
  {
    if ( a4 )
    {
      StringCchPrintfW(Format, 0x800uLL, L"%hs", a3);
      if ( (unsigned int)vsnwprintf((wchar_t *)this, 0x7FFuLL, Format, a4) > 0x7FE )
        *((_WORD *)this + 2047) = 0;
    }
    else
    {
      StringCchPrintfW((unsigned __int16 *)this, 0x800uLL, L"%hs", a3);
    }
  }
  else
  {
    *(_WORD *)this = 0;
  }
}
