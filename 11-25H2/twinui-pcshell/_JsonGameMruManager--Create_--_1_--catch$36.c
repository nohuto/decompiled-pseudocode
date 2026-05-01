/*
 * XREFs of _JsonGameMruManager::Create_::_1_::catch$36 @ 0x1806A6DDD
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802E0170 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall JsonGameMruManager::Create_::_1_::catch_36(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 328),
    (void *)0x74,
    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\gamemrumanager.cpp",
    a4);
  **(_QWORD **)(a2 + 96) = 0LL;
  return 0LL;
}
