/*
 * XREFs of _WindowEventDispatcher::AppViewActivationRequested_::_1_::catch$79 @ 0x1806E9F53
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802D8F60 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall WindowEventDispatcher::AppViewActivationRequested_::_1_::catch_79(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 792),
    (void *)0x341,
    (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
    a4);
  return 0LL;
}
