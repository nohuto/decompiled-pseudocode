/*
 * XREFs of _CAudioSessionManager::Initialize_::_1_::catch$7 @ 0x180166B60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BCB08 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAudioSessionManager::Initialize_::_1_::catch_7(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x3F3,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
                           a4);
  return 0LL;
}
