/*
 * XREFs of _TouchEdgeGestureManager::ShowTouchEdgeGripper_::_1_::catch$1 @ 0x1806F751E
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180050D78 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall TouchEdgeGestureManager::ShowTouchEdgeGripper_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 104) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 88),
                            (void *)0x45,
                            (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegesturemanager.cpp",
                            a4);
  return 0LL;
}
