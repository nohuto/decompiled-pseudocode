/*
 * XREFs of ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x180026658
 * Callers:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18003A4F0 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     memset_0 @ 0x180021E51 (memset_0.c)
 *     ??$ReportFailure_CaughtExceptionCommon@$00@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x1800267A8 (--$ReportFailure_CaughtExceptionCommon@$00@details@wil@@YA-AUResultStatus@01@PEAXIPEBD110PEAG_KW.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800B91D0 (_alloca_probe.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtException<1>(int a1, int a2, int a3)
{
  char v7; // [rsp+60h] [rbp-1038h] BYREF
  _BYTE v8[4096]; // [rsp+70h] [rbp-1028h] BYREF

  memset_0(v8, 0, sizeof(v8));
  return (unsigned int)*(_QWORD *)wil::details::ReportFailure_CaughtExceptionCommon<1>((unsigned int)&v7, a1, a2, a3);
}
