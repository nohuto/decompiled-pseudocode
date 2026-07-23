/*
 * XREFs of VmpUpdateCommitStateMemoryRange @ 0x1406C57F0
 * Callers:
 *     VmUpdateCommitMemoryRange @ 0x1408223B0 (VmUpdateCommitMemoryRange.c)
 * Callees:
 *     VmpConvertPortionVpnRangeToGpnRange @ 0x1402536A0 (VmpConvertPortionVpnRangeToGpnRange.c)
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     VmpFindNextPinnedPageStateHelper @ 0x1406C4DA8 (VmpFindNextPinnedPageStateHelper.c)
 *     ZwAllocateVirtualMemory @ 0x1407282C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x140728380 (ZwFreeVirtualMemory.c)
 *     MmCommitDecommitSecuredMemory @ 0x140871154 (MmCommitDecommitSecuredMemory.c)
 */

__int64 __fastcall VmpUpdateCommitStateMemoryRange(volatile LONG *SpinLock, __int128 *a2, ULONG a3)
{
  __int128 v3; // xmm6
  KIRQL v6; // al
  __int64 v7; // rcx
  KIRQL v8; // di
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rbx
  __int128 v14; // [rsp+48h] [rbp-19h] BYREF
  __int128 v15; // [rsp+58h] [rbp-9h] BYREF
  __int64 v16; // [rsp+68h] [rbp+7h] BYREF
  __int128 v17; // [rsp+70h] [rbp+Fh]
  int v18; // [rsp+C8h] [rbp+67h] BYREF
  ULONG_PTR RegionSize; // [rsp+D0h] [rbp+6Fh] BYREF
  PVOID BaseAddress; // [rsp+E0h] [rbp+7Fh] BYREF

  v3 = *a2;
  v18 = 0;
  v15 = v3;
  v14 = 0LL;
  v17 = 0LL;
  v6 = ExAcquireSpinLockShared(SpinLock);
  v7 = *((_QWORD *)SpinLock + 6);
  v8 = v6;
  if ( !v7 || (unsigned __int64)v3 > *(_QWORD *)(v7 + 32) || (unsigned __int64)v3 < *(_QWORD *)(v7 + 24) )
  {
    v7 = *((_QWORD *)SpinLock + 3);
    if ( (SpinLock[8] & 1) != 0 && v7 )
      v7 ^= (unsigned __int64)(SpinLock + 6);
    while ( v7 )
    {
      if ( (unsigned __int64)v3 > *(_QWORD *)(v7 + 32) )
      {
        v9 = *(_QWORD *)(v7 + 8);
      }
      else
      {
        if ( (unsigned __int64)v3 >= *(_QWORD *)(v7 + 24) )
          break;
        v9 = *(_QWORD *)v7;
      }
      if ( (SpinLock[8] & 1) != 0 && v9 )
        v7 ^= v9;
      else
        v7 = v9;
    }
    if ( !v7 )
    {
      v10 = -1073741172;
      goto LABEL_34;
    }
    *((_QWORD *)SpinLock + 6) = v7;
  }
  if ( (unsigned __int64)(*(_QWORD *)(v7 + 32) - v3 + 1) < *((_QWORD *)&v15 + 1) )
  {
    v10 = -1073741800;
LABEL_34:
    ExReleaseSpinLockShared(SpinLock, v8);
    return v10;
  }
  BaseAddress = (PVOID)((_QWORD)v3 << 12);
  RegionSize = *((_QWORD *)&v15 + 1) << 12;
  v11 = *(_QWORD *)(v7 + 56);
  if ( v11 && !a3 )
  {
    v16 = v7;
    while ( 1 )
    {
      VmpConvertPortionVpnRangeToGpnRange(
        SpinLock,
        (unsigned __int64 *)&v15,
        0xFFFFFFFFFFFFFFFFuLL,
        &v16,
        &v14,
        &v18,
        2);
      if ( VmpFindNextPinnedPageStateHelper((__int64)SpinLock, v14, v14 + *((_QWORD *)&v14 + 1) - 1LL, 1) != -1 )
        break;
      if ( !*((_QWORD *)&v15 + 1) )
        goto LABEL_26;
    }
    v10 = -1073741780;
    goto LABEL_34;
  }
LABEL_26:
  ExReleaseSpinLockShared(SpinLock, v8);
  if ( v11 )
  {
    return (unsigned int)MmCommitDecommitSecuredMemory(BaseAddress, RegionSize, a3, v11);
  }
  else if ( a3 )
  {
    return (unsigned int)ZwAllocateVirtualMemory(
                           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                           &BaseAddress,
                           0LL,
                           &RegionSize,
                           0x1000u,
                           a3);
  }
  else
  {
    return (unsigned int)ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u);
  }
}
