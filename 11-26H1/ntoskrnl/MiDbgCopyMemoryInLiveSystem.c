/*
 * XREFs of MiDbgCopyMemoryInLiveSystem @ 0x1407024AC
 * Callers:
 *     MiDbgCopyMemory @ 0x140702400 (MiDbgCopyMemory.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeGenericCallDpc @ 0x1404CAE90 (KeGenericCallDpc.c)
 */

__int64 __fastcall MiDbgCopyMemoryInLiveSystem(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v7; // rax
  void *v8; // rdx
  signed __int8 v9; // cf
  AutoBoost *v10; // rdi
  unsigned int v11; // edi
  struct _KTHREAD *v12; // rdx
  $241382875694CED3D471BC5892DE3337 *v14; // rcx

  if ( *(_QWORD *)(a1 + 8) >= 0xFFFF800000000000uLL )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v7 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E2ED08.SchedulerAssistPriorityFloor, 0LL, 0LL, a4);
    v9 = _interlockedbittestandset64(&stru_140E2ED08.SchedulerAssistPriorityFloor, 0LL);
    v10 = v7;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&stru_140E2ED08.SchedulerAssistPriorityFloor,
        v7,
        (__int64)&stru_140E2ED08.SchedulerAssistPriorityFloor);
    if ( v10 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v10, v8);
      else
        *((_BYTE *)v10 + 10) = 1;
    }
    KeGenericCallDpc((__int64)MiDbgCopyMemoryTarget, a1);
    v11 = *(_DWORD *)(a1 + 128);
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&stru_140E2ED08.SchedulerAssistPriorityFloor,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E2ED08.SchedulerAssistPriorityFloor);
    KeAbPostRelease((unsigned __int64)&stru_140E2ED08.SchedulerAssistPriorityFloor);
    v12 = KeGetCurrentThread();
    if ( v12->SpecialApcDisable++ == -1 )
    {
      v14 = &v12->152;
      if ( ($241382875694CED3D471BC5892DE3337 *)v14->ApcState.ApcListHead[0].Flink != v14 )
        KiCheckForKernelApcDelivery((__int64)v14, (__int64)v12);
    }
    return v11;
  }
  else
  {
    stru_140E2ED08.SuspendEvent.Header.SignalState |= 0x20000u;
    return 3221225485LL;
  }
}
