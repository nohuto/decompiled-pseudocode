/*
 * XREFs of _StartupAppMonitor::IsStartupAppEnabled_::_1_::catch$5 @ 0x1806F6FF8
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802D8F60 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall StartupAppMonitor::IsStartupAppEnabled_::_1_::catch_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 88),
    (void *)0xBC,
    (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
    a4);
  return 0LL;
}
