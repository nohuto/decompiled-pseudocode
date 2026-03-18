/*
 * XREFs of MiInitializeHugePfnDatabase @ 0x1406EC450
 * Callers:
 *     MiHotAddHugeRange @ 0x140867C50 (MiHotAddHugeRange.c)
 *     MiInsertPartitionPages @ 0x14087C1C4 (MiInsertPartitionPages.c)
 *     MiCreateHugeIoRanges @ 0x140CF89F0 (MiCreateHugeIoRanges.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 MiInitializeHugePfnDatabase()
{
  KIRQL v0; // bl
  __int64 PoolMm; // rax
  void *v2; // rdi
  __int64 v4; // rsi
  __int64 v5; // rax

  v0 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E2EB88.ApcStateFill[32]);
  if ( !*(_QWORD *)((char *)&stru_140E2EB88.116 + 4) )
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
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&stru_140E2EB88.ApcStateFill[32]);
      else
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E2EB88.ApcStateFill[32], v0);
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
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&stru_140E2EB88.ApcStateFill[32]);
      else
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E2EB88.ApcStateFill[32], v0);
      ExFreePoolWithTag(v2, 0);
      return 0LL;
    }
    *(_QWORD *)&stru_140E2EB88.SystemCallNumber = v2;
    stru_140E2EB88.SchedulingGroup = (_KSCHEDULING_GROUP *volatile)0x400000;
    *(_QWORD *)&stru_140E2EB88.WaitRegister.Flags = v4;
    *($353D57E818BB6F967B4B818D974CF463 *)((char *)&stru_140E2EB88.116 + 4) = ($353D57E818BB6F967B4B818D974CF463)v5;
  }
  if ( v0 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&stru_140E2EB88.ApcStateFill[32]);
  else
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E2EB88.ApcStateFill[32], v0);
  return 1LL;
}
