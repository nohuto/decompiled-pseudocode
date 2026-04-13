/*
 * XREFs of ??$ReportFailure_HrMsg@$0A@@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x18005FE5C
 * Callers:
 *     ?Throw_HrIfFalseMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x1800649E0 (-Throw_HrIfFalseMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18006A6D4 (-Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180091F44 (-Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 * Callees:
 *     ??$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x180026620 (--$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailu.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180033938 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x180035B24 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     _alloca_probe @ 0x1800B91D0 (_alloca_probe.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_HrMsg<0>(
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
  char *v14; // r9
  int v15; // r9d
  int v16; // [rsp+20h] [rbp-1058h]
  _DWORD v17[4]; // [rsp+50h] [rbp-1028h] BYREF
  _BYTE v18[4120]; // [rsp+60h] [rbp-1018h] BYREF

  v17[0] = (_DWORD)a7;
  v17[1] = wil::details::HrToNtStatus((wil::details *)(unsigned int)a7);
  v17[2] = 0;
  wil::details::PrintLoggingMessage((wil::details *)v18, v12, v13, v14);
  wil::details::ReportFailure_Base<0,0>(a1, a2, a3, v15, v16, a6, (__int64)v17, (__int64)v18);
}
