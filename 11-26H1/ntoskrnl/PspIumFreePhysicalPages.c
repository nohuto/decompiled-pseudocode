/*
 * XREFs of PspIumFreePhysicalPages @ 0x1403C2C2C
 * Callers:
 *     PsDispatchIumService @ 0x14040C830 (PsDispatchIumService.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140281690 (MmUnmapLockedPages.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035D330 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapReservedMapping @ 0x1403C1C70 (MmUnmapReservedMapping.c)
 *     MmFreeSecureKernelPages @ 0x1403C1E80 (MmFreeSecureKernelPages.c)
 *     PspIumFreePartitionPages @ 0x1403C2D98 (PspIumFreePartitionPages.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1404B5970 (MmMapLockedPagesWithReservedMapping.c)
 */

unsigned __int64 __fastcall PspIumFreePhysicalPages(__int64 a1, int a2, __int64 a3)
{
  KIRQL v5; // si
  _DWORD *v6; // rbx
  struct _MDL MemoryDescriptorList; // [rsp+30h] [rbp-40h] BYREF
  __int64 v9; // [rsp+60h] [rbp-10h] BYREF

  v9 = a3;
  MemoryDescriptorList.Next = 0LL;
  *(_DWORD *)&MemoryDescriptorList.Size = 131128;
  *(_QWORD *)&MemoryDescriptorList.ByteCount = 4096LL;
  memset(&MemoryDescriptorList.MdlFlags + 1, 0, 28);
  v5 = 0;
  v6 = MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000020u);
  if ( !v6 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&NormalizationListLock.WaitBlock[1].Thread);
    v6 = MmMapLockedPagesWithReservedMapping(PspIumFreeMapping, 0x466D7356u, &MemoryDescriptorList, MmCached);
  }
  if ( v6[10] )
  {
    if ( a1 )
      PspIumFreePartitionPages(a1, (v6[10] >> 12) + (unsigned int)((v6[10] & 0xFFF) != 0), v6 + 12);
    else
      MmFreeSecureKernelPages((__int64)v6, a2);
  }
  if ( v6 == PspIumFreeMapping )
  {
    MmUnmapReservedMapping(v6, 0x466D7356u, &MemoryDescriptorList);
    KeReleaseSpinLock((PKSPIN_LOCK)&NormalizationListLock.WaitBlock[1].Thread, v5);
  }
  else
  {
    MmUnmapLockedPages(v6, &MemoryDescriptorList);
  }
  if ( a1 )
    return PspIumFreePartitionPages(a1, 1LL, &v9);
  else
    return MmFreeSecureKernelPages((__int64)&MemoryDescriptorList, 0);
}
