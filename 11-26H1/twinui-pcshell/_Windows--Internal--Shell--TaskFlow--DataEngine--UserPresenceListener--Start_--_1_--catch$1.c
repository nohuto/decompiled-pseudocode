/*
 * XREFs of _Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::Start_::_1_::catch$1 @ 0x1806E999F
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180050D78 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::Start_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 72) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x4F,
                           (int)"pcshell\\twinui\\taskflowbroker\\lib\\userpresencelistener.cpp",
                           a4);
  return 0LL;
}
