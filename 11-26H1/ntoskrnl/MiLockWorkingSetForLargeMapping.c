/*
 * XREFs of MiLockWorkingSetForLargeMapping @ 0x14050B9D8
 * Callers:
 *     MiMapUserLargePages @ 0x1402F1DE0 (MiMapUserLargePages.c)
 *     MiCommitVadFillPageTables @ 0x140312F04 (MiCommitVadFillPageTables.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14027DB10 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

KIRQL __fastcall MiLockWorkingSetForLargeMapping(__int64 a1, __int64 a2, __int64 a3)
{
  void *v4; // rbx
  _KPROCESS *Process; // rdx
  volatile _KAFFINITY_EX *ActiveProcessors; // rbp
  void *PoolMm; // rax
  KIRQL v8; // al
  KIRQL v9; // si
  __int64 v10; // rdx
  __int64 v11; // r8

  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
    return MiLockWorkingSetExclusive(a1, a2, a3);
  v4 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  ActiveProcessors = Process[2].ActiveProcessors;
  if ( !*(_QWORD *)&ActiveProcessors[6].Count )
  {
    PoolMm = (void *)ExAllocatePoolMm(64LL, 0x800uLL, 1817405773, (unsigned int)a3 | 0x80000000);
    v4 = PoolMm;
    if ( PoolMm )
      memset_0(PoolMm, 0, 0x800uLL);
  }
  v8 = MiLockWorkingSetExclusive(a1, (__int64)Process, a3);
  v9 = v8;
  if ( v4 )
  {
    if ( *(_QWORD *)&ActiveProcessors[6].Count )
    {
      MiUnlockWorkingSetExclusive(a1, v8);
      ExFreePoolWithTag(v4, 0);
      MiLockWorkingSetExclusive(a1, v10, v11);
    }
    else
    {
      *(_QWORD *)&ActiveProcessors[6].Count = v4;
    }
  }
  return v9;
}
