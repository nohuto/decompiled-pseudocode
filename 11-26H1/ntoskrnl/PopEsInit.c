/*
 * XREFs of PopEsInit @ 0x140CDBD48
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopEsWorkItemSchedule @ 0x1409C34D4 (PopEsWorkItemSchedule.c)
 *     ExSubscribeWnfStateChange @ 0x1409C4400 (ExSubscribeWnfStateChange.c)
 *     PoRegisterPowerSettingCallback @ 0x140B080C0 (PoRegisterPowerSettingCallback.c)
 */

void __fastcall PopEsInit(int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  if ( a1 == 1 )
  {
    qword_140F0C508 = 0LL;
    PopEsWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopEsWorker;
    PopEsLock = 0LL;
    PopEsWorkItem.Parameter = 0LL;
    PopEsWorkItem.List.Flink = 0LL;
    PopEsWorkItemSchedule(1);
  }
  else if ( a1 == 3 && *(_DWORD *)&stru_140E67200.WaitBlockFill11[88] )
  {
    if ( stru_140E67200.WaitBlockFill6[80] )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock, a2, a3, a4);
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
      ExSubscribeWnfStateChange((__int64)&PopEsWnfSubscriptionOpportunisticCs, (__int64)&WNF_PO_OPPORTUNISTIC_CS);
      PopReleaseRwLock((struct _KTHREAD *)&PopEsLock);
    }
  }
}
