/*
 * XREFs of PopCoalescingInitialize @ 0x140CD13D8
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     PopUpdateDiskIdleTimeoutSetting @ 0x140A3C4FC (PopUpdateDiskIdleTimeoutSetting.c)
 *     PoRegisterCoalescingCallback @ 0x140B5D720 (PoRegisterCoalescingCallback.c)
 */

__int64 PopCoalescingInitialize()
{
  __int64 result; // rax

  stru_140F11D08.AbWaitEntryCount &= 0xF0u;
  stru_140F11D08.MutantListHead.Flink = (struct _LIST_ENTRY *)PopCoalescingCallbackWorker;
  stru_140F11D08.MutantListHead.Blink = 0LL;
  stru_140F11D08.ThreadListEntry.Flink = 0LL;
  result = PoRegisterCoalescingCallback(
             (__int64)xHalTimerWatchdogStop,
             0,
             (__int64 *)&stru_140F11D08.AffinityPrimaryGroup,
             0LL);
  if ( (int)result >= 0 )
  {
    stru_140F11D08.SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)8;
    stru_140F11D08.SavedApcState.ApcListHead[1].Flink = (struct _LIST_ENTRY *)&stru_140F11D08.SavedApcState.ApcListHead[0].Blink;
    stru_140F11D08.SavedApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)&stru_140F11D08.SavedApcState.ApcListHead[0].Blink;
    stru_140F11D08.SchedulerApc.SystemArgument2 = PopCoalesingTimerDpcCallback;
    stru_140F11D08.SavedApcState.ApcListHead[1].Blink = 0LL;
    *(_DWORD *)&stru_140F11D08.SchedulerApcFill5[12] = 0;
    *(_WORD *)&stru_140F11D08.SchedulerApcFill5[8] = 0;
    stru_140F11D08.SchedulerApcFill3[11] = 0;
    *(_DWORD *)&stru_140F11D08.SchedulerApcFill5[48] = 275;
    *(_QWORD *)&stru_140F11D08.SchedulerApcFill5[80] = 0LL;
    stru_140F11D08.SuspendEvent.Header.WaitListHead.Blink = 0LL;
    stru_140F11D08.SchedulerApc.SystemArgument1 = 0LL;
    return PopUpdateDiskIdleTimeoutSetting();
  }
  return result;
}
