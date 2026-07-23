/*
 * XREFs of MiAllocatePartitionId @ 0x14086EF20
 * Callers:
 *     MmCreatePartition @ 0x14087015C (MmCreatePartition.c)
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
 *     RtlFindClearBitsAndSet @ 0x14035A440 (RtlFindClearBitsAndSet.c)
 *     MiExpandPartitionIds @ 0x14086F3E8 (MiExpandPartitionIds.c)
 */

__int64 __fastcall MiAllocatePartitionId(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rsi
  unsigned __int16 v10; // bp
  KIRQL v11; // si
  ULONG ClearBitsAndSet; // eax
  __int64 v13; // rdx
  $241382875694CED3D471BC5892DE3337 *v15; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E2ED08, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64(&stru_140E2ED08.Header.Lock, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E2ED08, v6, (__int64)&stru_140E2ED08);
  v10 = 0;
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v7);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v11 = ExAcquireSpinLockExclusive(&dword_140E2ED00);
  while ( 1 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)stru_140E2ED08.QuantumTarget, 1u, 0);
    if ( ClearBitsAndSet != 0xFFFFFFFFLL )
      break;
    if ( v11 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2ED00);
    else
      ExReleaseSpinLockExclusive(&dword_140E2ED00, v11);
    if ( !(unsigned int)MiExpandPartitionIds() )
      goto LABEL_17;
    ExAcquireSpinLockExclusive(&dword_140E2ED00);
  }
  v10 = ClearBitsAndSet;
  BYTE4(stru_140E2ED08.CycleTime) = 1;
  *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (unsigned __int16)ClearBitsAndSet) = a1;
  if ( v11 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2ED00);
  else
    ExReleaseSpinLockExclusive(&dword_140E2ED00, v11);
LABEL_17:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E2ED08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E2ED08.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140E2ED08);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v15 = &CurrentThread->152;
    if ( ($241382875694CED3D471BC5892DE3337 *)v15->ApcState.ApcListHead[0].Flink != v15 )
      KiCheckForKernelApcDelivery((__int64)v15, v13);
  }
  return v10;
}
