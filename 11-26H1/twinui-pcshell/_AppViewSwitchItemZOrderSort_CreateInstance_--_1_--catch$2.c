/*
 * XREFs of _AppViewSwitchItemZOrderSort_CreateInstance_::_1_::catch$2 @ 0x1806DE171
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180050D78 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall AppViewSwitchItemZOrderSort_CreateInstance_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x82,
                           (int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitemzordersort.cpp",
                           a4);
  return 0LL;
}
