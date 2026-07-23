/*
 * XREFs of MiFreePartitionId @ 0x1406F53E4
 * Callers:
 *     MiDeletePartition @ 0x14086F1C4 (MiDeletePartition.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void __fastcall MiFreePartitionId(unsigned __int16 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v5; // rbp
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rsi
  KIRQL v10; // al
  __int64 v11; // rdx
  __int64 v12; // rcx

  CurrentThread = KeGetCurrentThread();
  v5 = a1;
  --CurrentThread->SpecialApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E2ED08, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64(&stru_140E2ED08.Header.Lock, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E2ED08, v6, (__int64)&stru_140E2ED08);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v7);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v10 = ExAcquireSpinLockExclusive(&dword_140E2ED00);
  *(_BYTE *)((v5 >> 3) + *(_QWORD *)(stru_140E2ED08.QuantumTarget + 8)) &= ~(1 << (v5 & 7));
  *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v5) = 0LL;
  if ( v10 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2ED00);
  else
    ExReleaseSpinLockExclusive(&dword_140E2ED00, v10);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E2ED08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E2ED08.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140E2ED08);
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery(v12, v11);
  }
}
