/*
 * XREFs of PfpScenCtxScenarioSet @ 0x140C10118
 * Callers:
 *     PfpProcessScenarioPhase @ 0x140B1F0C8 (PfpProcessScenarioPhase.c)
 *     PfPowerActionNotify @ 0x140C0D3C0 (PfPowerActionNotify.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140264BE0 (ObDereferenceObjectDeferDelete.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PfpScenCtxWaiterTimedOut @ 0x1406028B4 (PfpScenCtxWaiterTimedOut.c)
 *     PfpServiceMainThreadBoost @ 0x1406028E4 (PfpServiceMainThreadBoost.c)
 *     PfpServiceMainThreadBoostPrep @ 0x1407C9108 (PfpServiceMainThreadBoostPrep.c)
 *     PfpScenCtxPrefetchAbortSet @ 0x140BFE8B0 (PfpScenCtxPrefetchAbortSet.c)
 *     PfpScenCtxPrefetchStateSet @ 0x140BFE9BC (PfpScenCtxPrefetchStateSet.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PfpScenCtxScenarioSet(struct _KTHREAD *a1, int a2, int a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // r14
  KPRIORITY v12; // ebp
  int StackLimit; // edx
  PVOID Object[5]; // [rsp+30h] [rbp-28h] BYREF

  *(_OWORD *)Object = 0LL;
  if ( ((a3 - 1) & 0xFFFFFFFA) == 0 && a3 != 6 )
    PfpServiceMainThreadBoostPrep((__int64)a1, (PETHREAD *)Object);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64(&a1->Header.Lock, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1, v9, (__int64)a1);
  v12 = 1;
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  if ( a3 || LODWORD(a1->StackLimit) == a2 )
  {
    StackLimit = (int)a1->StackLimit;
    if ( StackLimit )
    {
      PfpScenCtxPrefetchStateSet(a1, StackLimit, 0, (struct _KLOCK_ENTRIES *)1);
      PfpScenCtxWaiterTimedOut((__int64)a1);
      PfpScenCtxPrefetchAbortSet(a1, (int)a1->StackLimit, 0LL, (struct _KLOCK_ENTRIES *)1, 1);
      LODWORD(a1->Header.WaitListHead.Flink) &= 0xFFFFFFF3;
    }
    if ( LODWORD(a1->StackLimit) || a3 )
    {
      LODWORD(a1->StackLimit) = a3;
      if ( a3 )
      {
        ++HIDWORD(a1->StackLimit);
        if ( a3 == 3 )
          a1->StackBase = a4;
        if ( Object[0] )
        {
          PfpServiceMainThreadBoost((__int64)a1, (__int64 *)Object);
          v12 = 0;
        }
        else
        {
          v12 = 4;
        }
      }
      KeSetEvent((PRKEVENT)a1->ThreadLock, v12, 0);
    }
    else
    {
      LODWORD(a1->StackLimit) = 0;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
  KeAbPostRelease((unsigned __int64)a1);
  KeLeaveCriticalRegion();
  if ( Object[0] )
    ObDereferenceObjectDeferDelete(Object[0]);
  if ( Object[1] )
    ExFreePoolWithTag(Object[1], 0);
}
