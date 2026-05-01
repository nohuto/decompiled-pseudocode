/*
 * XREFs of _ImmersiveShellStressTool::HangAsync_::_1_::catch$12 @ 0x1806C0CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022D70C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall ImmersiveShellStressTool::HangAsync_::_1_::catch_12(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 184) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 152),
                            (void *)0x35,
                            (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellstresstool.cpp",
                            a4);
  return 0LL;
}
