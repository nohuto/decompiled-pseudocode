/*
 * XREFs of PspPostFreezeOperationWorkEnqueue @ 0x140B00A5C
 * Callers:
 *     PsThawMultiProcess @ 0x1405130EC (PsThawMultiProcess.c)
 *     PsFreezeProcess @ 0x14077E180 (PsFreezeProcess.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void __fastcall PspPostFreezeOperationWorkEnqueue(
        struct _LIST_ENTRY *a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rdi
  struct _LIST_ENTRY *v10; // rdi
  struct _LIST_ENTRY *Flink; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&PsAltSystemCallRegistrationLock.600, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&PsAltSystemCallRegistrationLock.600, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PsAltSystemCallRegistrationLock.600,
      v6,
      (__int64)&PsAltSystemCallRegistrationLock.600);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v7);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v10 = a1 + 129;
  if ( !a1[129].Flink )
  {
    PsReferenceSiloContext(a1);
    Flink = PsAltSystemCallRegistrationLock.SavedApcState.ApcListHead[1].Flink;
    if ( PsAltSystemCallRegistrationLock.SavedApcState.ApcListHead[1].Flink->Flink != (struct _LIST_ENTRY *)&PsAltSystemCallRegistrationLock.SavedApcStateFill[8] )
      __fastfail(3u);
    v10->Flink = (struct _LIST_ENTRY *)&PsAltSystemCallRegistrationLock.SavedApcState.ApcListHead[0].Blink;
    a1[129].Blink = Flink;
    Flink->Flink = v10;
    PsAltSystemCallRegistrationLock.SavedApcState.ApcListHead[1].Flink = a1 + 129;
    if ( (PsAltSystemCallRegistrationLock.NpxState & 1) == 0 )
    {
      ExQueueWorkItem((PWORK_QUEUE_ITEM)&PsAltSystemCallRegistrationLock.SavedApcStateFill[24], DelayedWorkQueue);
      PsAltSystemCallRegistrationLock.NpxState |= 1uLL;
    }
  }
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&PsAltSystemCallRegistrationLock.600,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PsAltSystemCallRegistrationLock.600);
  KeAbPostRelease((unsigned __int64)&PsAltSystemCallRegistrationLock.600);
  KeLeaveCriticalRegion();
}
