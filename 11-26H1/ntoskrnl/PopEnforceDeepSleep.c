/*
 * XREFs of PopEnforceDeepSleep @ 0x140B50284
 * Callers:
 *     PopEnforceResiliencyScenarios @ 0x140B501F8 (PopEnforceResiliencyScenarios.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x1403B40FC (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1403B42F8 (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepEnabled @ 0x1404D1DFC (PopDeepSleepEnabled.c)
 *     KeSetMaxDynamicTickDuration @ 0x1405E4EC4 (KeSetMaxDynamicTickDuration.c)
 */

void PopEnforceDeepSleep()
{
  unsigned int v0; // ecx
  char v1; // r8

  _InterlockedCompareExchange64(
    (volatile signed __int64 *)&PopWeakChargerLock.SchedulerApc.ApcListEntry.Blink,
    KiMaxDynamicTickDuration,
    0LL);
  if ( PopDeepSleepEnabled() && unk_140F10DC0 )
    v1 = 1;
  if ( v0 )
  {
    if ( !v1 )
    {
      if ( !PopDeepSleepEnforced )
      {
        KeSetMaxDynamicTickDuration(10000000LL * v0);
        PopDeepSleepEnforced = 1;
        PopDeepSleepClearDisengageReason(0);
        PopDeepSleepClearDisengageReason(1u);
      }
      return;
    }
  }
  else if ( !v1 )
  {
    return;
  }
  if ( PopDeepSleepEnforced )
  {
    KeSetMaxDynamicTickDuration((unsigned __int64)PopWeakChargerLock.SchedulerApc.ApcListEntry.Blink);
    PopDeepSleepEnforced = 0;
    PopDeepSleepSetDisengageReason(0);
    if ( !stru_140F10828.WaitBlockFill5[44] )
      PopDeepSleepSetDisengageReason(1u);
  }
}
