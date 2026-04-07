/*
 * XREFs of _CGlobalTimeTrackVisual::OnGlobalTimeUpdated_::_1_::catch$23 @ 0x1800E7E5D
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800DE07C (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CGlobalTimeTrackVisual::OnGlobalTimeUpdated_::_1_::catch_23(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 40),
    (void *)0x11,
    (int)"clientcore\\windows\\dwm\\udwm\\udwmglobaltimetrackvisual.cpp",
    a4);
  return 0LL;
}
