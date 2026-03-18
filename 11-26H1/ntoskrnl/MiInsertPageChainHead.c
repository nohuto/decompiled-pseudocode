/*
 * XREFs of MiInsertPageChainHead @ 0x14033A060
 * Callers:
 *     MiAllocateEnclavePages @ 0x1403378DC (MiAllocateEnclavePages.c)
 *     MiGetPageTablePages @ 0x140339E00 (MiGetPageTablePages.c)
 *     MiPfPutPagesInTransition @ 0x140372C60 (MiPfPutPagesInTransition.c)
 *     MiGetLargePageChain @ 0x1403C7E10 (MiGetLargePageChain.c)
 *     MiMapMdlWithLargePages @ 0x140502900 (MiMapMdlWithLargePages.c)
 *     MiGetClusterPage @ 0x14050E5D0 (MiGetClusterPage.c)
 *     MiReturnPhysicalPoolPages @ 0x14051DF40 (MiReturnPhysicalPoolPages.c)
 *     MiAddExpansionNonPagedPool @ 0x140520A60 (MiAddExpansionNonPagedPool.c)
 *     MiInitializeDynamicBitmap @ 0x1406F50F4 (MiInitializeDynamicBitmap.c)
 *     MiReapFileOnlyPfns @ 0x1406FABB0 (MiReapFileOnlyPfns.c)
 *     MiCaptureSparsePages @ 0x140879C14 (MiCaptureSparsePages.c)
 *     MiPfPrepareSequentialReadList @ 0x140A50EA0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140A51E30 (MiPfPrepareReadList.c)
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
