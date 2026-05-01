/*
 * XREFs of _TouchGestureTelemetry::ReportTouchSwipePerformed__::_1_::catch$5 @ 0x1806F7700
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802D8F60 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall TouchGestureTelemetry::ReportTouchSwipePerformed__::_1_::catch_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 184),
    (void *)0x39,
    (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturetelemetry.h",
    a4);
  return 0LL;
}
