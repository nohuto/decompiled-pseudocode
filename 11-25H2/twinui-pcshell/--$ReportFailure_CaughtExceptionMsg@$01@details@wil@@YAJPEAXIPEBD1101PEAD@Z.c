/*
 * XREFs of ??$ReportFailure_CaughtExceptionMsg@$01@details@wil@@YAJPEAXIPEBD1101PEAD@Z @ 0x18033D1CC
 * Callers:
 *     ?Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ @ 0x18034A3DC (-Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ.c)
 * Callees:
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x18001FE34 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18009BE10 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ??$ReportFailure_CaughtExceptionCommon@$01@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x18023DF04 (--$ReportFailure_CaughtExceptionCommon@$01@details@wil@@YA-AUResultStatus@01@PEAXIPEBD110PEAG_KW.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1806A4AA0 (_alloca_probe.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtExceptionMsg<2>(
        int a1,
        unsigned __int16 *a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned __int64 a7,
        char *a8)
{
  int v10; // esi
  int v12; // [rsp+20h] [rbp-1078h]
  int v13; // [rsp+28h] [rbp-1070h]
  int v14; // [rsp+40h] [rbp-1058h]
  _BYTE v15[16]; // [rsp+60h] [rbp-1038h] BYREF
  unsigned __int16 v16[2048]; // [rsp+70h] [rbp-1028h] BYREF

  v10 = (int)a2;
  wil::details::PrintLoggingMessage((wil::details *)v16, a2, a7, a8);
  StringCchCatW(v16, 2048LL, (char *)L" -- ");
  return (unsigned int)*(_QWORD *)wil::details::ReportFailure_CaughtExceptionCommon<2>(
                                    (__int64)v15,
                                    a1,
                                    v10,
                                    a3,
                                    v12,
                                    v13,
                                    a6,
                                    (__int64)v16,
                                    v14,
                                    0);
}
