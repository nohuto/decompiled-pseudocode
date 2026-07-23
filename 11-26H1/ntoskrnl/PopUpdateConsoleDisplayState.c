/*
 * XREFs of PopUpdateConsoleDisplayState @ 0x1409F877C
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PopUpdateLastUserInputTime @ 0x1409F794C (PopUpdateLastUserInputTime.c)
 *     PopRecordDisplayState @ 0x1409F7D28 (PopRecordDisplayState.c)
 *     PopDiagTraceConsoleDisplayState @ 0x1409F7D74 (PopDiagTraceConsoleDisplayState.c)
 *     PopSpoilBatteryEstimate @ 0x1409F7E00 (PopSpoilBatteryEstimate.c)
 *     PopCheckResiliencyScenarios @ 0x1409F8E64 (PopCheckResiliencyScenarios.c)
 *     PopSetPowerSettingValue @ 0x1409F9F58 (PopSetPowerSettingValue.c)
 */

__int64 __fastcall PopUpdateConsoleDisplayState(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _KLOCK_ENTRIES *v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  __int64 result; // rax
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1;
  if ( PopConsoleDisplayState != (_DWORD)a1 )
  {
    PopConsoleDisplayState = a1;
    if ( qword_140E67838 )
      guard_dispatch_icall_no_overrides(a1, a2);
    PopDiagTraceConsoleDisplayState(v2);
    PopCheckResiliencyScenarios();
    Buffer = PopConsoleDisplayState;
    PopSetPowerSettingValue(&GUID_CONSOLE_DISPLAY_STATE, 0xFFFFFFFFLL, 0LL, 4LL, &Buffer);
    PopSetPowerSettingValue(&GUID_CONSOLE_DISPLAY_STATE, 0xFFFFFFFFLL, 1LL, 4LL, &Buffer);
    PopRecordDisplayState(v2, v3, v4, v5);
    Buffer = PopConsoleDisplayState != 0;
    PopSetPowerSettingValue(&GUID_MONITOR_POWER_ON, 0xFFFFFFFFLL, 0LL, 4LL, &Buffer);
    PopSetPowerSettingValue(&GUID_MONITOR_POWER_ON, 0xFFFFFFFFLL, 1LL, 4LL, &Buffer);
    ZwUpdateWnfStateData(&WNF_UBPM_CONSOLE_MONITOR, &Buffer, 4u, 0LL, 0LL, 0, 0);
    PopSpoilBatteryEstimate(0, PopConsoleDisplayState == 0);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopSystemIdleLock, v6, v7, v8);
    PopUpdateLastUserInputTime();
    dword_140E0B764 = v2;
    return PopReleaseRwLock((struct _KTHREAD *)&PopSystemIdleLock);
  }
  return result;
}
