/*
 * XREFs of PpmProfileAcDcUpdate @ 0x1409C12F4
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1409C2820 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1409C17C0 (PpmCompareAndApplyPolicySettings.c)
 */

__int64 __fastcall PpmProfileAcDcUpdate(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 Next_high; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  void *v7; // r9
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  Next_high = SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next);
  PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, a2, a3);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PpmIdlePolicyLock, v4, v5, v6);
  v7 = PpmCurrentProfile;
  v9 = PpmPolicySettingGlobalMask;
  LOBYTE(v7) = 1;
  return ((__int64 (__fastcall *)(__int128 *, char *, char *, void *))PpmCompareAndApplyPolicySettings)(
           &v9,
           (char *)PpmCurrentProfile + (-(__int64)((_DWORD)Next_high != 0) & 0xFFFFFFFFFFFFFD38uLL) + 752,
           (char *)PpmCurrentProfile + 712 * Next_high + 40,
           v7);
}
