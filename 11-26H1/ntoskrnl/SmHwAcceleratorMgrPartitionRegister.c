/*
 * XREFs of SmHwAcceleratorMgrPartitionRegister @ 0x1408214A8
 * Callers:
 *     SmHwAcceleratorPartitionMgrStart @ 0x140821B84 (SmHwAcceleratorPartitionMgrStart.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     SmHwAcceleratorMgrAcquireAccelerators @ 0x140820CA8 (SmHwAcceleratorMgrAcquireAccelerators.c)
 *     SmHwAcceleratorMgrCreatePartitionAccelerators @ 0x140821320 (SmHwAcceleratorMgrCreatePartitionAccelerators.c)
 *     SmHwAcceleratorMgrPartitionUnregister @ 0x1408215D8 (SmHwAcceleratorMgrPartitionUnregister.c)
 */

__int64 __fastcall SmHwAcceleratorMgrPartitionRegister(
        struct _KTHREAD *a1,
        struct _LIST_ENTRY *a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v7; // rax
  void *v8; // rdx
  __int64 **v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  AutoBoost *v11; // rsi
  int v12; // ebp
  struct _LIST_ENTRY *Blink; // rcx
  int PartitionAccelerators; // esi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
  v11 = v7;
  if ( _interlockedbittestandset64(&a1->Header.Lock, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1, v7, (__int64)a1);
  v12 = 1;
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v8);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  if ( !LODWORD(a1[1].KernelStack) && (int)SmHwAcceleratorMgrAcquireAccelerators((__int64)a1) < 0 )
    LODWORD(a1[1].KernelStack) = -1;
  Blink = a1->Header.WaitListHead.Blink;
  if ( Blink->Flink != &a1->Header.WaitListHead )
    __fastfail(3u);
  a2->Flink = &a1->Header.WaitListHead;
  a2->Blink = Blink;
  Blink->Flink = a2;
  a1->Header.WaitListHead.Blink = a2;
  a2[1].Flink = (struct _LIST_ENTRY *)a1;
  if ( LODWORD(a1[1].KernelStack) == -1
    || (PartitionAccelerators = SmHwAcceleratorMgrCreatePartitionAccelerators((__int64)a1, (__int64)a2, v9, v10),
        PartitionAccelerators >= 0) )
  {
    v12 = 0;
    PartitionAccelerators = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
  KeAbPostRelease((unsigned __int64)a1);
  KeLeaveCriticalRegion();
  if ( v12 )
    SmHwAcceleratorMgrPartitionUnregister(a1);
  return (unsigned int)PartitionAccelerators;
}
