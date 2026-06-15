/*
 * XREFs of _CStreamClassPolicyGainsWrapper::GetStreamClassPolicyGainsForEndpoint_::_1_::catch$12 @ 0x18004C3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180038E48 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CStreamClassPolicyGainsWrapper::GetStreamClassPolicyGainsForEndpoint_::_1_::catch_12(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 248),
    (void *)0x66,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
    a4);
  return 0LL;
}
