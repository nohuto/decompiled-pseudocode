/*
 * XREFs of ??$ReportFailure_NtStatus@$00@details@wil@@YAJPEAXIPEBD110J@Z @ 0x18005AE54
 * Callers:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18008D824 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 * Callees:
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18005B944 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x180083C58 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 */

__int64 __fastcall wil::details::ReportFailure_NtStatus<1>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        wil::details *a7)
{
  unsigned int v11; // [rsp+50h] [rbp-18h]

  v11 = wil::details::NtStatusToHr((wil::details *)(unsigned int)a7, a2);
  wil::details::ReportFailure_Base<1,0>(a1, a2, a3);
  return v11;
}
