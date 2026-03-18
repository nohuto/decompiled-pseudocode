/*
 * XREFs of MmReapplyBootPatchImports @ 0x140CFBA34
 * Callers:
 *     IopInitializeBuiltinDriver @ 0x140D08E68 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     MmFindDataTableEntryByAddress @ 0x140366EA0 (MmFindDataTableEntryByAddress.c)
 *     MiGetAnyMultiplexedVm @ 0x140457870 (MiGetAnyMultiplexedVm.c)
 *     MmReleaseLoadLock @ 0x1404A4B70 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404AB9B0 (MmAcquireLoadLock.c)
 *     MiLockDriverPageRange @ 0x1406E57E8 (MiLockDriverPageRange.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     MiPrepareDriverPatchState @ 0x140864420 (MiPrepareDriverPatchState.c)
 *     MiUnlockDriverPages @ 0x140AC7404 (MiUnlockDriverPages.c)
 *     MiInitializeDriverPatchState @ 0x140B3E6F8 (MiInitializeDriverPatchState.c)
 *     VslReapplyBootIndirectPatches @ 0x140CB9974 (VslReapplyBootIndirectPatches.c)
 */

__int64 __fastcall MmReapplyBootPatchImports(unsigned __int64 a1)
{
  struct _KTHREAD *Lock; // r15
  __int64 *DataTableEntryByAddress; // rsi
  int v4; // ebx
  __int64 v5; // rbx
  char *AnyMultiplexedVm; // r14
  unsigned __int64 v8[3]; // [rsp+38h] [rbp-D0h] BYREF
  int v9; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v10[3]; // [rsp+A8h] [rbp-60h] BYREF
  int v11; // [rsp+C0h] [rbp-48h]

  memset_0(v8, 0, 0x68uLL);
  memset_0(v10, 0, 0x68uLL);
  Lock = MmAcquireLoadLock();
  DataTableEntryByAddress = (__int64 *)MmFindDataTableEntryByAddress(a1);
  MiInitializeDriverPatchState((__int64)DataTableEntryByAddress, (__int64)v8);
  MiInitializeDriverPatchState((__int64)DataTableEntryByAddress, (__int64)v10);
  if ( (__int64 *)DataTableEntryByAddress[32] == DataTableEntryByAddress + 32 )
  {
    v4 = 0;
  }
  else
  {
    v5 = DataTableEntryByAddress[31];
    MiInitializeDriverPatchState((__int64)DataTableEntryByAddress, (__int64)v8);
    MiInitializeDriverPatchState(v5, (__int64)v10);
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    v4 = MiPrepareDriverPatchState((__int64 *)v8, (__int64)AnyMultiplexedVm);
    if ( v4 >= 0 )
    {
      v4 = MiPrepareDriverPatchState((__int64 *)v10, (__int64)AnyMultiplexedVm);
      if ( v4 >= 0 )
      {
        v4 = MiLockDriverPageRange((__int64)v8, 0, v9 - 1, 3, 0LL);
        if ( v4 >= 0 )
        {
          v4 = MiLockDriverPageRange((__int64)v10, 0, v11 - 1, 3, 0LL);
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
  MiUnlockDriverPages(v8);
  MiUnlockDriverPages(v10);
  return (unsigned int)v4;
}
