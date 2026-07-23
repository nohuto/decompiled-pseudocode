/*
 * XREFs of MiSpecialPurposeMemoryTypeDereference @ 0x1408851A8
 * Callers:
 *     MmManagePartitionInitialAddMemory @ 0x140883418 (MmManagePartitionInitialAddMemory.c)
 *     MmManagePartitionMoveMemory @ 0x1408834C8 (MmManagePartitionMoveMemory.c)
 *     MiCreatePagefileMemoryExtents @ 0x140884604 (MiCreatePagefileMemoryExtents.c)
 *     MiOpenSpecialPurposeMemory @ 0x140884B70 (MiOpenSpecialPurposeMemory.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     MiSpecialPurposeMemoryRemoved @ 0x140885030 (MiSpecialPurposeMemoryRemoved.c)
 */

void __fastcall MiSpecialPurposeMemoryTypeDereference(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 *v5; // rdi
  __int64 v7; // rsi
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // r15
  bool v11; // zf
  __int64 v12; // rdx
  __int64 v13; // rcx

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 21448);
  v7 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v8 = (AutoBoost *)KeAbPreAcquire(a1 + 21448, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v8, (__int64)v5);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  v11 = (*(_QWORD *)(a2 + 88))-- == 1LL;
  if ( v11 && !*(_QWORD *)(*(_QWORD *)(a2 + 64) + 22288LL) && !*(_QWORD *)(*(_QWORD *)(a2 + 64) + 496LL) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + 256LL);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v7 + 40)) <= 1 )
      __fastfail(0xEu);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((unsigned __int64)v5);
  v11 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v11 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v13, v12);
  if ( v7 )
  {
    MiSpecialPurposeMemoryRemoved(*(_QWORD **)v7);
    PsDereferencePartition(v7);
  }
}
