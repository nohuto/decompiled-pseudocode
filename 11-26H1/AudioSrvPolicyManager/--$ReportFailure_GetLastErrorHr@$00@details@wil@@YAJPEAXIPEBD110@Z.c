/*
 * XREFs of ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x18002CDE4
 * Callers:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18002CDC4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x18002CEE0 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x18002CEEC (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x18002D0B0 (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_GetLastErrorHr<1>(
        wil::details *a1,
        void *a2,
        unsigned int a3,
        const char *a4,
        __int64 a5,
        const char *a6)
{
  int LastErrorFail; // eax
  int v8; // edx
  unsigned int v9; // ebx
  const char *v11; // [rsp+20h] [rbp-48h]
  void *v12; // [rsp+30h] [rbp-38h]

  LastErrorFail = wil::details::GetLastErrorFail(a1, a2, a3, a4, v11, a6, v12);
  v9 = LastErrorFail;
  if ( LastErrorFail > 0 )
    v9 = (unsigned __int16)LastErrorFail | 0x80070000;
  wil::details::HrToNtStatus((wil::details *)v9, v8);
  wil::details::ReportFailure_Base<1,0>(a1);
  return v9;
}
