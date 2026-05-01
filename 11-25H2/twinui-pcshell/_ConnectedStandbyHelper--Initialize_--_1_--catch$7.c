/*
 * XREFs of _ConnectedStandbyHelper::Initialize_::_1_::catch$7 @ 0x1806C3015
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022D70C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall ConnectedStandbyHelper::Initialize_::_1_::catch_7(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 200),
                           (void *)0x1E,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\connectedstandbyhelper.cpp",
                           a4);
  return 0LL;
}
