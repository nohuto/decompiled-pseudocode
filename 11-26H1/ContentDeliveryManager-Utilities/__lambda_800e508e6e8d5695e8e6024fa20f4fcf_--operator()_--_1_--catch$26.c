/*
 * XREFs of __lambda_800e508e6e8d5695e8e6024fa20f4fcf_::operator()_::_1_::catch$26 @ 0x1800BA0CB
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180034E48 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_800e508e6e8d5695e8e6024fa20f4fcf_::operator()_::_1_::catch_26(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 232),
    (void *)0x27E,
    (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    a4);
  return 0LL;
}
