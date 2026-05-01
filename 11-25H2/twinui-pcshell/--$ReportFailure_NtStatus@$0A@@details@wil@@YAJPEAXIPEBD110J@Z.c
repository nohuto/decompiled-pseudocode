/*
 * XREFs of ??$ReportFailure_NtStatus@$0A@@details@wil@@YAJPEAXIPEBD110J@Z @ 0x180449A10
 * Callers:
 *     ?_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180450D78 (-_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180093DE0 (--$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailu.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x1802BE44C (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_NtStatus<0>(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        wil::details *a7)
{
  int v10; // r9d

  wil::details::NtStatusToHr((wil::details *)(unsigned int)a7);
  wil::details::ReportFailure_Base<0,0>(a1, a2, a3, v10);
}
