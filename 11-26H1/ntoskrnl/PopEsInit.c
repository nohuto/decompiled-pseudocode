/*
 * XREFs of PopEsInit @ 0x140CD59F4
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopEsWorkItemSchedule @ 0x140947B64 (PopEsWorkItemSchedule.c)
 *     ExSubscribeWnfStateChange @ 0x140948A90 (ExSubscribeWnfStateChange.c)
 *     PoRegisterPowerSettingCallback @ 0x140B05F90 (PoRegisterPowerSettingCallback.c)
 */

void __fastcall PopEsInit(int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  if ( a1 == 1 )
  {
    *(_QWORD *)&PopModernStandbyStateNotify.AbWaitEntryCount = 0LL;
    PopEsWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopEsWorker;
    PopModernStandbyStateNotify.MutantListHead.Blink = 0LL;
    PopEsWorkItem.Parameter = 0LL;
    PopEsWorkItem.List.Flink = 0LL;
    PopEsWorkItemSchedule(1);
  }
  else if ( a1 == 3 && *(_DWORD *)&stru_140E66FF0.WaitBlockFill11[80] )
  {
    if ( stru_140E66FF0.WaitBlockFill6[84] )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopModernStandbyStateNotify.MutantListHead.Blink, a2, a3, a4);
      PoRegisterPowerSettingCallback(
        0LL,
        &GUID_ACDC_POWER_SOURCE,
        (PPOWER_SETTING_CALLBACK)PopEsInStandbyAcDcCallback,
        0LL,
        0LL);
      PoRegisterPowerSettingCallback(
        0LL,
        &GUID_LOW_POWER_EPOCH,
        (PPOWER_SETTING_CALLBACK)PopEsInStandbyLowPowerEpochCallback,
        0LL,
        0LL);
      ExSubscribeWnfStateChange(
        (__int64)&PopModernStandbyStateNotify.ThreadListEntry.Blink,
        (__int64)&WNF_PO_OPPORTUNISTIC_CS);
      PopReleaseRwLock((struct _KTHREAD *)&PopModernStandbyStateNotify.MutantListHead.Blink);
    }
  }
}
