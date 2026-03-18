/*
 * XREFs of PopSetSessionUserStatus @ 0x140A3E39C
 * Callers:
 *     PopSessionDisconnected @ 0x140A3B980 (PopSessionDisconnected.c)
 *     PopAdaptiveGetRemoteSessionState @ 0x140A3D890 (PopAdaptiveGetRemoteSessionState.c)
 *     PopAdaptiveGetConsoleSessionState @ 0x140A3DFD8 (PopAdaptiveGetConsoleSessionState.c)
 * Callees:
 *     PopPrintEx @ 0x1404C33A8 (PopPrintEx.c)
 *     PopDiagTraceSessionStates @ 0x140A3BA08 (PopDiagTraceSessionStates.c)
 *     PopSetPowerSettingValue @ 0x140A3E538 (PopSetPowerSettingValue.c)
 *     PopSetGlobalUserStatus @ 0x140A3EC5C (PopSetGlobalUserStatus.c)
 *     PopPrintUserActivityPresence @ 0x140A3EDF4 (PopPrintUserActivityPresence.c)
 */

__int64 __fastcall PopSetSessionUserStatus(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rax
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_DWORD *)&PopAdaptiveStandbyLock.AbWaitEntryCount == a1 && a1 != -1 )
    PopAdaptiveStandbyLock.SecureThreadCookie = a2;
  v6 = a2;
  v4 = PopPrintUserActivityPresence(a2);
  PopPrintEx(3, (int)"PopAdaptive: Session %u user presence/activity state: %S\n", a1, v4);
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_INPUT_STATE, a1, a2);
  PopSetPowerSettingValue(&GUID_SESSION_USER_PRESENCE, a1, 0LL, 4LL, &v6);
  PopSetPowerSettingValue(&GUID_SESSION_USER_PRESENCE, a1, 1LL, 4LL, &v6);
  return PopSetGlobalUserStatus(a1, a2);
}
