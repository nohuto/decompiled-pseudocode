/*
 * XREFs of ??$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z @ 0x18009CC94
 * Callers:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009F8E8 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x18008B9D4 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x180094C40 (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180095E08 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_GetLastError<3>(
        wil::details *a1,
        void *a2,
        __int64 a3,
        const char *a4,
        int a5,
        char *a6)
{
  unsigned int v6; // ebx
  signed int LastErrorFail; // eax
  __int64 v9; // r9
  const char *v10; // [rsp+20h] [rbp-48h]
  __int64 v11; // [rsp+20h] [rbp-48h]
  _DWORD v12[6]; // [rsp+50h] [rbp-18h] BYREF

  v6 = (unsigned int)a2;
  LastErrorFail = wil::details::GetLastErrorFail(
                    a1,
                    a2,
                    (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
                    a4,
                    v10,
                    a6);
  if ( LastErrorFail > 0 )
    LastErrorFail = (unsigned __int16)LastErrorFail | 0x80070000;
  v12[0] = LastErrorFail;
  v12[2] = 0;
  v12[1] = wil::details::HrToNtStatus((wil::details *)(unsigned int)LastErrorFail);
  wil::details::ReportFailure_Base<3,0>(
    (__int64)a1,
    v6,
    (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
    v9,
    v11,
    (__int64)a6,
    (__int64)v12,
    0LL);
}
