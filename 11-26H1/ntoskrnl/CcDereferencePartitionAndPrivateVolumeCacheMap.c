/*
 * XREFs of CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x14039DEC0
 * Callers:
 *     CcCachemapUninitWorkerThread @ 0x140386E50 (CcCachemapUninitWorkerThread.c)
 *     CcWorkerThread @ 0x140388380 (CcWorkerThread.c)
 *     CcAsyncReadWorker @ 0x14038A130 (CcAsyncReadWorker.c)
 *     CcQuickLazyWriteScanForVolume @ 0x14038BAD0 (CcQuickLazyWriteScanForVolume.c)
 *     CcAsyncReadWorkerThread @ 0x14038BDB0 (CcAsyncReadWorkerThread.c)
 *     CcPostDeferredWrites @ 0x14039D37C (CcPostDeferredWrites.c)
 *     CcDeleteSharedCacheMap @ 0x14039D950 (CcDeleteSharedCacheMap.c)
 *     CcUninitializeCacheMap @ 0x14039E1C0 (CcUninitializeCacheMap.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403E7080 (CcDeletePrivateVolumeCacheMap.c)
 *     CcAsyncLazywriteWorkerThread @ 0x1404B4CA0 (CcAsyncLazywriteWorkerThread.c)
 *     CcCompleteAsyncReadWorker @ 0x1404B83D0 (CcCompleteAsyncReadWorker.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x1404C8460 (CcInitializeAsyncReadForNodeHelper.c)
 *     CcRemoveExternalCache @ 0x1405B3AFC (CcRemoveExternalCache.c)
 *     CcRemoveExternalCacheEx @ 0x1405B3BA8 (CcRemoveExternalCacheEx.c)
 *     CcCompleteAsyncLazywriteWorkerThread @ 0x1405B5F40 (CcCompleteAsyncLazywriteWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
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
