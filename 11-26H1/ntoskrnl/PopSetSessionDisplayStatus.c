/*
 * XREFs of PopSetSessionDisplayStatus @ 0x140A3C548
 * Callers:
 *     PopSessionConnectedV2 @ 0x1407DDDF4 (PopSessionConnectedV2.c)
 *     PopSetDisplayStatus @ 0x140A3B900 (PopSetDisplayStatus.c)
 *     PopSessionDisconnected @ 0x140A3B980 (PopSessionDisconnected.c)
 *     PopSessionConnected @ 0x140B72588 (PopSessionConnected.c)
 * Callees:
 *     PopPrintEx @ 0x1404C33A8 (PopPrintEx.c)
 *     PopDiagTraceSessionStates @ 0x140A3BA08 (PopDiagTraceSessionStates.c)
 *     PopSetPowerSettingValue @ 0x140A3E538 (PopSetPowerSettingValue.c)
 */

__int64 __fastcall PopSetSessionDisplayStatus(unsigned int a1, int a2, char a3)
{
  __int64 *v6; // r8
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISPLAY_STATE, a1, a2);
  v6 = (__int64 *)">>>>>";
  if ( !a3 )
    v6 = qword_140B878C0;
  PopPrintEx(3, (int)"PopAdaptive: %sSession %u display state: %u\n", v6, a1, a2);
  PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 0LL, 4LL, &v8);
  return PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 1LL, 4LL, &v8);
}
