/*
 * XREFs of PopEnforceResiliencyScenarios @ 0x140B501F8
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmReleaseLock @ 0x14037AFBC (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x140394368 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x1404EFF10 (PopEnsureCoalescingWorkerWillRun.c)
 *     PopEnforceDeepSleep @ 0x140B50284 (PopEnforceDeepSleep.c)
 */

void __fastcall PopEnforceResiliencyScenarios(int *a1)
{
  __int64 v2; // rdx
  unsigned int v3; // r8d
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  int v8; // ecx

  PopEnforceDeepSleep((unsigned int)a1[1]);
  PpmAcquireLock((struct _KTHREAD **)&qword_140F123A0, v2, v3);
  PoFxSendSystemLatencyUpdate(v5, v4, v6, v7);
  PpmReleaseLock(&qword_140F123A0);
  v8 = *a1;
  if ( *a1 )
  {
    if ( PopCurrentCoalescingSpindownTimeout )
      return;
    stru_140F11D08.AbWaitEntryCount |= 2u;
    PopCoalescingEnforced = 1;
    PopEnforcedCoalescingSpindownTimeout = v8;
    goto LABEL_7;
  }
  if ( PopCurrentCoalescingSpindownTimeout && PopCoalescingEnforced )
  {
    stru_140F11D08.AbWaitEntryCount &= ~2u;
    PopEnforcedCoalescingSpindownTimeout = 0;
    PopCoalescingEnforced = 0;
LABEL_7:
    PopEnsureCoalescingWorkerWillRun();
  }
}
