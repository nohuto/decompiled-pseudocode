/*
 * XREFs of _WindowWrapperBase::ReconcileSessionIdleTaskCompletion_::_1_::catch$8 @ 0x1806EBFB6
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802D8F60 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall WindowWrapperBase::ReconcileSessionIdleTaskCompletion_::_1_::catch_8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 808),
    (void *)0xAF7,
    (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
    a4);
  return 0LL;
}
