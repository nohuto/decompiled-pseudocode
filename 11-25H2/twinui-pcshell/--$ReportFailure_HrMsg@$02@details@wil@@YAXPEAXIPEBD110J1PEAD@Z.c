/*
 * XREFs of ??$ReportFailure_HrMsg@$02@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x1802973B4
 * Callers:
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x180297380 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1802CEE20 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     ?FailFast_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x18064FA28 (-FailFast_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 * Callees:
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x18001FE34 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180093BEC (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1802975A4 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     _alloca_probe @ 0x1806A4AA0 (_alloca_probe.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_HrMsg<3>(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        wil::details *a7,
        __int64 a8,
        __int64 a9)
{
  unsigned __int16 *v12; // rdx
  __int64 v13; // r8
  va_list v14; // r9
  int v15; // r9d
  _BYTE v16[4120]; // [rsp+60h] [rbp-1018h] BYREF

  wil::details::HrToNtStatus((wil::details *)(unsigned int)a7);
  wil::details::PrintLoggingMessage((wil::details *)v16, v12, v13, v14);
  wil::details::ReportFailure_Base<3,0>(a1, a2, a3, v15);
}
