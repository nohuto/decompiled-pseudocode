/*
 * XREFs of FsRtlInitializeFileLocks @ 0x140CB8F3C
 * Callers:
 *     FsRtlInitSystem @ 0x140CB8A6C (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x140498C60 (ExInitializeNPagedLookasideListInternal.c)
 *     ExInitializePagedLookasideList @ 0x140B31D30 (ExInitializePagedLookasideList.c)
 */

_QWORD *FsRtlInitializeFileLocks()
{
  _QWORD *result; // rax

  ExInitializeNPagedLookasideListInternal((__int64)&FsRtlSharedLockLookasideList, 0LL, 0LL, 512, 56, 1752386630, 16, 0);
  ExInitializeNPagedLookasideListInternal(
    (__int64)&FsRtlExclusiveLockLookasideList,
    0LL,
    0LL,
    512,
    72,
    2019904582,
    16,
    0);
  ExInitializeNPagedLookasideListInternal((__int64)&FsRtlWaitingLockLookasideList, 0LL, 0LL, 512, 32, 1819757638, 16, 0);
  ExInitializeNPagedLookasideListInternal(
    (__int64)&FsRtlLockTreeNodeLookasideList,
    0LL,
    0LL,
    512,
    56,
    1852591174,
    16,
    0);
  ExInitializeNPagedLookasideListInternal((__int64)&FsRtlLockInfoLookasideList, 0LL, 0LL, 512, 64, 1768705094, 8, 0);
  ExInitializePagedLookasideList(&FsRtlFileLockLookasideList, 0LL, 0LL, 0, 0x60uLL, 0x6C664C46u, 8u);
  result = &qword_140F86DE0;
  unk_140F86DE8 = &qword_140F86DE0;
  qword_140F86DE0 = &qword_140F86DE0;
  LODWORD(VslpReservedTransferLock.Padding[4]) = 1;
  unk_140F86DC8 = 0LL;
  unk_140F86DD0 = 0;
  unk_140F86DD8 = 1;
  unk_140F86DDA = 6;
  unk_140F86DDC = 0;
  FsRtlFileLockCancelCollideLock = 0LL;
  FsRtlFileLockCancelCollideList = 0LL;
  return result;
}
