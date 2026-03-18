/*
 * XREFs of PopCoalescingSetActiveState @ 0x1404C32B4
 * Callers:
 *     PopCoalescingCallbackWorker @ 0x140B14140 (PopCoalescingCallbackWorker.c)
 * Callees:
 *     KeCancelTimer @ 0x1403AD790 (KeCancelTimer.c)
 *     PopCoalescingSetTimer @ 0x1404C3348 (PopCoalescingSetTimer.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x140A3C4FC (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopCheckResiliencyScenarios @ 0x140A3D444 (PopCheckResiliencyScenarios.c)
 *     PopDiagTraceIoCoalescingOn @ 0x140B2D18C (PopDiagTraceIoCoalescingOn.c)
 *     PopDiagTraceIoCoalescingOff @ 0x140B47D38 (PopDiagTraceIoCoalescingOff.c)
 */

__int64 __fastcall PopCoalescingSetActiveState(char a1)
{
  unsigned int v1; // ebx
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  v1 = 0;
  if ( a1 )
  {
    v3 = PopDppeCoalescingSpindownTimeout;
    if ( PopCoalescingEnforced )
      v3 = PopEnforcedCoalescingSpindownTimeout;
    stru_140F11D08.AbWaitEntryCount |= 1u;
    stru_140F11D08.SchedulerApc.ApcListEntry.Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000008];
    PopCurrentCoalescingSpindownTimeout = v3;
    PopCoalescingSetTimer();
    PopUpdateDiskIdleTimeoutSetting();
    LOBYTE(v1) = PopCoalescingEnforced == 0;
    return PopDiagTraceIoCoalescingOn(v5, v4, v6, v1);
  }
  else
  {
    stru_140F11D08.AbWaitEntryCount &= ~1u;
    PopCurrentCoalescingSpindownTimeout = 0;
    KeCancelTimer((PKTIMER)&stru_140F11D08.600);
    PopCheckResiliencyScenarios();
    PopUpdateDiskIdleTimeoutSetting();
    return PopDiagTraceIoCoalescingOff();
  }
}
