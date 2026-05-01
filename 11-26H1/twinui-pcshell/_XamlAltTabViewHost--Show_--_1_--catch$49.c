/*
 * XREFs of _XamlAltTabViewHost::Show_::_1_::catch$49 @ 0x1806D15A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180050D78 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall XamlAltTabViewHost::Show_::_1_::catch_49(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 936),
                           (void *)0x1B5,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
                           a4);
  return 0LL;
}
