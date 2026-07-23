/*
 * XREFs of SmHwAcceleratorMgrPartitionUnregister @ 0x1408215D8
 * Callers:
 *     SmHwAcceleratorMgrPartitionRegister @ 0x1408214A8 (SmHwAcceleratorMgrPartitionRegister.c)
 *     SmHwAcceleratorPartitionMgrCleanup @ 0x140821A4C (SmHwAcceleratorPartitionMgrCleanup.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     SmHwAcceleratorMgrReleaseAccelerators @ 0x1408216D0 (SmHwAcceleratorMgrReleaseAccelerators.c)
 */

void __fastcall SmHwAcceleratorMgrPartitionUnregister(
        struct _KTHREAD *a1,
        _QWORD *a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v7; // rax
  void *v8; // rdx
  AutoBoost *v9; // rsi
  __int64 v10; // rcx
  _QWORD *v11; // rax
  int KernelStack; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64(&a1->Header.Lock, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1, v7, (__int64)a1);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v10 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v11 = (_QWORD *)a2[1], (_QWORD *)*v11 != a2) )
    __fastfail(3u);
  *v11 = v10;
  *(_QWORD *)(v10 + 8) = v11;
  a2[2] = 0LL;
  if ( a1->Header.WaitListHead.Flink == &a1->Header.WaitListHead )
  {
    KernelStack = (int)a1[1].KernelStack;
    if ( KernelStack != -1 )
    {
      if ( KernelStack )
        SmHwAcceleratorMgrReleaseAccelerators(a1);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
  KeAbPostRelease((unsigned __int64)a1);
  KeLeaveCriticalRegion();
}
