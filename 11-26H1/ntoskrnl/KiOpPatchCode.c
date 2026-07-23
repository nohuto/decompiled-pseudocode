/*
 * XREFs of KiOpPatchCode @ 0x1405FAB48
 * Callers:
 *     KiOp_MOVAPS @ 0x1405FAE30 (KiOp_MOVAPS.c)
 *     KiOp_MOVDQA @ 0x1405FAEB0 (KiOp_MOVDQA.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     MmProbeAndLockPagesEx @ 0x1403A1820 (MmProbeAndLockPagesEx.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwProtectVirtualMemory @ 0x1407289C0 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall KiOpPatchCode(__int64 a1, unsigned __int64 a2, char a3)
{
  NTSTATUS v5; // edi
  int v7; // ebx
  _BYTE *v8; // rax
  ULONG NewProtect; // [rsp+30h] [rbp-19h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-11h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-9h] BYREF
  __int64 MemoryDescriptorList; // [rsp+48h] [rbp-1h] BYREF
  int MemoryDescriptorList_8; // [rsp+50h] [rbp+7h]
  _DWORD MemoryDescriptorList_12[5]; // [rsp+54h] [rbp+Bh] BYREF
  unsigned __int64 MemoryDescriptorList_32; // [rsp+68h] [rbp+1Fh]
  int MemoryDescriptorList_40; // [rsp+70h] [rbp+27h]
  _BYTE MemoryDescriptorList_44[12]; // [rsp+74h] [rbp+2Bh]

  BaseAddress = (PVOID)a2;
  *(_QWORD *)&MemoryDescriptorList_44[4] = 0LL;
  memset(MemoryDescriptorList_12, 0, sizeof(MemoryDescriptorList_12));
  NewProtect = 0;
  RegionSize = 1LL;
  ExAcquireFastMutex((PKGUARDED_MUTEX)&KsepShimDbLock.OtherTransferCount);
  v5 = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x40u, &NewProtect);
  if ( v5 >= 0 )
  {
    *(_DWORD *)&MemoryDescriptorList_44[8] = 0;
    MemoryDescriptorList_32 = a2 & 0xFFFFFFFFFFFFF000uLL;
    MemoryDescriptorList = 0LL;
    MemoryDescriptorList_8 = 56;
    *(_QWORD *)MemoryDescriptorList_44 = a2 & 0xFFF;
    memset(MemoryDescriptorList_12, 0, sizeof(MemoryDescriptorList_12));
    MemoryDescriptorList_40 = 1;
    v7 = MmProbeAndLockPagesEx((__int64)&MemoryDescriptorList, 3uLL);
    if ( v7 >= 0 )
    {
      if ( (MemoryDescriptorList_8 & 0x50000) != 0 )
        v8 = *(_BYTE **)&MemoryDescriptorList_12[3];
      else
        v8 = MmMapLockedPagesSpecifyCache((PMDL)&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
      if ( v8 )
        *v8 = a3;
      else
        v7 = -1073741670;
      MmUnlockPages((PMDL)&MemoryDescriptorList);
    }
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, NewProtect, &NewProtect);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&KsepShimDbLock.OtherTransferCount);
    return (unsigned int)v7;
  }
  else
  {
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&KsepShimDbLock.OtherTransferCount);
    return (unsigned int)v5;
  }
}
