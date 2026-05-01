/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::SetLastAppBackupListenerStartTimeForStateCapture_::_1_::catch$3 @ 0x1806B599A
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802E0170 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::SetLastAppBackupListenerStartTimeForStateCapture_::_1_::catch_3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 88),
    (void *)0xB7,
    (int)"pcshell\\twinui\\appbackuplistener\\lib\\appbackuplistener.cpp",
    a4);
  return 0LL;
}
