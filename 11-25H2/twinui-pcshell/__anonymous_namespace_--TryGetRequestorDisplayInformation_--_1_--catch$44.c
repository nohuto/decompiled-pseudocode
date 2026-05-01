/*
 * XREFs of __anonymous_namespace_::TryGetRequestorDisplayInformation_::_1_::catch$44 @ 0x1806D68DC
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802E0170 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _anonymous_namespace_::TryGetRequestorDisplayInformation_::_1_::catch_44(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 264),
    (void *)0x18D,
    (int)"pcshell\\twinui\\PinManager\\lib\\PinManager.cpp",
    a4);
  return 0LL;
}
