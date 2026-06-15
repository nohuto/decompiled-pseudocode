/*
 * XREFs of _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::catch$10 @ 0x18004BC84
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180039D38 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::catch_10(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 184),
                           (void *)0x9AD,
                           (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
                           a4);
  return 0LL;
}
