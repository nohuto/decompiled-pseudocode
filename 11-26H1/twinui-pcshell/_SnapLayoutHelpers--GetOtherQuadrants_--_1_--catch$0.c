/*
 * XREFs of _SnapLayoutHelpers::GetOtherQuadrants_::_1_::catch$0 @ 0x1806F8C25
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180050D78 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall SnapLayoutHelpers::GetOtherQuadrants_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 120),
                           (void *)0x9F9,
                           (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
                           a4);
  return 0LL;
}
