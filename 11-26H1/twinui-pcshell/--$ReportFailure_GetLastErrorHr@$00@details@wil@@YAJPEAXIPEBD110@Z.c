/*
 * XREFs of ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x18005093C
 * Callers:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x18004FCA4 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJPEAXIPEBD110@Z @ 0x1800509D0 (-GetLastErrorFailHr@details@wil@@YAJPEAXIPEBD110@Z.c)
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x1802B0254 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 */

__int64 __fastcall wil::details::ReportFailure_GetLastErrorHr<1>(
        wil::details *a1,
        void *a2,
        __int64 a3,
        const char *a4,
        int a5,
        const char *a6)
{
  unsigned int v7; // ebp
  unsigned int LastErrorFailHr; // ebx
  const char *v11; // [rsp+20h] [rbp-48h]
  void *v12; // [rsp+30h] [rbp-38h]

  v7 = (unsigned int)a2;
  LastErrorFailHr = wil::details::GetLastErrorFailHr(a1, a2, a3, a4, v11, a6, v12);
  wil::details::HrToNtStatus((wil::details *)LastErrorFailHr);
  wil::details::ReportFailure_Base<1,0>(a1, v7, a3);
  return LastErrorFailHr;
}
