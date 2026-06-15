/*
 * XREFs of __lambda_82b4d950fa5d9eeb82537f57bcb68a2f_::operator()_::_1_::catch$19 @ 0x18016900E
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BCB08 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_82b4d950fa5d9eeb82537f57bcb68a2f_::operator()_::_1_::catch_19(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 232),
                           (void *)0x143,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
                           a4);
  return 0LL;
}
