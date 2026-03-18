/*
 * XREFs of PopUpdateConsoleDisplayState @ 0x140A3CD5C
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PopUpdateLastUserInputTime @ 0x140A3BF2C (PopUpdateLastUserInputTime.c)
 *     PopRecordDisplayState @ 0x140A3C308 (PopRecordDisplayState.c)
 *     PopDiagTraceConsoleDisplayState @ 0x140A3C354 (PopDiagTraceConsoleDisplayState.c)
 *     PopSpoilBatteryEstimate @ 0x140A3C3E0 (PopSpoilBatteryEstimate.c)
 *     PopCheckResiliencyScenarios @ 0x140A3D444 (PopCheckResiliencyScenarios.c)
 *     PopSetPowerSettingValue @ 0x140A3E538 (PopSetPowerSettingValue.c)
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
  int v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1;
  if ( PopConsoleDisplayState != (_DWORD)a1 )
  {
    PopConsoleDisplayState = a1;
    if ( qword_140E675D8 )
      guard_dispatch_icall_no_overrides(a1, a2);
    PopDiagTraceConsoleDisplayState(v2);
    PopCheckResiliencyScenarios();
    v10 = PopConsoleDisplayState;
    PopSetPowerSettingValue(&GUID_CONSOLE_DISPLAY_STATE, 0xFFFFFFFFLL, 0LL, 4LL, &v10);
    PopSetPowerSettingValue(&GUID_CONSOLE_DISPLAY_STATE, 0xFFFFFFFFLL, 1LL, 4LL, &v10);
    PopRecordDisplayState(v2, v3, v4, v5);
    v10 = PopConsoleDisplayState != 0;
    PopSetPowerSettingValue(&GUID_MONITOR_POWER_ON, 0xFFFFFFFFLL, 0LL, 4LL, &v10);
    PopSetPowerSettingValue(&GUID_MONITOR_POWER_ON, 0xFFFFFFFFLL, 1LL, 4LL, &v10);
    ZwUpdateWnfStateData((__int64)&WNF_UBPM_CONSOLE_MONITOR, (__int64)&v10);
    PopSpoilBatteryEstimate(0, PopConsoleDisplayState == 0);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopWeakChargerLock.SuspendEvent, v6, v7, v8);
    PopUpdateLastUserInputTime();
    dword_140E0B754 = v2;
    return PopReleaseRwLock((struct _KTHREAD *)&PopWeakChargerLock.SuspendEvent);
  }
  return result;
}
