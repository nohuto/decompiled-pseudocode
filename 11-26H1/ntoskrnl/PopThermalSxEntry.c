/*
 * XREFs of PopThermalSxEntry @ 0x14042408C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopThermalStandbyEndTracking @ 0x140423E3C (PopThermalStandbyEndTracking.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 *     PopCoolingSxTransition @ 0x140424E88 (PopCoolingSxTransition.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x14050A090 (PopTraceThermalZonePassiveHistogram.c)
 *     PopPowerLimitSxTransition @ 0x14052BF20 (PopPowerLimitSxTransition.c)
 *     PopTraceThermalZoneActiveActivity @ 0x14060CD80 (PopTraceThermalZoneActiveActivity.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140B31158 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140B43630 (PopThermalUpdateActiveTimeTracking.c)
 */

__int64 PopThermalSxEntry()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  struct _SINGLE_LIST_ENTRY *i; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx

  result = (unsigned int)_InterlockedExchange(&PopThermalStateTransitionInProgress, 1);
  if ( !(_DWORD)result )
  {
    PopAcquireRwLockExclusive(&PopSystemThermalInfo);
    PopThermalStandbyEndTracking(4LL, v1, v2);
    PopReleaseRwLock((struct _KTHREAD *)&PopSystemThermalInfo);
    PopAcquireRwLockShared(&PopPolicyDeviceLock);
    for ( i = PpmIdlePolicyLock.SystemAffinityTokenListHead.Next;
          i != &PpmIdlePolicyLock.SystemAffinityTokenListHead;
          i = i->Next )
    {
      PopAcquireRwLockExclusive(&i[54]);
      if ( BYTE1(i[18].Next) )
      {
        LOBYTE(v4) = i[10].Next;
        PopThermalUpdatePassiveTimeTracking(&i[63], v4);
        PopTraceThermalZonePassiveHistogram(i);
      }
      if ( BYTE1(i[63].Next) )
      {
        LOBYTE(v4) = BYTE5(i[8].Next);
        PopThermalUpdateActiveTimeTracking(&i[63], v4);
        PopTraceThermalZoneActiveActivity(i);
      }
      LOBYTE(i[63].Next) = 1;
      PopReleaseRwLock((struct _KTHREAD *)&i[54]);
    }
    PopReleaseRwLock((struct _KTHREAD *)&PopPolicyDeviceLock);
    LOBYTE(v5) = 1;
    PopCoolingSxTransition(v5);
    LOBYTE(v6) = 1;
    PopPowerLimitSxTransition(v6);
    PopAcquireRwLockExclusive(&PopThermalStateTransitionContext);
    byte_140F0FCF0 = 0;
    return PopReleaseRwLock((struct _KTHREAD *)&PopThermalStateTransitionContext);
  }
  return result;
}
