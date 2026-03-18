/*
 * XREFs of PopUpdateSystemIdleContext @ 0x140945524
 * Callers:
 *     PopUserPresentSetWorker @ 0x1404CF520 (PopUserPresentSetWorker.c)
 *     PopAdaptiveUpdateIdleContextWorker @ 0x1407DDD10 (PopAdaptiveUpdateIdleContextWorker.c)
 *     PopSleepPowerSettingCallback @ 0x140943AD0 (PopSleepPowerSettingCallback.c)
 *     PopApplyPolicy @ 0x140944018 (PopApplyPolicy.c)
 *     PopBatteryApplyCompositeState @ 0x140946EB0 (PopBatteryApplyCompositeState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     SSHSupportIsPlatformAoAc @ 0x1404C9760 (SSHSupportIsPlatformAoAc.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x1404F15DC (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14050EC70 (PopIdleArmAoAcDozeS4Timer.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopFilterCapabilities @ 0x140944D5C (PopFilterCapabilities.c)
 *     PopDiagTraceSystemIdleContextUpdate @ 0x140945714 (PopDiagTraceSystemIdleContextUpdate.c)
 *     PopAdaptiveGetBootIsUnattended @ 0x1409457F4 (PopAdaptiveGetBootIsUnattended.c)
 *     PopPulseSystemIdleEvent @ 0x140A3C2BC (PopPulseSystemIdleEvent.c)
 *     PopIsDozeSupported @ 0x140B2E7C8 (PopIsDozeSupported.c)
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
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopWeakChargerLock.SuspendEvent, v2, v3, v4);
  if ( !PopSystemIdleContext )
    return PopReleaseRwLock((struct _KTHREAD *)&PopWeakChargerLock.SuspendEvent);
  v5 = 0;
  if ( (dword_140F105A0[0] & 3) == 0 || (unsigned __int8)PopAdaptiveGetBootIsUnattended() )
    v5 = 1;
  v6 = dword_140E0B744;
  v7 = 0;
  v8 = dword_140E0B748;
  if ( (*(_DWORD *)&stru_140F10828.WaitBlockFill11[100] & 0x1000000) == 0 )
    v7 = v5;
  v9 = 0;
  v10 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  PopFilterCapabilities((__int64)&stru_140F10828.WaitBlock[0].Thread, (__int64)v14);
  if ( v7 )
  {
    v9 = dword_140F106E0;
    if ( dword_140F106E0 )
    {
      v11 = 4;
      goto LABEL_12;
    }
    v9 = 0;
    goto LABEL_20;
  }
  if ( SSHSupportIsPlatformAoAc() )
  {
    if ( *((_DWORD *)qword_140F105C0 + 15) )
    {
      v9 = *((_DWORD *)qword_140F105C0 + 15);
      v11 = 1;
      goto LABEL_12;
    }
    goto LABEL_20;
  }
  if ( *((_DWORD *)qword_140F105C0 + 15) && (v14[3] || v14[4] || v14[5]) )
  {
    v9 = *((_DWORD *)qword_140F105C0 + 15);
    v11 = 2;
  }
  else
  {
    if ( !*((_DWORD *)qword_140F105C0 + 22) || !(unsigned __int8)PopIsDozeSupported(v14) )
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
    if ( LOBYTE(stru_140F0F620.Padding[1]) )
      PopIdleArmAoAcDozeS4Timer();
  }
  dword_140E0B744 = v11;
  dword_140E0B748 = v9;
  qword_140E0B870 = v10;
  dword_140E0B878 = a1;
  dword_140E0B87C = v6;
  dword_140E0B880 = v8;
  PopDiagTraceSystemIdleContextUpdate(a1, v6, v8, v11, v9);
  return PopReleaseRwLock((struct _KTHREAD *)&PopWeakChargerLock.SuspendEvent);
}
