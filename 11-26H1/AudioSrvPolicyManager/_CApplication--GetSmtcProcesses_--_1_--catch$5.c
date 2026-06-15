/*
 * XREFs of _CApplication::GetSmtcProcesses_::_1_::catch$5 @ 0x18004C876
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180039D38 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CApplication::GetSmtcProcesses_::_1_::catch_5(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x854,
                           (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
                           a4);
  return 0LL;
}
