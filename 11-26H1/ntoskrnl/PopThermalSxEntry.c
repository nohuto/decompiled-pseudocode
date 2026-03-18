/*
 * XREFs of PopThermalSxEntry @ 0x1404351B4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopThermalStandbyEndTracking @ 0x140434F64 (PopThermalStandbyEndTracking.c)
 *     PopCoolingSxTransition @ 0x1404359C0 (PopCoolingSxTransition.c)
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140510620 (PopTraceThermalZonePassiveHistogram.c)
 *     PopPowerLimitSxTransition @ 0x140529A8C (PopPowerLimitSxTransition.c)
 *     PopTraceThermalZoneActiveActivity @ 0x14060A1C0 (PopTraceThermalZoneActiveActivity.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140B2F378 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140B41620 (PopThermalUpdateActiveTimeTracking.c)
 */

__int64 PopThermalSxEntry()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  void **i; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx

  result = (unsigned int)_InterlockedExchange((volatile __int32 *)&stru_140F0F620.WpsFeedback, 1);
  if ( !(_DWORD)result )
  {
    PopAcquireRwLockExclusive(&stru_140F0F620.SchedulerAssistPriorityFloor);
    PopThermalStandbyEndTracking(4LL, v1, v2);
    PopReleaseRwLock((struct _KTHREAD *)&stru_140F0F620.SchedulerAssistPriorityFloor);
    PopAcquireRwLockShared(&unk_140F10E30);
    for ( i = (void **)stru_140F10828.FirstArgument; i != &stru_140F10828.FirstArgument; i = (void **)*i )
    {
      PopAcquireRwLockExclusive(i + 54);
      if ( *((_BYTE *)i + 145) )
      {
        LOBYTE(v4) = *((_BYTE *)i + 80);
        PopThermalUpdatePassiveTimeTracking(i + 63, v4);
        PopTraceThermalZonePassiveHistogram(i);
      }
      if ( *((_BYTE *)i + 505) )
      {
        LOBYTE(v4) = *((_BYTE *)i + 69);
        PopThermalUpdateActiveTimeTracking(i + 63, v4);
        PopTraceThermalZoneActiveActivity(i);
      }
      *((_BYTE *)i + 504) = 1;
      PopReleaseRwLock((struct _KTHREAD *)(i + 54));
    }
    PopReleaseRwLock(&unk_140F10E30);
    LOBYTE(v5) = 1;
    PopCoolingSxTransition(v5);
    LOBYTE(v6) = 1;
    PopPowerLimitSxTransition(v6);
    PopAcquireRwLockExclusive(&stru_140F0F620.Spare35[1]);
    LOBYTE(stru_140F0F620.SystemAffinityTokenListHead.Next) = 0;
    return PopReleaseRwLock((struct _KTHREAD *)&stru_140F0F620.Spare35[1]);
  }
  return result;
}
