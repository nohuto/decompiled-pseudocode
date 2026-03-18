/*
 * XREFs of MiUnlockAweVadsShared @ 0x1404FA958
 * Callers:
 *     MiDeletePagablePteRange @ 0x140361860 (MiDeletePagablePteRange.c)
 *     MiLockAweVadsShared @ 0x1405139B8 (MiLockAweVadsShared.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140700C48 (MiBuildPhysicalPageFreeChain.c)
 *     MiAllocateUserPhysicalPagesAddMdl @ 0x140877984 (MiAllocateUserPhysicalPagesAddMdl.c)
 *     MiProtectAwePrepare @ 0x140879020 (MiProtectAwePrepare.c)
 *     MiResizeAweBitMap @ 0x1408791F8 (MiResizeAweBitMap.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140879900 (NtMapUserPhysicalPagesScatter.c)
 *     NtMapUserPhysicalPages @ 0x140B39FC0 (NtMapUserPhysicalPages.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockShared @ 0x14027A640 (ExReleaseAutoExpandPushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall MiUnlockAweVadsShared(__int64 a1, ULONG_PTR a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  ExReleaseAutoExpandPushLockShared(a2, 0LL);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
    KiCheckForKernelApcDelivery(v4, v3);
}
