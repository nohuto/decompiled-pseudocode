/*
 * XREFs of MiInitializeHugePfnDatabase @ 0x1406F10F0
 * Callers:
 *     MiHotAddHugeRange @ 0x14086E030 (MiHotAddHugeRange.c)
 *     MiInsertPartitionPages @ 0x1408825C4 (MiInsertPartitionPages.c)
 *     MiCreateHugeIoRanges @ 0x140CFED70 (MiCreateHugeIoRanges.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 MiInitializeHugePfnDatabase()
{
  KIRQL v0; // bl
  __int64 PoolMm; // rax
  void *v2; // rdi
  __int64 v4; // rsi
  __int64 v5; // rax

  v0 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E2ED08.ApcStateFill[32]);
  if ( !*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) )
  {
    PoolMm = ExAllocatePoolMm(
               64LL,
               0x100000uLL,
               1883793741,
               KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
    v2 = (void *)PoolMm;
    if ( !PoolMm )
    {
      if ( v0 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&stru_140E2ED08.ApcStateFill[32]);
      else
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E2ED08.ApcStateFill[32], v0);
      return 0LL;
    }
    v4 = PoolMm + 0x80000;
    v5 = ExAllocatePoolMm(
           64LL,
           0x2000000uLL,
           1883793741,
           KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
    if ( !v5 )
    {
      if ( v0 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&stru_140E2ED08.ApcStateFill[32]);
      else
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E2ED08.ApcStateFill[32], v0);
      ExFreePoolWithTag(v2, 0);
      return 0LL;
    }
    *(_QWORD *)&stru_140E2ED08.SystemCallNumber = v2;
    stru_140E2ED08.SchedulingGroup = (_KSCHEDULING_GROUP *volatile)0x400000;
    *(_QWORD *)&stru_140E2ED08.WaitRegister.Flags = v4;
    *($C9C4F79064DE35237E3F199A7D1BD3E1 *)((char *)&stru_140E2ED08.116 + 4) = ($C9C4F79064DE35237E3F199A7D1BD3E1)v5;
  }
  if ( v0 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&stru_140E2ED08.ApcStateFill[32]);
  else
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E2ED08.ApcStateFill[32], v0);
  return 1LL;
}
