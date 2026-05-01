/*
 * XREFs of ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1802DF5D8
 * Callers:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802E0170 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     ??$ReportFailure_CaughtExceptionCommon@$01@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x18023DF04 (--$ReportFailure_CaughtExceptionCommon@$01@details@wil@@YA-AUResultStatus@01@PEAXIPEBD110PEAG_KW.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     _alloca_probe @ 0x1806A4AA0 (_alloca_probe.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtException<2>(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  int v10; // [rsp+20h] [rbp-1078h]
  int v11; // [rsp+28h] [rbp-1070h]
  int v12; // [rsp+40h] [rbp-1058h]
  _BYTE v13[16]; // [rsp+60h] [rbp-1038h] BYREF
  _BYTE v14[4096]; // [rsp+70h] [rbp-1028h] BYREF

  memset_0(v14, 0, sizeof(v14));
  return (unsigned int)*(_QWORD *)wil::details::ReportFailure_CaughtExceptionCommon<2>(
                                    (__int64)v13,
                                    a1,
                                    a2,
                                    a3,
                                    v10,
                                    v11,
                                    a6,
                                    (__int64)v14,
                                    v12,
                                    0);
}
