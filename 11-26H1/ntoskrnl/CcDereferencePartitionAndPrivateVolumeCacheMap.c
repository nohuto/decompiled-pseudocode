/*
 * XREFs of CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x14039C160
 * Callers:
 *     CcCachemapUninitWorkerThread @ 0x1403850A0 (CcCachemapUninitWorkerThread.c)
 *     CcWorkerThread @ 0x1403865D0 (CcWorkerThread.c)
 *     CcAsyncReadWorker @ 0x140388380 (CcAsyncReadWorker.c)
 *     CcQuickLazyWriteScanForVolume @ 0x140389D20 (CcQuickLazyWriteScanForVolume.c)
 *     CcAsyncReadWorkerThread @ 0x14038A000 (CcAsyncReadWorkerThread.c)
 *     CcPostDeferredWrites @ 0x14039B61C (CcPostDeferredWrites.c)
 *     CcDeleteSharedCacheMap @ 0x14039BBF0 (CcDeleteSharedCacheMap.c)
 *     CcUninitializeCacheMap @ 0x14039C460 (CcUninitializeCacheMap.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403E3E90 (CcDeletePrivateVolumeCacheMap.c)
 *     CcAsyncLazywriteWorkerThread @ 0x1404BB4C0 (CcAsyncLazywriteWorkerThread.c)
 *     CcCompleteAsyncReadWorker @ 0x1404BEB80 (CcCompleteAsyncReadWorker.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x1404CEA30 (CcInitializeAsyncReadForNodeHelper.c)
 *     CcRemoveExternalCache @ 0x1405B12EC (CcRemoveExternalCache.c)
 *     CcRemoveExternalCacheEx @ 0x1405B1398 (CcRemoveExternalCacheEx.c)
 *     CcCompleteAsyncLazywriteWorkerThread @ 0x1405B3730 (CcCompleteAsyncLazywriteWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 */

char __fastcall CcDereferencePartitionAndPrivateVolumeCacheMap(__int64 a1, __int64 a2)
{
  signed __int64 v3; // rax
  bool v4; // cc
  signed __int64 v5; // rax
  char v6; // si
  signed __int64 v7; // rbx
  signed __int64 v8; // rbx

  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1296), 0xFFFFFFFFFFFFFFFFuLL);
  v4 = v3 <= 1;
  v5 = v3 - 1;
  if ( v4 )
  {
    if ( v5 )
      __fastfail(0xEu);
    v6 = 1;
    KeSetEvent((PRKEVENT)(a1 + 1328), 0, 0);
  }
  else
  {
    v6 = 0;
  }
  if ( !a2 )
    return 0;
  v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFFFFFFFFFFFFuLL);
  v4 = v7 <= 1;
  v8 = v7 - 1;
  if ( !v4 )
    return 0;
  if ( v8 )
    __fastfail(0xEu);
  return v6;
}
