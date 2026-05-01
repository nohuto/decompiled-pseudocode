/*
 * XREFs of _AIXPolicyHelper::IsC2DAllowedOnDeviceByPolicy_::_1_::catch$0 @ 0x1806F76B4
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802D8F60 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall AIXPolicyHelper::IsC2DAllowedOnDeviceByPolicy_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 120),
    (void *)0x4EC,
    (int)"shellcommon\\internal\\shell\\inc\\aixpolicyhelper.h",
    a4);
  return 0LL;
}
