/*
 * XREFs of _TaskViewHost::RuntimeClassInitialize_::_1_::catch$80 @ 0x180706E13
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180050D78 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall TaskViewHost::RuntimeClassInitialize_::_1_::catch_80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 224) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 216),
                            (void *)0xFD,
                            (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
                            a4);
  return 0LL;
}
