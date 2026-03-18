/*
 * XREFs of MiUnlockAwePagesExclusive @ 0x140702BEC
 * Callers:
 *     MiBuildPhysicalPageFreeChain @ 0x140700C48 (MiBuildPhysicalPageFreeChain.c)
 *     MiDeleteAweInfoPages @ 0x140878ECC (MiDeleteAweInfoPages.c)
 *     MiResizeAweBitMap @ 0x1408791F8 (MiResizeAweBitMap.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14027CBB0 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall MiUnlockAwePagesExclusive(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  ExReleaseAutoExpandPushLockExclusive(a1 + 64, 0LL);
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF && *(_QWORD *)(a2 + 152) != a2 + 152 )
    KiCheckForKernelApcDelivery(v4, v3);
}
