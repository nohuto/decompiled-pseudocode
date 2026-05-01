/*
 * XREFs of ??$ReportFailure_HrMsg@$0A@@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x18035A75C
 * Callers:
 *     ?Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18035C9B8 (-Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x18004FCA4 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x1800BFBAC (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     ??$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x1802D43B8 (--$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailu.c)
 *     _alloca_probe @ 0x1806CCB80 (_alloca_probe.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_HrMsg<0>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
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
  __int64 v15; // r9
  int v16; // [rsp+20h] [rbp-1058h]
  _DWORD v17[4]; // [rsp+50h] [rbp-1028h] BYREF
  _BYTE v18[4120]; // [rsp+60h] [rbp-1018h] BYREF

  v17[0] = (_DWORD)a7;
  v17[1] = wil::details::HrToNtStatus((wil::details *)(unsigned int)a7);
  v17[2] = 0;
  wil::details::PrintLoggingMessage((wil::details *)v18, v12, v13, v14);
  wil::details::ReportFailure_Base<0,0>(a1, a2, a3, v15, v16, a6, (__int64)v17, (__int64)v18);
}
