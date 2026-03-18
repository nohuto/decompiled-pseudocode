/*
 * XREFs of MiAppendPageChain @ 0x1404578A0
 * Callers:
 *     MiGetLargePagesForChain @ 0x140284A5C (MiGetLargePagesForChain.c)
 *     MiRetryFileOnlyFailedReapPages @ 0x1402A5FD8 (MiRetryFileOnlyFailedReapPages.c)
 *     MiDetermineThreadFaultCluster @ 0x1402D60A8 (MiDetermineThreadFaultCluster.c)
 *     MiReserveEnclavePages @ 0x140341D50 (MiReserveEnclavePages.c)
 *     MiReturnPhysicalPoolPages @ 0x14051DF40 (MiReturnPhysicalPoolPages.c)
 *     MiPfPrepareSequentialReadList @ 0x140A50EA0 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAppendPageChain(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)a1 )
  {
    **(_QWORD **)(a1 + 8) = *a2;
    *(_QWORD *)(a1 + 8) = a2[1];
    result = a2[2];
    *(_QWORD *)(a1 + 16) += result;
  }
  else
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_QWORD *)(a1 + 16) = a2[2];
  }
  return result;
}
