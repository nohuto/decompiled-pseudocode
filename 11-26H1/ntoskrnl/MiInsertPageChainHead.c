/*
 * XREFs of MiInsertPageChainHead @ 0x14033C0E0
 * Callers:
 *     MiAllocateEnclavePages @ 0x14033995C (MiAllocateEnclavePages.c)
 *     MiGetPageTablePages @ 0x14033BE80 (MiGetPageTablePages.c)
 *     MiPfPutPagesInTransition @ 0x140374A10 (MiPfPutPagesInTransition.c)
 *     MiGetLargePageChain @ 0x1403D1D00 (MiGetLargePageChain.c)
 *     MiMapMdlWithLargePages @ 0x1404FC1D0 (MiMapMdlWithLargePages.c)
 *     MiGetClusterPage @ 0x140508040 (MiGetClusterPage.c)
 *     MiReturnPhysicalPoolPages @ 0x140520550 (MiReturnPhysicalPoolPages.c)
 *     MiAddExpansionNonPagedPool @ 0x140523104 (MiAddExpansionNonPagedPool.c)
 *     MiInitializeDynamicBitmap @ 0x1406F9D64 (MiInitializeDynamicBitmap.c)
 *     MiReapFileOnlyPfns @ 0x1406FF880 (MiReapFileOnlyPfns.c)
 *     MiCaptureSparsePages @ 0x140880010 (MiCaptureSparsePages.c)
 *     MiPfPrepareSequentialReadList @ 0x140A5A190 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140A5B120 (MiPfPrepareReadList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInsertPageChainHead(__int64 *a1, __int64 *a2)
{
  __int64 result; // rax
  bool v3; // zf

  result = *a1;
  *a2 = *a1;
  ++a1[2];
  v3 = a1[1] == 0;
  *a1 = (__int64)a2;
  if ( v3 )
    a1[1] = (__int64)a2;
  return result;
}
