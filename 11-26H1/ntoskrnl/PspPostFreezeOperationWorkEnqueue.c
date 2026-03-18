/*
 * XREFs of PspPostFreezeOperationWorkEnqueue @ 0x140AFE9EC
 * Callers:
 *     PsThawMultiProcess @ 0x14051967C (PsThawMultiProcess.c)
 *     PsFreezeProcess @ 0x14077B540 (PsFreezeProcess.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void __fastcall PspPostFreezeOperationWorkEnqueue(
        $8F5FBFE9BC2E192187C511DF41804DD6 **a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rdi
  $8F5FBFE9BC2E192187C511DF41804DD6 **v10; // rdi
  _KPROCESS *Process; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&PsAltSystemCallRegistrationLock.QueueListEntry.Blink, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64(
         (volatile signed __int32 *)&PsAltSystemCallRegistrationLock.QueueListEntry.Blink,
         0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PsAltSystemCallRegistrationLock.QueueListEntry.Blink,
      v6,
      (__int64)&PsAltSystemCallRegistrationLock.QueueListEntry.Blink);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v7);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v10 = a1 + 258;
  if ( !a1[258] )
  {
    PsReferenceSiloContext(a1);
    Process = PsAltSystemCallRegistrationLock.Process;
    if ( *(struct _KTHREAD **)PsAltSystemCallRegistrationLock.Process != (struct _KTHREAD *)&PsAltSystemCallRegistrationLock.536 )
      __fastfail(3u);
    *v10 = &PsAltSystemCallRegistrationLock.536;
    a1[259] = ($8F5FBFE9BC2E192187C511DF41804DD6 *)Process;
    *(_QWORD *)&Process->Header.Lock = v10;
    PsAltSystemCallRegistrationLock.Process = (_KPROCESS *)(a1 + 258);
    if ( ((__int64)PsAltSystemCallRegistrationLock.QueueListEntry.Flink & 1) == 0 )
    {
      ExQueueWorkItem((PWORK_QUEUE_ITEM)&PsAltSystemCallRegistrationLock.UserAffinity, DelayedWorkQueue);
      PsAltSystemCallRegistrationLock.QueueListEntry.Flink = (struct _LIST_ENTRY *)((unsigned __int64)PsAltSystemCallRegistrationLock.QueueListEntry.Flink | 1);
    }
  }
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&PsAltSystemCallRegistrationLock.QueueListEntry.Blink,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PsAltSystemCallRegistrationLock.QueueListEntry.Blink);
  KeAbPostRelease((unsigned __int64)&PsAltSystemCallRegistrationLock.QueueListEntry.Blink);
  KeLeaveCriticalRegion();
}
