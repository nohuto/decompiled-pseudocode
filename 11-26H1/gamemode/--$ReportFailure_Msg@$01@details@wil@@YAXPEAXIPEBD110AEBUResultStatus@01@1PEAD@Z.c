/*
 * XREFs of ??$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x180008790
 * Callers:
 *     ??$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x180008728 (--$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x180002C34 (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailu.c)
 *     ?StringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x180005D80 (-StringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x18000FE80 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18000FF40 (_alloca_probe.c)
 */

__int64 __fastcall wil::details::ReportFailure_Msg<2>(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        va_list Args)
{
  wchar_t Buffer[2048]; // [rsp+50h] [rbp-2048h] BYREF
  wchar_t Format[2048]; // [rsp+1050h] [rbp-1048h] BYREF

  if ( a8 )
  {
    if ( Args )
    {
      StringCchPrintfW(Format, 2048LL, L"%hs");
      if ( (unsigned int)_vsnwprintf(Buffer, 0x7FFuLL, Format, Args) > 0x7FE )
        Buffer[2047] = 0;
    }
    else
    {
      StringCchPrintfW(Buffer, 2048LL, L"%hs");
    }
  }
  else
  {
    Buffer[0] = 0;
  }
  return wil::details::ReportFailure_Base<2,0>(a1, a2, a3, 0, 0LL, a6, a7, (__int64)Buffer);
}
