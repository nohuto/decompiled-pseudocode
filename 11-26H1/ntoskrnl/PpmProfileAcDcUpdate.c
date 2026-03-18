/*
 * XREFs of PpmProfileAcDcUpdate @ 0x140945984
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140946EB0 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140945E50 (PpmCompareAndApplyPolicySettings.c)
 */

__int64 __fastcall PpmProfileAcDcUpdate(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  __int64 *v7; // r9
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v3 = dword_140F106CC;
  PpmAcquireLock((struct _KTHREAD **)&stru_140F10070.SchedulerAssistLastYieldBoostTime, a2, a3);
  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F10070.1136, v4, v5, v6);
  v7 = PpmCurrentProfile;
  v9 = *(_OWORD *)&PopSleepstudySessionLock.QuantumTarget;
  LOBYTE(v7) = 1;
  return ((__int64 (__fastcall *)(__int128 *, char *, __int64 *, __int64 *))PpmCompareAndApplyPolicySettings)(
           &v9,
           (char *)PpmCurrentProfile + (-(__int64)((_DWORD)v3 != 0) & 0xFFFFFFFFFFFFFD38uLL) + 752,
           &PpmCurrentProfile[89 * v3 + 5],
           v7);
}
