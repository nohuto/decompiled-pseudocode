/*
 * XREFs of _CMonitorManager::CreateMonitor_::_1_::catch$9 @ 0x18016ADF3
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BCB08 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CMonitorManager::CreateMonitor_::_1_::catch_9(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 160) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 104),
                            (void *)0xB64,
                            (int)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
                            a4);
  return 0LL;
}
