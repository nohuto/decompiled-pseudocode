/*
 * XREFs of CcReferencePartitionAndPrivateVolumeCacheMap @ 0x140386DD4
 * Callers:
 *     CcPostWorkQueueRegular @ 0x14038641C (CcPostWorkQueueRegular.c)
 *     CcWorkerThread @ 0x1403865D0 (CcWorkerThread.c)
 *     CcPostWorkQueueAsyncRead @ 0x140387C88 (CcPostWorkQueueAsyncRead.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x140388074 (CcPostWorkQueueAsyncLazywrite.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x1403881CC (CcShouldSpinAsyncReadWorkerThread.c)
 *     CcIncrementWriteBehindPriority @ 0x1403896A4 (CcIncrementWriteBehindPriority.c)
 *     CcDeferWrite @ 0x1403E0210 (CcDeferWrite.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x1404CEA30 (CcInitializeAsyncReadForNodeHelper.c)
 *     CcPostWorkQueueSpecial @ 0x1404EEB44 (CcPostWorkQueueSpecial.c)
 *     CcReEngageWorkerThreads @ 0x14052B834 (CcReEngageWorkerThreads.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcReferencePartitionAndPrivateVolumeCacheMap(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1296));
  if ( result <= 1 )
    __fastfail(0xEu);
  if ( a2 )
  {
    result = _InterlockedIncrement64((volatile signed __int64 *)(a2 + 8));
    if ( result <= 1 )
      __fastfail(0xEu);
  }
  return result;
}
