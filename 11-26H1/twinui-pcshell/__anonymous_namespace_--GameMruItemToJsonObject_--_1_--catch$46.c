/*
 * XREFs of __anonymous_namespace_::GameMruItemToJsonObject_::_1_::catch$46 @ 0x1806D587E
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802D8F60 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _anonymous_namespace_::GameMruItemToJsonObject_::_1_::catch_46(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 216),
    (void *)0x5E,
    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\gamemrumanager.cpp",
    a4);
  **(_QWORD **)(a2 + 128) = 0LL;
  return 0LL;
}
