/*
 * XREFs of _TaskViewHost::CreateFrameForMonitor_::_1_::catch$9 @ 0x1806DA2B8
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180050D78 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall TaskViewHost::CreateFrameForMonitor_::_1_::catch_9(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 112) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 200),
                            (void *)0x24F,
                            (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
                            a4);
  return 0LL;
}
