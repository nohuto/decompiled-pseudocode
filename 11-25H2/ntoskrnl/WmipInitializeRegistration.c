/*
 * XREFs of WmipInitializeRegistration @ 0x140C2B580
 * Callers:
 *     WMIInitialize @ 0x140C2B4B8 (WMIInitialize.c)
 *     WmipDriverEntry @ 0x140C2B6E0 (WmipDriverEntry.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140460B30 (ExInitializeNPagedLookasideListInternal.c)
 */

void __fastcall WmipInitializeRegistration(int a1)
{
  if ( a1 )
  {
    WmipRegWorkQueue.Parameter = 0LL;
    WmipRegWorkQueue.WorkerRoutine = (void (__fastcall *)(void *))WmipRegistrationWorker;
    WmipRegWorkQueue.List.Flink = 0LL;
    if ( _InterlockedExchangeAdd(&WmipRegWorkItemCount, 0xFFFFFFFF) != 1 )
      ExQueueWorkItem(&WmipRegWorkQueue, DelayedWorkQueue);
  }
  else
  {
    ExInitializeNPagedLookasideListInternal((__int64)&WmipRegLookaside, 0LL, 0LL, 512, 64, 1382640983, 0, 0);
    WmipRegistrationSpinLock = 0LL;
    WmipCancelSpinLock = 0LL;
  }
}
