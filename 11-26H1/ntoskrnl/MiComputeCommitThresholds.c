/*
 * XREFs of MiComputeCommitThresholds @ 0x1404FA2DC
 * Callers:
 *     MiIncreaseCommitLimits @ 0x140705868 (MiIncreaseCommitLimits.c)
 *     MiReduceCommitLimits @ 0x140705B5C (MiReduceCommitLimits.c)
 *     MiFinishChildPartitionHotAdd @ 0x14087BDA0 (MiFinishChildPartitionHotAdd.c)
 *     MiInsertPartitionPages @ 0x14087C1C4 (MiInsertPartitionPages.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiSyncCommitSignals @ 0x14047FAB8 (MiSyncCommitSignals.c)
 */

void __fastcall MiComputeCommitThresholds(__int64 a1, int a2)
{
  KIRQL v4; // bl
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax
  volatile LONG *v12; // rcx

  if ( a2 )
    v4 = 17;
  else
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 17272));
  v5 = *(_QWORD *)(a1 + 23448);
  v6 = v5 / 0xA;
  if ( v5 / 0xA > 0x10000 )
    v6 = 0x10000LL;
  v7 = v5 - v6;
  *(_QWORD *)(a1 + 17248) = v5 - v6;
  v8 = v5 / 0x14;
  if ( v5 >= 0xA0014 )
    v8 = 0x8000LL;
  *(_QWORD *)(a1 + 17256) = v5 - v8;
  v9 = v5 >> 2;
  if ( v5 >> 2 > 0x100000 )
    v9 = 0x100000LL;
  v10 = v5 - v9;
  *(_QWORD *)(a1 + 17240) = v10;
  v11 = (v7 - v10) >> 1;
  if ( v11 > 0x4000 )
    v11 = 0x4000LL;
  *(_QWORD *)(a1 + 17264) = v7 - v11;
  MiSyncCommitSignals(a1, 1);
  if ( !a2 )
  {
    v12 = (volatile LONG *)(a1 + 17272);
    if ( v4 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v12);
    else
      ExReleaseSpinLockExclusive(v12, v4);
  }
}
