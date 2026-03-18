/*
 * XREFs of MiFindSpecialPurposeMemoryTypeByPartition @ 0x14087E624
 * Callers:
 *     MmManagePartitionMoveMemory @ 0x14087D0C8 (MmManagePartitionMoveMemory.c)
 *     MiSpecialPurposeMemoryRemoved @ 0x14087EC30 (MiSpecialPurposeMemoryRemoved.c)
 *     MiUpdateSpecialPurposeMemoryCacheEligibility @ 0x14087EEE0 (MiUpdateSpecialPurposeMemoryCacheEligibility.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x140258850 (PsReferencePartitionSafe.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     PsDereferencePartition @ 0x140381940 (PsDereferencePartition.c)
 *     MiFindSpecialPurposeMemoryType @ 0x140530B10 (MiFindSpecialPurposeMemoryType.c)
 */

_QWORD *__fastcall MiFindSpecialPurposeMemoryTypeByPartition(__int64 a1, __int64 *a2, volatile signed __int64 **a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *v5; // r15
  _QWORD *v7; // rdi
  struct _KLOCK_ENTRIES *v8; // r9
  __int64 v9; // r13
  volatile signed __int64 *v10; // rsi
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // rdi
  _QWORD *SpecialPurposeMemoryType; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  bool v17; // zf

  CurrentThread = KeGetCurrentThread();
  v5 = *(__int64 **)(a1 + 21400);
  *a2 = 0LL;
  *a3 = 0LL;
  v7 = 0LL;
  if ( PsReferencePartitionSafe((__int64)v5) )
  {
    v9 = *v5;
    --CurrentThread->SpecialApcDisable;
    v10 = (volatile signed __int64 *)(v9 + 21448);
    v11 = (AutoBoost *)KeAbPreAcquire(v9 + 21448, 0LL, 0LL, v8);
    v13 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 21448), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v9 + 21448), v11, v9 + 21448);
    if ( v13 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v13, v12);
      else
        *((_BYTE *)v13 + 10) = 1;
    }
    SpecialPurposeMemoryType = MiFindSpecialPurposeMemoryType(v9, (const void *)(a1 + 21416));
    v7 = SpecialPurposeMemoryType;
    if ( SpecialPurposeMemoryType && SpecialPurposeMemoryType[8] == a1 )
    {
      *a3 = v10;
      *a2 = v9;
    }
    else
    {
      v7 = 0LL;
      if ( v9 != -21448 )
      {
        if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v9 + 21448));
        KeAbPostRelease(v9 + 21448);
        v17 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v17
          && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v16, v15);
        }
      }
      PsDereferencePartition((__int64)v5);
    }
  }
  return v7;
}
