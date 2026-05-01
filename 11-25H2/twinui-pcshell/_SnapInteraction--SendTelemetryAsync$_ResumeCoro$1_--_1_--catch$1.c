/*
 * XREFs of _SnapInteraction::SendTelemetryAsync$_ResumeCoro$1_::_1_::catch$1 @ 0x1806D0220
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802E0170 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall SnapInteraction::SendTelemetryAsync__ResumeCoro_1_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 56),
    (void *)0x26,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\interactiontracker.cpp",
    a4);
  return 0LL;
}
