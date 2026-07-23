/*
 * XREFs of PopThermalUpdateTimerPolicy @ 0x140425390
 * Callers:
 *     PopThermalPollingPowerSettingCallback @ 0x140425040 (PopThermalPollingPowerSettingCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     IoCancelIrp @ 0x140495490 (IoCancelIrp.c)
 */

__int64 __fastcall PopThermalUpdateTimerPolicy(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  struct _SINGLE_LIST_ENTRY *i; // rbx
  __int64 result; // rax

  if ( PopThermalPollingMode && PopThermalPollingWakesAllowed != a1 )
  {
    PopThermalPollingWakesAllowed = a1;
    PopAcquireRwLockShared(&PopPolicyDeviceLock, a2, a3, a4);
    for ( i = PpmIdlePolicyLock.SystemAffinityTokenListHead.Next;
          i != &PpmIdlePolicyLock.SystemAffinityTokenListHead;
          i = i->Next )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)&i[54], v4, v5, v6);
      if ( i[29].Next || (BYTE1(i[8].Next) & 1) != 0 && LODWORD(i[13].Next) )
        IoCancelIrp((PIRP)i[7].Next);
      PopReleaseRwLock((struct _KTHREAD *)&i[54]);
    }
    return PopReleaseRwLock((struct _KTHREAD *)&PopPolicyDeviceLock);
  }
  return result;
}
