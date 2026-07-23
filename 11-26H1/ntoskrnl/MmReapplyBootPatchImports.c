/*
 * XREFs of MmReapplyBootPatchImports @ 0x140D01DB4
 * Callers:
 *     IopInitializeBuiltinDriver @ 0x140D0F138 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     MmFindDataTableEntryByAddress @ 0x140368C40 (MmFindDataTableEntryByAddress.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     MmReleaseLoadLock @ 0x14049E200 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404A5040 (MmAcquireLoadLock.c)
 *     MiLockDriverPageRange @ 0x1406EA498 (MiLockDriverPageRange.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiPrepareDriverPatchState @ 0x14086A800 (MiPrepareDriverPatchState.c)
 *     MiUnlockDriverPages @ 0x140AC8FF4 (MiUnlockDriverPages.c)
 *     MiInitializeDriverPatchState @ 0x140B405C8 (MiInitializeDriverPatchState.c)
 *     VslReapplyBootIndirectPatches @ 0x140CBF9B4 (VslReapplyBootIndirectPatches.c)
 */

__int64 __fastcall MmReapplyBootPatchImports(unsigned __int64 a1)
{
  struct _KTHREAD *Lock; // r15
  __int64 *DataTableEntryByAddress; // rsi
  int v4; // ebx
  __int64 v5; // rbx
  char *AnyMultiplexedVm; // r14
  _RTL_BITMAP_EX v8; // [rsp+38h] [rbp-D0h] BYREF
  int v9; // [rsp+50h] [rbp-B8h]
  _RTL_BITMAP_EX v10; // [rsp+A8h] [rbp-60h] BYREF
  int v11; // [rsp+C0h] [rbp-48h]

  memset_0(&v8, 0, 0x68uLL);
  memset_0(&v10, 0, 0x68uLL);
  Lock = MmAcquireLoadLock();
  DataTableEntryByAddress = (__int64 *)MmFindDataTableEntryByAddress(a1);
  MiInitializeDriverPatchState((__int64)DataTableEntryByAddress, (__int64)&v8);
  MiInitializeDriverPatchState((__int64)DataTableEntryByAddress, (__int64)&v10);
  if ( (__int64 *)DataTableEntryByAddress[32] == DataTableEntryByAddress + 32 )
  {
    v4 = 0;
  }
  else
  {
    v5 = DataTableEntryByAddress[31];
    MiInitializeDriverPatchState((__int64)DataTableEntryByAddress, (__int64)&v8);
    MiInitializeDriverPatchState(v5, (__int64)&v10);
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    v4 = MiPrepareDriverPatchState((__int64 *)&v8, (__int64)AnyMultiplexedVm);
    if ( v4 >= 0 )
    {
      v4 = MiPrepareDriverPatchState((__int64 *)&v10, (__int64)AnyMultiplexedVm);
      if ( v4 >= 0 )
      {
        v4 = MiLockDriverPageRange((__int64)&v8, 0, v9 - 1, 3, 0LL);
        if ( v4 >= 0 )
        {
          v4 = MiLockDriverPageRange((__int64)&v10, 0, v11 - 1, 3, 0LL);
          if ( v4 >= 0 )
          {
            v4 = VslReapplyBootIndirectPatches(DataTableEntryByAddress[6]);
            if ( v4 >= 0 )
              v4 = 0;
          }
        }
      }
    }
  }
  MmReleaseLoadLock(Lock);
  MiUnlockDriverPages(&v8);
  MiUnlockDriverPages(&v10);
  return (unsigned int)v4;
}
