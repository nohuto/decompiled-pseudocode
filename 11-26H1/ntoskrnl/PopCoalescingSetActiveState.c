/*
 * XREFs of PopCoalescingSetActiveState @ 0x1404BCB04
 * Callers:
 *     PopCoalescingCallbackWorker @ 0x140B16240 (PopCoalescingCallbackWorker.c)
 * Callees:
 *     KeCancelTimer @ 0x1403B74A0 (KeCancelTimer.c)
 *     PopCoalescingSetTimer @ 0x1404BCB98 (PopCoalescingSetTimer.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x1409F7F1C (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopCheckResiliencyScenarios @ 0x1409F8E64 (PopCheckResiliencyScenarios.c)
 *     PopDiagTraceIoCoalescingOn @ 0x140B2F20C (PopDiagTraceIoCoalescingOn.c)
 *     PopDiagTraceIoCoalescingOff @ 0x140B49AC8 (PopDiagTraceIoCoalescingOff.c)
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
    PopCoalescingState |= 1u;
    PopCoalescingLastFlushTime = MEMORY[0xFFFFF78000000008];
    PopCurrentCoalescingSpindownTimeout = v3;
    PopCoalescingSetTimer();
    PopUpdateDiskIdleTimeoutSetting();
    LOBYTE(v1) = PopCoalescingEnforced == 0;
    return PopDiagTraceIoCoalescingOn(v5, v4, v6, v1);
  }
  else
  {
    PopCoalescingState &= ~1u;
    PopCurrentCoalescingSpindownTimeout = 0;
    KeCancelTimer(&PopCoalescingTimer);
    PopCheckResiliencyScenarios();
    PopUpdateDiskIdleTimeoutSetting();
    return PopDiagTraceIoCoalescingOff();
  }
}
