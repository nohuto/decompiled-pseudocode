/*
 * XREFs of _wil::details::CallAndHandleErrorsWithReturnType_void__lambda_7d8ec5034082e9a06c60a2b58ed48b70__&_long_&_0__::_1_::catch$0 @ 0x1806EE4DD
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180050D78 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::details::CallAndHandleErrorsWithReturnType_void__lambda_7d8ec5034082e9a06c60a2b58ed48b70____long___0__::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x58D,
                           (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
                           a4);
  return 0LL;
}
