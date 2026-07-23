/*
 * XREFs of PopCheckResiliencyScenarios @ 0x1409F8E64
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1404BCB04 (PopCoalescingSetActiveState.c)
 *     PopCoalescingPowerSettingCallback @ 0x1407D2400 (PopCoalescingPowerSettingCallback.c)
 *     PopDeepSleepPowerSettingCallback @ 0x1407DA300 (PopDeepSleepPowerSettingCallback.c)
 *     PopUpdateConsoleDisplayState @ 0x1409F877C (PopUpdateConsoleDisplayState.c)
 *     PdcPoResiliencyClient @ 0x1409F8AE0 (PdcPoResiliencyClient.c)
 *     PopPowerRequestCallbackExecutionRequired @ 0x1409F8DB0 (PopPowerRequestCallbackExecutionRequired.c)
 *     PopPdcIdleResiliencyCallback @ 0x1409F8FCC (PopPdcIdleResiliencyCallback.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1403960E8 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     PopDeepSleepSetDisengageReason @ 0x1403BE008 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1403BE204 (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepEnabled @ 0x1404CB9AC (PopDeepSleepEnabled.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x1404DBB18 (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x1404E94F0 (PopEnsureCoalescingWorkerWillRun.c)
 */

void PopCheckResiliencyScenarios()
{
  char v0; // si
  char v1; // bl
  char v2; // di
  bool v3; // al
  char v4; // r8
  __int64 v5; // rdx
  unsigned int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9

  v0 = PopCurrentCoalescingSpindownTimeout != 0;
  if ( !PopDeepSleepEnforced && !PopCoalescingEnforced )
  {
    v1 = 1;
    if ( BYTE4(PpmIdlePolicyLock.Padding[3]) )
    {
      v2 = PopPdcIdleResiliency;
      if ( PopDeepSleepEnabled() )
      {
        if ( v2 )
          PpmDripsStateIndex = PpmGetDeepSleepPlatformStateIndex();
        else
          PpmDripsStateIndex = -1;
      }
    }
    else
    {
      v2 = 0;
    }
    v3 = PopDeepSleepEnabled();
    if ( !v4 || !PopDppeCoalescingSpindownTimeout )
      v1 = 0;
    if ( v2 && v3 )
    {
      PopDeepSleepClearDisengageReason(0);
    }
    else
    {
      PopDeepSleepSetDisengageReason(0);
      if ( BYTE4(PpmIdlePolicyLock.Padding[3]) && !PopDeepSleepEnabled() )
      {
        PpmAcquireLock((struct _KTHREAD **)&qword_140F12AA0, v5, v6);
        if ( PopIdleResiliencyIsEngagedWithoutDeepSleep != v2 )
        {
          PopIdleResiliencyIsEngagedWithoutDeepSleep = v2;
          PoFxSendSystemLatencyUpdate(v8, v7, v9, v10);
        }
        PpmReleaseLock(&qword_140F12AA0);
      }
    }
    if ( v1 != v0 )
    {
      PopCoalescingState = (2 * v1) | PopCoalescingState & 0xFD;
      PopEnsureCoalescingWorkerWillRun();
    }
  }
}
