/*
 * XREFs of _CLauncherTipContextMenu::_EnumerateAndBuildMenu_::_1_::catch$33 @ 0x1806D218D
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180050D78 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CLauncherTipContextMenu::_EnumerateAndBuildMenu_::_1_::catch_33(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 1336),
                           (void *)0x3D7,
                           (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
                           a4);
  return 0LL;
}
