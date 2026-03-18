/*
 * XREFs of KiOpPatchCode @ 0x1405F8128
 * Callers:
 *     KiOp_MOVAPS @ 0x1405F8410 (KiOp_MOVAPS.c)
 *     KiOp_MOVDQA @ 0x1405F8490 (KiOp_MOVDQA.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035D330 (MmMapLockedPagesSpecifyCache.c)
 *     MmProbeAndLockPagesEx @ 0x14039FAC0 (MmProbeAndLockPagesEx.c)
 *     MmUnlockPages @ 0x140410C10 (MmUnlockPages.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwProtectVirtualMemory @ 0x140723DF0 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall KiOpPatchCode(__int64 a1, __int64 a2, char a3)
{
  int v5; // edi
  int v7; // ebx
  _BYTE *v8; // rax
  unsigned int v9; // [rsp+30h] [rbp-19h] BYREF
  __int64 v10; // [rsp+38h] [rbp-11h] BYREF
  __int64 v11; // [rsp+40h] [rbp-9h] BYREF
  __int64 MemoryDescriptorList; // [rsp+48h] [rbp-1h] BYREF
  int MemoryDescriptorList_8; // [rsp+50h] [rbp+7h]
  _DWORD MemoryDescriptorList_12[5]; // [rsp+54h] [rbp+Bh] BYREF
  unsigned __int64 MemoryDescriptorList_32; // [rsp+68h] [rbp+1Fh]
  int MemoryDescriptorList_40; // [rsp+70h] [rbp+27h]
  _BYTE MemoryDescriptorList_44[12]; // [rsp+74h] [rbp+2Bh]

  v11 = a2;
  *(_QWORD *)&MemoryDescriptorList_44[4] = 0LL;
  memset(MemoryDescriptorList_12, 0, sizeof(MemoryDescriptorList_12));
  v9 = 0;
  v10 = 1LL;
  ExAcquireFastMutex((PKGUARDED_MUTEX)&KsepShimDbLock.ReadTransferCount);
  v5 = ZwProtectVirtualMemory(-1LL, &v11, &v10, 64LL, &v9);
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
    ZwProtectVirtualMemory(-1LL, &v11, &v10, v9, &v9);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&KsepShimDbLock.ReadTransferCount);
    return (unsigned int)v7;
  }
  else
  {
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&KsepShimDbLock.ReadTransferCount);
    return (unsigned int)v5;
  }
}
