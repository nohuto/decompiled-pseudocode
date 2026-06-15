/*
 * XREFs of _CAudioSession::Disconnect_::_1_::catch$13 @ 0x1801650C4
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BCB08 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAudioSession::Disconnect_::_1_::catch_13(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 184) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 168),
                            (void *)0x96D,
                            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                            a4);
  return 0LL;
}
