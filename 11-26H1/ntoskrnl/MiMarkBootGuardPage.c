/*
 * XREFs of MiMarkBootGuardPage @ 0x1406FF204
 * Callers:
 *     MmAllocateIsrStack @ 0x140875DEC (MmAllocateIsrStack.c)
 *     MiInitializeKernelStacks @ 0x140CFC600 (MiInitializeKernelStacks.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140264F40 (MiGetSystemRegionType.c)
 *     MiVaToFlushVm @ 0x1402843F8 (MiVaToFlushVm.c)
 *     MiFlushSingleTbEntry @ 0x140285050 (MiFlushSingleTbEntry.c)
 *     MiLockPageTableInternal @ 0x1402B34E0 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x1402D13E0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiLockAndDecrementShareCount @ 0x1403091DC (MiLockAndDecrementShareCount.c)
 *     MiDecreaseUsedPtes @ 0x14033F020 (MiDecreaseUsedPtes.c)
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 *     MiReturnResident @ 0x14036E2C0 (MiReturnResident.c)
 */

void __fastcall MiMarkBootGuardPage(unsigned __int64 a1)
{
  unsigned __int64 v2; // rsi
  void *v3; // r14
  __int64 v4; // r8
  unsigned __int64 v5; // r12
  __int64 v6; // rdx
  char v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  ULONG_PTR v10; // rdi
  unsigned __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rdx

  v2 = (__int64)(a1 << 25) >> 16;
  v3 = MiVaToFlushVm(v2);
  v5 = v4 + ((a1 >> 9) & 0x7FFFFFFFF8LL);
  v7 = MiLockWorkingSetShared((__int64)v3, v6, v4);
  MiLockPageTableInternal((signed __int64)v3, v5, 0);
  if ( (*(_QWORD *)a1 & 1) != 0 )
  {
    v9 = (*(_QWORD *)a1 >> 12) & 0xFFFFFFFFFFLL;
    v10 = 48 * v9 - 0x220000000000LL;
    v11 = *(_QWORD *)(v10 + 40);
    v12 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((v11 >> 43) & 0x3FF));
    *(_QWORD *)a1 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    MiDecreaseUsedPtes(v9, v5, (_KPROCESS *)1);
    LODWORD(v10) = MiLockAndDecrementShareCount(v10, 3LL);
    MiLockAndDecrementShareCount(48 * (v11 & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2LL);
    MiUnlockPageTableInternal((__int64)v3, v5);
    LOBYTE(v13) = v7;
    MiUnlockWorkingSetShared((__int64)v3, v13);
    MiFlushSingleTbEntry(v2, 2LL);
    MiReturnResident(v12, 1uLL);
    if ( (_DWORD)v10 != 3 )
      MiReturnCommit(v12, 1LL, 0);
    if ( (unsigned int)MiGetSystemRegionType(v2) == 13 )
    {
      _InterlockedDecrement64((volatile signed __int64 *)(v12 + 528));
    }
    else if ( (ULONG *)v12 == &MiSystemPartition )
    {
      _InterlockedDecrement64((volatile signed __int64 *)&stru_140E36558.320);
    }
  }
  else
  {
    MiUnlockPageTableInternal((__int64)v3, v5);
    LOBYTE(v8) = v7;
    MiUnlockWorkingSetShared((__int64)v3, v8);
  }
}
