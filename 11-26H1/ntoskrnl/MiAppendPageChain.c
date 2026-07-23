/*
 * XREFs of MiAppendPageChain @ 0x14044F110
 * Callers:
 *     MiGetLargePagesForChain @ 0x140283FC4 (MiGetLargePagesForChain.c)
 *     MiRetryFileOnlyFailedReapPages @ 0x1402A53D0 (MiRetryFileOnlyFailedReapPages.c)
 *     MiDetermineThreadFaultCluster @ 0x1402B7E68 (MiDetermineThreadFaultCluster.c)
 *     MiReserveEnclavePages @ 0x140343DD0 (MiReserveEnclavePages.c)
 *     MiReturnPhysicalPoolPages @ 0x140520550 (MiReturnPhysicalPoolPages.c)
 *     MiPfPrepareSequentialReadList @ 0x140A5A190 (MiPfPrepareSequentialReadList.c)
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
