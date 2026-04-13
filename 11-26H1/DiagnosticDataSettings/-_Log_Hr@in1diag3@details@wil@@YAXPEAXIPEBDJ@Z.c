/*
 * XREFs of ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800039EC
 * Callers:
 *     TelGetMaximumAllowedTelemetryLevel @ 0x180003C60 (TelGetMaximumAllowedTelemetryLevel.c)
 *     TelGetNumericPolicy @ 0x180003D80 (TelGetNumericPolicy.c)
 *     TelGetStringPolicy @ 0x1800042C0 (TelGetStringPolicy.c)
 * Callees:
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110JW4FailureFlags@1@@Z @ 0x1800026D0 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110JW4FailureFlags@1@@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  wil::details *v4; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v4) = (_DWORD)a4;
  wil::details::ReportFailure_Hr<2>(
    (__int64)this,
    (int)a2,
    (__int64)"onecore\\base\\telemetry\\permission\\lib\\telemetrypermission.cpp",
    0LL,
    0LL,
    retaddr,
    v4);
}
