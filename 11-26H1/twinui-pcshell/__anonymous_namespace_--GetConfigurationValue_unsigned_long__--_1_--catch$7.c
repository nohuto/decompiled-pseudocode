/*
 * XREFs of __anonymous_namespace_::GetConfigurationValue_unsigned_long__::_1_::catch$7 @ 0x1806E2DE5
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802D8F60 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _anonymous_namespace_::GetConfigurationValue_unsigned_long__::_1_::catch_7(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 456),
    (void *)0x34,
    (int)"pcshell\\twinui\\gamingposture\\lib\\gamingpostureconfiguration.cpp",
    a4);
  return 0LL;
}
