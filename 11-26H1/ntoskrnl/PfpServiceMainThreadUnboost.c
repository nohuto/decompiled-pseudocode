/*
 * XREFs of PfpServiceMainThreadUnboost @ 0x1404FA8B0
 * Callers:
 *     PfPowerActionNotify @ 0x140C071B0 (PfPowerActionNotify.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140239560 (KeSetActualBasePriorityThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027C870 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PfpServiceMainThreadUnboost(_DWORD *P)
{
  void *UserWaitTime; // rbx
  KIRQL v3; // si
  __int64 v4; // r8
  unsigned __int64 v5; // rcx

  UserWaitTime = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&stru_140E66B30.InGlobalUpdateVpThreadPriorityList);
  if ( !P || stru_140E66B30.SchedulerAssistPriorityFloor == P[41] )
  {
    UserWaitTime = (void *)stru_140E66B30.UserWaitTime;
    if ( stru_140E66B30.UserWaitTime )
    {
      v5 = stru_140E66B30.UserWaitTime;
      stru_140E66B30.UserWaitTime = 0LL;
      KeSetActualBasePriorityThread(v5, LODWORD(stru_140E66B30.GlobalUpdateVpThreadPriorityListEntry.Flink), v4);
    }
  }
  KeReleaseSpinLock(&stru_140E66B30.InGlobalUpdateVpThreadPriorityList, v3);
  if ( UserWaitTime )
    ObDereferenceObjectDeferDeleteWithTag(UserWaitTime, 0x746C6644u);
  if ( P )
    ExFreePoolWithTag(P, 0);
}
