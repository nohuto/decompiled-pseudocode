/*
 * XREFs of _AtmosCheck::GetCurrentEndpointsUnderLock_::_1_::catch$8 @ 0x180166F9B
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BCB08 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall AtmosCheck::GetCurrentEndpointsUnderLock_::_1_::catch_8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 120),
                           (void *)0x943,
                           (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
                           a4);
  return 0LL;
}
