/*
 * XREFs of ??$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z @ 0x180090424
 * Callers:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009311C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x18007B810 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x180083C64 (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x1800887CC (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_GetLastError<3>(
        wil::details *a1,
        void *a2,
        __int64 a3,
        const char *a4,
        int a5,
        const char *a6)
{
  unsigned int v7; // edi
  signed int LastErrorFail; // eax
  __int64 v10; // r9
  const char *v11; // [rsp+20h] [rbp-48h]
  __int64 v12; // [rsp+20h] [rbp-48h]
  _DWORD v13[6]; // [rsp+50h] [rbp-18h] BYREF

  v7 = (unsigned int)a2;
  LastErrorFail = wil::details::GetLastErrorFail(a1, a2, a3, a4, v11, a6);
  if ( LastErrorFail > 0 )
    LastErrorFail = (unsigned __int16)LastErrorFail | 0x80070000;
  v13[0] = LastErrorFail;
  v13[1] = wil::details::HrToNtStatus((wil::details *)(unsigned int)LastErrorFail);
  v13[2] = 0;
  wil::details::ReportFailure_Base<3,0>((__int64)a1, v7, a3, v10, v12, (__int64)a6, (__int64)v13, 0LL);
}
