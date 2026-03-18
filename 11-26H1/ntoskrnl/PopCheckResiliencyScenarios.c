/*
 * XREFs of PopCheckResiliencyScenarios @ 0x140A3D444
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1404C32B4 (PopCoalescingSetActiveState.c)
 *     PopCoalescingPowerSettingCallback @ 0x1407CF360 (PopCoalescingPowerSettingCallback.c)
 *     PopDeepSleepPowerSettingCallback @ 0x1407D7200 (PopDeepSleepPowerSettingCallback.c)
 *     PopUpdateConsoleDisplayState @ 0x140A3CD5C (PopUpdateConsoleDisplayState.c)
 *     PdcPoResiliencyClient @ 0x140A3D0C0 (PdcPoResiliencyClient.c)
 *     PopPowerRequestCallbackExecutionRequired @ 0x140A3D390 (PopPowerRequestCallbackExecutionRequired.c)
 *     PopPdcIdleResiliencyCallback @ 0x140A3D5AC (PopPdcIdleResiliencyCallback.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmReleaseLock @ 0x14037AFBC (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x140394368 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     PopDeepSleepSetDisengageReason @ 0x1403B40FC (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1403B42F8 (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepEnabled @ 0x1404D1DFC (PopDeepSleepEnabled.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x1404E2438 (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x1404EFF10 (PopEnsureCoalescingWorkerWillRun.c)
 */

void PopCheckResiliencyScenarios()
{
  char v0; // si
  char v1; // bl
  unsigned __int8 v2; // di
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
    if ( stru_140F10828.WaitBlockFill5[44] )
    {
      v2 = unk_140F10DC0;
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
      if ( stru_140F10828.WaitBlockFill5[44] && !PopDeepSleepEnabled() )
      {
        PpmAcquireLock((struct _KTHREAD **)&qword_140F123A0, v5, v6);
        if ( PopWeakChargerLock.SchedulerApcFill3[18] != v2 )
        {
          PopWeakChargerLock.SchedulerApcFill3[18] = v2;
          PoFxSendSystemLatencyUpdate(v8, v7, v9, v10);
        }
        PpmReleaseLock(&qword_140F123A0);
      }
    }
    if ( v1 != v0 )
    {
      stru_140F11D08.AbWaitEntryCount = (2 * v1) | stru_140F11D08.AbWaitEntryCount & 0xFD;
      PopEnsureCoalescingWorkerWillRun();
    }
  }
}
