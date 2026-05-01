/*
 * XREFs of _DashboardTaskbarSettings::UnsubscribeFromDaSettingChanged_::_1_::catch$12 @ 0x1806B52D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802E0170 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall DashboardTaskbarSettings::UnsubscribeFromDaSettingChanged_::_1_::catch_12(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 40),
    (void *)0x31,
    (int)"pcshell\\twinui\\dashboardmanager\\lib_consumer\\dashboardtaskbarsettings.cpp",
    a4);
  return 0LL;
}
