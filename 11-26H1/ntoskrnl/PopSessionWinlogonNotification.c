/*
 * XREFs of PopSessionWinlogonNotification @ 0x140A3B184
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     PopPrintEx @ 0x1404C33A8 (PopPrintEx.c)
 *     PopAcquireAdaptiveLock @ 0x140A3AFDC (PopAcquireAdaptiveLock.c)
 *     PopDiagTraceSessionStates @ 0x140A3BA08 (PopDiagTraceSessionStates.c)
 *     PopReleaseAdaptiveLock @ 0x140A3D6E4 (PopReleaseAdaptiveLock.c)
 *     PopNotifyConsoleUserPresent @ 0x140A3DB40 (PopNotifyConsoleUserPresent.c)
 *     PopSetPowerSettingValue @ 0x140A3E538 (PopSetPowerSettingValue.c)
 */

__int64 __fastcall PopSessionWinlogonNotification(unsigned int a1, __int64 a2)
{
  char v2; // bp
  char v3; // di
  const EVENT_DESCRIPTOR *v5; // rcx
  const char *v6; // rax
  const char *v7; // r8
  __int64 result; // rax
  bool v9; // si
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // [rsp+20h] [rbp-18h]
  BOOL v15; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_BYTE *)(a2 + 5);
  v3 = *(_BYTE *)(a2 + 4);
  v5 = (const EVENT_DESCRIPTOR *)POP_ETW_ADPM_SESSION_LOCKED;
  if ( !v2 )
    v5 = &POP_ETW_ADPM_SESSION_UNLOCKED;
  PopDiagTraceSessionStates(v5);
  v6 = "Locked";
  if ( !v2 )
    v6 = "Unlocked";
  v7 = "Console";
  if ( !v3 )
    v7 = "Remote";
  result = PopPrintEx(3, (int)"PopAdaptive:>>>>> %s session %u is %s\n", v7, a1, v6);
  v9 = 0;
  if ( v3 )
  {
    PopAcquireAdaptiveLock(0);
    if ( v2 )
    {
      BYTE1(PopAdaptiveStandbyLock.ThreadListEntry.Blink) = 1;
    }
    else
    {
      BYTE1(PopAdaptiveStandbyLock.ThreadListEntry.Blink) = 0;
      v9 = BYTE2(PopAdaptiveStandbyLock.ThreadListEntry.Blink) == 0;
    }
    PopReleaseAdaptiveLock(v11, v10, v12, v13, v14);
    v15 = v2 != 0;
    PopSetPowerSettingValue(&GUID_CONSOLE_LOCKED, 0xFFFFFFFFLL, 0LL, 4LL, &v15);
    result = PopSetPowerSettingValue(&GUID_CONSOLE_LOCKED, 0xFFFFFFFFLL, 1LL, 4LL, &v15);
    if ( v9 )
      return PopNotifyConsoleUserPresent(0LL, 10LL);
  }
  return result;
}
