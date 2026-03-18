/*
 * XREFs of xxxRefreshDisplayOrientation @ 0x14026B590
 * Callers:
 *     xxxSetInformationThread @ 0x140114240 (xxxSetInformationThread.c)
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 *     NtUserSetDisplayAutoRotationPreferences @ 0x14022CC20 (NtUserSetDisplayAutoRotationPreferences.c)
 *     xxxSetActivePpiForMonitor @ 0x14026B544 (xxxSetActivePpiForMonitor.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxRefreshDisplayOrientation(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(UserSessionState + 66072) + 16LL))(*(_QWORD *)(UserSessionState + 66072));
}
