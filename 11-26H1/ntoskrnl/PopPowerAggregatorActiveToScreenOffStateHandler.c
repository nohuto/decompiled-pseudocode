/*
 * XREFs of PopPowerAggregatorActiveToScreenOffStateHandler @ 0x1407D64E0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1404E6C14 (PopGetMonitorReasonFromPowerEventId.c)
 *     Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline @ 0x1406004D0 (Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140A38D30 (PopPowerAggregatorSetCurrentState.c)
 *     PopSleepstudyStartNextSession @ 0x140A39120 (PopSleepstudyStartNextSession.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopPowerAggregatorActiveToScreenOffStateHandler(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( PopPowerAggregatorUmpoInitialized )
  {
    memset(v14, 0, 32);
    LODWORD(v14[0]) = 3;
    PopPowerAggregatorSetCurrentState(a1, v14);
    v2 = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 304) = 0;
    v3 = PopGetMonitorReasonFromPowerEventId(v2) & 0xFFFFFF;
    PopReleaseRwLock(&PopPowerAggregatorLock);
    if ( !(unsigned int)Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline() )
    {
      Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline();
      PopAcquirePolicyLock(v5, v4);
      LODWORD(stru_140F0F620.KcsanThread) = 0;
      PopReleasePolicyLock(v7, v6, v8, v9, v14[0]);
    }
    PopSleepstudyStartNextSession(1LL, (unsigned int)v3);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, v10, v11, v12);
  }
  return 0LL;
}
