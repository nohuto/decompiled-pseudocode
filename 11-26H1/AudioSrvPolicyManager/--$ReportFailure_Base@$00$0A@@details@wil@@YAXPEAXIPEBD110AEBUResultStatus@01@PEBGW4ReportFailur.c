/*
 * XREFs of ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x18002CEE0
 * Callers:
 *     ??$ReportFailure_Win32@$00@details@wil@@YAJPEAXIPEBD110K@Z @ 0x180001FD8 (--$ReportFailure_Win32@$00@details@wil@@YAJPEAXIPEBD110K@Z.c)
 *     ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x18002CDE4 (--$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z.c)
 *     ??$ReportFailure_Hr@$00@details@wil@@YAXPEAXIPEBD110JW4FailureFlags@1@@Z @ 0x18002CE88 (--$ReportFailure_Hr@$00@details@wil@@YAXPEAXIPEBD110JW4FailureFlags@1@@Z.c)
 *     ??$ReportFailure_CaughtExceptionCommon@$00@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x180036EE0 (--$ReportFailure_CaughtExceptionCommon@$00@details@wil@@YA-AUResultStatus@01@PEAXIPEBD110PEAG_KW.c)
 *     ??$ReportFailure_NtStatus@$00@details@wil@@YAJPEAXIPEBD110J@Z @ 0x18003B2C0 (--$ReportFailure_NtStatus@$00@details@wil@@YAJPEAXIPEBD110J@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall wil::details::ReportFailure_Base<1,0>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  return wil::details::ReportFailure_Return<1>(a1, a2, a3, a4, a5, a6, a7, a8);
}
