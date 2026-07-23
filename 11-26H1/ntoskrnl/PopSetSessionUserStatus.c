/*
 * XREFs of PopSetSessionUserStatus @ 0x1409F9DBC
 * Callers:
 *     PopSessionDisconnected @ 0x1409F73A0 (PopSessionDisconnected.c)
 *     PopAdaptiveGetRemoteSessionState @ 0x1409F92B0 (PopAdaptiveGetRemoteSessionState.c)
 *     PopAdaptiveGetConsoleSessionState @ 0x1409F99F8 (PopAdaptiveGetConsoleSessionState.c)
 * Callees:
 *     PopPrintEx @ 0x1404BCBF8 (PopPrintEx.c)
 *     PopDiagTraceSessionStates @ 0x1409F7428 (PopDiagTraceSessionStates.c)
 *     PopSetPowerSettingValue @ 0x1409F9F58 (PopSetPowerSettingValue.c)
 *     PopSetGlobalUserStatus @ 0x1409FA67C (PopSetGlobalUserStatus.c)
 *     PopPrintUserActivityPresence @ 0x1409FA814 (PopPrintUserActivityPresence.c)
 */

__int64 __fastcall PopSetSessionUserStatus(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rax
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  if ( dword_140F0C078 == a1 && a1 != -1 )
    dword_140F0C07C = a2;
  v6 = a2;
  v4 = PopPrintUserActivityPresence(a2);
  PopPrintEx(3, (int)"PopAdaptive: Session %u user presence/activity state: %S\n", a1, v4);
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_INPUT_STATE, a1, a2);
  PopSetPowerSettingValue(&GUID_SESSION_USER_PRESENCE, a1, 0LL, 4LL, &v6);
  PopSetPowerSettingValue(&GUID_SESSION_USER_PRESENCE, a1, 1LL, 4LL, &v6);
  return PopSetGlobalUserStatus(a1, a2);
}
