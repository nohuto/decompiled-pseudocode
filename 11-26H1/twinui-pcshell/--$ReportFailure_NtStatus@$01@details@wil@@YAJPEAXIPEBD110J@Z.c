/*
 * XREFs of ??$ReportFailure_NtStatus@$01@details@wil@@YAJPEAXIPEBD110J@Z @ 0x18030EC30
 * Callers:
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180314E90 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 * Callees:
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x1802B569C (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x1802D4364 (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 */

__int64 __fastcall wil::details::ReportFailure_NtStatus<2>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        wil::details *a7)
{
  unsigned int v9; // edi
  _DWORD v11[4]; // [rsp+50h] [rbp-18h] BYREF

  v11[0] = wil::details::NtStatusToHr((wil::details *)(unsigned int)a7);
  v9 = v11[0];
  v11[1] = (_DWORD)a7;
  v11[2] = 1;
  wil::details::ReportFailure_Base<2,0>(
    a1,
    a2,
    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
    0,
    0LL,
    a6,
    (__int64)v11,
    0LL);
  return v9;
}
