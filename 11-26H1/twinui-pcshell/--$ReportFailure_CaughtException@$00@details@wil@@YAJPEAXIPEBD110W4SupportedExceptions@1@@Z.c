/*
 * XREFs of ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x180050D98
 * Callers:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180050D78 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?winrt_to_hresult@wil@@YAHPEAX@Z @ 0x1802D9A80 (-winrt_to_hresult@wil@@YAHPEAX@Z.c)
 * Callees:
 *     ??$ReportFailure_CaughtExceptionCommon@$00@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x180050B34 (--$ReportFailure_CaughtExceptionCommon@$00@details@wil@@YA-AUResultStatus@01@PEAXIPEBD110PEAG_KW.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _alloca_probe @ 0x1806CCB80 (_alloca_probe.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtException<1>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v10; // [rsp+20h] [rbp-1078h]
  int v11; // [rsp+28h] [rbp-1070h]
  int v12; // [rsp+40h] [rbp-1058h]
  char v13; // [rsp+48h] [rbp-1050h]
  _BYTE v14[16]; // [rsp+60h] [rbp-1038h] BYREF
  _BYTE v15[4096]; // [rsp+70h] [rbp-1028h] BYREF

  memset_0(v15, 0, sizeof(v15));
  return (unsigned int)*(_QWORD *)wil::details::ReportFailure_CaughtExceptionCommon<1>(
                                    (__int64)v14,
                                    a1,
                                    a2,
                                    a3,
                                    v10,
                                    v11,
                                    a6,
                                    (__int64)v15,
                                    v12,
                                    v13);
}
