/*
 * XREFs of PopEnforceDeepSleep @ 0x140B52B14
 * Callers:
 *     PopEnforceResiliencyScenarios @ 0x140B52A88 (PopEnforceResiliencyScenarios.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x1403BE008 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1403BE204 (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepEnabled @ 0x1404CB9AC (PopDeepSleepEnabled.c)
 *     KeSetMaxDynamicTickDuration @ 0x1405E7834 (KeSetMaxDynamicTickDuration.c)
 */

void PopEnforceDeepSleep()
{
  unsigned int v0; // ecx
  char v1; // r8

  _InterlockedCompareExchange64(&PopMaxDynamicTickDurationOriginalValue, KiMaxDynamicTickDuration, 0LL);
  if ( PopDeepSleepEnabled() && PopPdcIdleResiliency )
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
    KeSetMaxDynamicTickDuration(PopMaxDynamicTickDurationOriginalValue);
    PopDeepSleepEnforced = 0;
    PopDeepSleepSetDisengageReason(0);
    if ( !BYTE4(PpmIdlePolicyLock.Padding[3]) )
      PopDeepSleepSetDisengageReason(1u);
  }
}
