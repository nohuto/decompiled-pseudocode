/*
 * XREFs of PfpServiceMainThreadUnboost @ 0x1404F3EC0
 * Callers:
 *     PfPowerActionNotify @ 0x140C0D3C0 (PfPowerActionNotify.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027BDE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PfpServiceMainThreadUnboost(_DWORD *P)
{
  void *UserWaitTime; // rbx
  KIRQL v3; // si
  __int64 v4; // r8
  unsigned __int64 v5; // rcx

  UserWaitTime = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&stru_140E66D40.InGlobalUpdateVpThreadPriorityList);
  if ( !P || stru_140E66D40.SchedulerAssistPriorityFloor == P[41] )
  {
    UserWaitTime = (void *)stru_140E66D40.UserWaitTime;
    if ( stru_140E66D40.UserWaitTime )
    {
      v5 = stru_140E66D40.UserWaitTime;
      stru_140E66D40.UserWaitTime = 0LL;
      KeSetActualBasePriorityThread(v5, LODWORD(stru_140E66D40.GlobalUpdateVpThreadPriorityListEntry.Flink), v4);
    }
  }
  KeReleaseSpinLock(&stru_140E66D40.InGlobalUpdateVpThreadPriorityList, v3);
  if ( UserWaitTime )
    ObDereferenceObjectDeferDeleteWithTag(UserWaitTime, 0x746C6644u);
  if ( P )
    ExFreePoolWithTag(P, 0);
}
