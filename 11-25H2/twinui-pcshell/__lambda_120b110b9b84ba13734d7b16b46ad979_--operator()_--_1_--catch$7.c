/*
 * XREFs of __lambda_120b110b9b84ba13734d7b16b46ad979_::operator()_::_1_::catch$7 @ 0x1806ABAA1
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802E0170 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_120b110b9b84ba13734d7b16b46ad979_::operator()_::_1_::catch_7(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 72),
    (void *)0x24,
    (int)"shellcommon\\internal\\shell\\inc\\Private\\StartSearchSharedUtils.h",
    a4);
  return 0LL;
}
