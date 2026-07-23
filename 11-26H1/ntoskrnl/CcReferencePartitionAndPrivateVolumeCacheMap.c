/*
 * XREFs of CcReferencePartitionAndPrivateVolumeCacheMap @ 0x140388B84
 * Callers:
 *     CcPostWorkQueueRegular @ 0x1403881CC (CcPostWorkQueueRegular.c)
 *     CcWorkerThread @ 0x140388380 (CcWorkerThread.c)
 *     CcPostWorkQueueAsyncRead @ 0x140389A38 (CcPostWorkQueueAsyncRead.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x140389E24 (CcPostWorkQueueAsyncLazywrite.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x140389F7C (CcShouldSpinAsyncReadWorkerThread.c)
 *     CcIncrementWriteBehindPriority @ 0x14038B454 (CcIncrementWriteBehindPriority.c)
 *     CcDeferWrite @ 0x1403E3400 (CcDeferWrite.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x1404C8460 (CcInitializeAsyncReadForNodeHelper.c)
 *     CcPostWorkQueueSpecial @ 0x1404E8124 (CcPostWorkQueueSpecial.c)
 *     CcReEngageWorkerThreads @ 0x14052DD54 (CcReEngageWorkerThreads.c)
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
