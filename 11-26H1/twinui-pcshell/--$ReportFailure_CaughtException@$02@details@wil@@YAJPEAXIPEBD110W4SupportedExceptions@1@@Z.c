/*
 * XREFs of ??$ReportFailure_CaughtException@$02@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1805BC798
 * Callers:
 *     ?FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1805BCD18 (-FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 * Callees:
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??$ReportFailure_CaughtExceptionCommonNoReturnBase@$02@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x1805BC7FC (--$ReportFailure_CaughtExceptionCommonNoReturnBase@$02@details@wil@@YA-AUResultStatus@01@PEAXIPE.c)
 *     _alloca_probe @ 0x1806CCB80 (_alloca_probe.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_CaughtException<3>(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  int v6; // eax
  char v10; // [rsp+50h] [rbp-1018h] BYREF
  _BYTE v11[4104]; // [rsp+60h] [rbp-1008h] BYREF

  memset_0(v11, 0, (unsigned int)(v6 - 96));
  wil::details::ReportFailure_CaughtExceptionCommonNoReturnBase<3>((unsigned int)&v10, a1, a2, a3);
}
