/*
 * XREFs of _CProcess::RuntimeClassInitialize_::_1_::catch$8 @ 0x18004BDF5
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180039D38 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CProcess::RuntimeClassInitialize_::_1_::catch_8(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 304) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 152),
                            (void *)0xA5B,
                            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
                            a4);
  return 0LL;
}
