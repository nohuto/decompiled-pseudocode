/*
 * XREFs of MiSpecialPurposeMemoryChangePrepare @ 0x140B65B80
 * Callers:
 *     MmManagePartitionInitialAddMemory @ 0x14087D018 (MmManagePartitionInitialAddMemory.c)
 *     MmManagePartitionMoveMemory @ 0x14087D0C8 (MmManagePartitionMoveMemory.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     MiFindSpecialPurposeMemoryType @ 0x140530B10 (MiFindSpecialPurposeMemoryType.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140B65CA0 (MiInitializePartitionSpecialPurposeMemory.c)
 */

__int64 __fastcall MiSpecialPurposeMemoryChangePrepare(
        __int64 a1,
        const void *a2,
        _QWORD *a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *v5; // rdi
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // rbp
  int v12; // ebp
  _QWORD *SpecialPurposeMemoryType; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // zf

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 21448);
  *a3 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v9 = (AutoBoost *)KeAbPreAcquire(a1 + 21448, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v9, (__int64)v5);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  v12 = MiInitializePartitionSpecialPurposeMemory(a1, a2);
  if ( v12 >= 0 )
  {
    SpecialPurposeMemoryType = MiFindSpecialPurposeMemoryType(a1, a2);
    *a3 = SpecialPurposeMemoryType;
    ++SpecialPurposeMemoryType[11];
    v12 = 0;
  }
  if ( v5 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v5);
    KeAbPostRelease((unsigned __int64)v5);
    v16 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v16 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v15, v14);
  }
  return (unsigned int)v12;
}
