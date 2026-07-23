/*
 * XREFs of PopUpdateSystemIdleContext @ 0x1409C0E94
 * Callers:
 *     PopUserPresentSetWorker @ 0x1404C8F50 (PopUserPresentSetWorker.c)
 *     PopAdaptiveUpdateIdleContextWorker @ 0x1407E2340 (PopAdaptiveUpdateIdleContextWorker.c)
 *     PopSleepPowerSettingCallback @ 0x1409BF440 (PopSleepPowerSettingCallback.c)
 *     PopApplyPolicy @ 0x1409BF988 (PopApplyPolicy.c)
 *     PopBatteryApplyCompositeState @ 0x1409C2820 (PopBatteryApplyCompositeState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     SSHSupportIsPlatformAoAc @ 0x1404C3180 (SSHSupportIsPlatformAoAc.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x1404EABBC (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1405086E0 (PopIdleArmAoAcDozeS4Timer.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopFilterCapabilities @ 0x1409C06CC (PopFilterCapabilities.c)
 *     PopDiagTraceSystemIdleContextUpdate @ 0x1409C1084 (PopDiagTraceSystemIdleContextUpdate.c)
 *     PopAdaptiveGetBootIsUnattended @ 0x1409C1164 (PopAdaptiveGetBootIsUnattended.c)
 *     PopPulseSystemIdleEvent @ 0x1409F7CDC (PopPulseSystemIdleEvent.c)
 *     PopIsDozeSupported @ 0x140B30718 (PopIsDozeSupported.c)
 */

__int64 __fastcall PopUpdateSystemIdleContext(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  struct _KLOCK_ENTRIES *v4; // r9
  char v5; // di
  int v6; // ebp
  char v7; // bl
  int v8; // r14d
  int v9; // edi
  unsigned __int64 v10; // r15
  int v11; // ebx
  int v13; // r9d
  _BYTE v14[80]; // [rsp+30h] [rbp-68h] BYREF

  memset_0(v14, 0, 0x4CuLL);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopSystemIdleLock, v2, v3, v4);
  if ( !PopSystemIdleContext )
    return PopReleaseRwLock((struct _KTHREAD *)&PopSystemIdleLock);
  v5 = 0;
  if ( ((__int64)PpmIdlePolicyLock.Teb & 3) == 0 || (unsigned __int8)PopAdaptiveGetBootIsUnattended() )
    v5 = 1;
  v6 = dword_140E0B754;
  v7 = 0;
  v8 = dword_140E0B758;
  if ( (PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime & 0x1000000) == 0 )
    v7 = v5;
  v9 = 0;
  v10 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  PopFilterCapabilities((__int64)&PpmIdlePolicyLock.Padding[1], (__int64)v14);
  if ( v7 )
  {
    v9 = *(_DWORD *)&PpmIdlePolicyLock.PriorityFloorCounts[8];
    if ( *(_DWORD *)&PpmIdlePolicyLock.PriorityFloorCounts[8] )
    {
      v11 = 4;
      goto LABEL_12;
    }
    v9 = 0;
    goto LABEL_20;
  }
  if ( SSHSupportIsPlatformAoAc() )
  {
    if ( *(_DWORD *)(PpmIdlePolicyLock.WriteOperationCount + 60) )
    {
      v9 = *(_DWORD *)(PpmIdlePolicyLock.WriteOperationCount + 60);
      v11 = 1;
      goto LABEL_12;
    }
    goto LABEL_20;
  }
  if ( *(_DWORD *)(PpmIdlePolicyLock.WriteOperationCount + 60) && (v14[3] || v14[4] || v14[5]) )
  {
    v9 = *(_DWORD *)(PpmIdlePolicyLock.WriteOperationCount + 60);
    v11 = 2;
  }
  else
  {
    if ( !*(_DWORD *)(PpmIdlePolicyLock.WriteOperationCount + 88) || !(unsigned __int8)PopIsDozeSupported(v14) )
    {
LABEL_20:
      v11 = 5;
      goto LABEL_12;
    }
    v9 = v13;
    v11 = 3;
  }
LABEL_12:
  if ( a1 == 1 || a1 == 4 )
    PopPulseSystemIdleEvent(3LL);
  if ( a1 == 3 )
  {
    PopIdleCancelAoAcDozeS4Timer(6u);
    if ( byte_140F10360 )
      PopIdleArmAoAcDozeS4Timer();
  }
  dword_140E0B754 = v11;
  dword_140E0B758 = v9;
  qword_140E0B880 = v10;
  dword_140E0B888 = a1;
  dword_140E0B88C = v6;
  dword_140E0B890 = v8;
  PopDiagTraceSystemIdleContextUpdate(a1, v6, v8, v11, v9);
  return PopReleaseRwLock((struct _KTHREAD *)&PopSystemIdleLock);
}
