/*
 * XREFs of ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000CF44
 * Callers:
 *     ??0CallWithHangTimeout@@QEAA@W4TimeoutDuration@0@@Z @ 0x180007080 (--0CallWithHangTimeout@@QEAA@W4TimeoutDuration@0@@Z.c)
 * Callees:
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110JW4FailureFlags@1@@Z @ 0x18000401C (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110JW4FailureFlags@1@@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_NullAlloc(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  wil::details *v4; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v4) = -2147024882;
  wil::details::ReportFailure_Hr<2>(
    (__int64)this,
    58,
    (__int64)"onecoreuap\\internal\\ds\\inc\\winlogon\\CallWithHangTimeout.h",
    0LL,
    0LL,
    retaddr,
    v4);
}
