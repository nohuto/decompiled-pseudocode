/*
 * XREFs of ??$ReportFailure_HrMsg@$00@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x180319548
 * Callers:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18031B4C0 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x18004FCA4 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x1800BFBAC (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x1802B0254 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1806CCB80 (_alloca_probe.c)
 */

__int64 __fastcall wil::details::ReportFailure_HrMsg<1>(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        wil::details *a7)
{
  unsigned __int16 *v10; // rdx
  __int64 v11; // r8
  va_list v12; // r9
  int v13; // r9d
  int v15; // [rsp+20h] [rbp-1068h]
  _DWORD v16[4]; // [rsp+50h] [rbp-1038h] BYREF
  _BYTE v17[4096]; // [rsp+60h] [rbp-1028h] BYREF

  v16[0] = (_DWORD)a7;
  v16[1] = wil::details::HrToNtStatus((wil::details *)(unsigned int)a7);
  v16[2] = 0;
  wil::details::PrintLoggingMessage((wil::details *)v17, v10, v11, v12);
  return wil::details::ReportFailure_Base<1,0>(a1, a2, a3, v13, v15, a6, (int)v16, (__int64)v17);
}
