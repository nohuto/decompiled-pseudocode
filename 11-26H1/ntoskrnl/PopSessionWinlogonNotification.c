/*
 * XREFs of PopSessionWinlogonNotification @ 0x140B776DC
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     PopPrintEx @ 0x1404BCBF8 (PopPrintEx.c)
 *     Feature_RemUserPresentSessionUnlock__private_IsEnabledDeviceUsageNoInline @ 0x140613C6C (Feature_RemUserPresentSessionUnlock__private_IsEnabledDeviceUsageNoInline.c)
 *     PopDiagTraceSessionStates @ 0x1409F7428 (PopDiagTraceSessionStates.c)
 *     PopReleaseAdaptiveLock @ 0x1409F9104 (PopReleaseAdaptiveLock.c)
 *     PopNotifyConsoleUserPresent @ 0x1409F9560 (PopNotifyConsoleUserPresent.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409F9E70 (PopSetPowerSettingValueAcDc.c)
 *     PopAcquireAdaptiveLock @ 0x140ABAFAC (PopAcquireAdaptiveLock.c)
 */

__int64 __fastcall PopSessionWinlogonNotification(unsigned int a1, __int64 a2)
{
  char v2; // si
  char v3; // di
  const EVENT_DESCRIPTOR *v5; // rcx
  const char *v6; // rax
  const char *v7; // r8
  __int64 result; // rax
  bool v9; // bl
  __int64 v10; // r8
  BOOL v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_BYTE *)(a2 + 5);
  v3 = *(_BYTE *)(a2 + 4);
  v5 = (const EVENT_DESCRIPTOR *)POP_ETW_ADPM_SESSION_LOCKED;
  if ( !v2 )
    v5 = &POP_ETW_ADPM_SESSION_UNLOCKED;
  PopDiagTraceSessionStates(v5, a1, *(unsigned __int8 *)(a2 + 4));
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
      byte_140F0C061 = 1;
    }
    else
    {
      byte_140F0C061 = 0;
      if ( !(unsigned int)Feature_RemUserPresentSessionUnlock__private_IsEnabledDeviceUsageNoInline() )
        v9 = byte_140F0C062 == 0;
    }
    PopReleaseAdaptiveLock();
    v11 = v2 != 0;
    PopSetPowerSettingValueAcDc((__int64)&GUID_CONSOLE_LOCKED, 4u, (__int64)&v11);
    result = Feature_RemUserPresentSessionUnlock__private_IsEnabledDeviceUsageNoInline();
    if ( !(_DWORD)result && v9 )
      return PopNotifyConsoleUserPresent(0LL, 0xAu, v10);
  }
  return result;
}
