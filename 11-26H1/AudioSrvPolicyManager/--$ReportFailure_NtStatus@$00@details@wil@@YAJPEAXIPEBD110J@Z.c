/*
 * XREFs of ??$ReportFailure_NtStatus@$00@details@wil@@YAJPEAXIPEBD110J@Z @ 0x18003B2C0
 * Callers:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18003D080 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 * Callees:
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18002AF74 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x18002CEE0 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
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
  unsigned int v10; // edi
  int v12; // [rsp+20h] [rbp-48h]
  _DWORD v13[4]; // [rsp+50h] [rbp-18h] BYREF

  v10 = wil::details::NtStatusToHr((wil::details *)(unsigned int)a7);
  v13[0] = v10;
  v13[1] = (_DWORD)a7;
  v13[2] = 1;
  wil::details::ReportFailure_Base<1,0>(a1, a2, a3, a6, v12, a6, (__int64)v13, 0LL);
  return v10;
}
