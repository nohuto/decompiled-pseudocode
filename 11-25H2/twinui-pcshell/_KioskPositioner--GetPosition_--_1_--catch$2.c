/*
 * XREFs of _KioskPositioner::GetPosition_::_1_::catch$2 @ 0x1806C9F33
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022D70C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall KioskPositioner::GetPosition_::_1_::catch_2(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x256,
                           (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           a4);
  return 0LL;
}
