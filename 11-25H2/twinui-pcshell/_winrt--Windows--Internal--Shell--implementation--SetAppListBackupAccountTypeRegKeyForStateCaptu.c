/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::SetAppListBackupAccountTypeRegKeyForStateCapture_::_1_::catch$0 @ 0x1806D98F5
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802E0170 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::SetAppListBackupAccountTypeRegKeyForStateCapture_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 56),
    (void *)0xE4,
    (int)"pcshell\\twinui\\appbackuplistener\\lib\\appbackuplistener.cpp",
    a4);
  return 0LL;
}
