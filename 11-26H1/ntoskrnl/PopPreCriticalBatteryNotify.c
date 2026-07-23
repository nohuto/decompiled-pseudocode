/*
 * XREFs of PopPreCriticalBatteryNotify @ 0x1407D8A50
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerAggregatorForceSessionSwitch @ 0x1407D9B50 (PopPowerAggregatorForceSessionSwitch.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopPreCriticalBatteryNotify(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // [rsp+20h] [rbp-8h]

  PopAcquirePolicyLock(a1, a2);
  PopPowerAggregatorForceSessionSwitch(45LL);
  PopReleasePolicyLock(v3, v2, v4, v5, v7);
  return 0LL;
}
