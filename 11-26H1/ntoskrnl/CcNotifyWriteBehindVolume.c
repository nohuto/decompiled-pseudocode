/*
 * XREFs of CcNotifyWriteBehindVolume @ 0x1403E0844
 * Callers:
 *     CcCanIWrite @ 0x140383700 (CcCanIWrite.c)
 *     CcFlushCachePostProcess @ 0x1403998E0 (CcFlushCachePostProcess.c)
 *     CcUninitializeCacheMap @ 0x14039C460 (CcUninitializeCacheMap.c)
 *     CcDecrementOpenCount @ 0x14039E74C (CcDecrementOpenCount.c)
 *     CcNotifyWriteBehindHelper @ 0x1403E01E0 (CcNotifyWriteBehindHelper.c)
 *     CcDeferWrite @ 0x1403E0210 (CcDeferWrite.c)
 *     CcCoalescingCallBackHelper @ 0x1403E0480 (CcCoalescingCallBackHelper.c)
 *     CcNotifyWriteBehindAllVolumesHelper @ 0x1403E0600 (CcNotifyWriteBehindAllVolumesHelper.c)
 *     CcScheduleLazyWriteScan @ 0x1403E0640 (CcScheduleLazyWriteScan.c)
 *     CcInitializeCacheMapInternal @ 0x1403E1230 (CcInitializeCacheMapInternal.c)
 *     CcAsyncLazywriteWorkerThread @ 0x1404BB4C0 (CcAsyncLazywriteWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KiSetTimerEx @ 0x1403ABF20 (KiSetTimerEx.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

LONG __fastcall CcNotifyWriteBehindVolume(__int64 a1, char a2)
{
  LONG result; // eax

  if ( *(_BYTE *)(a1 + 1173) && *(_BYTE *)(a1 + 1236) )
  {
    if ( (a2 & 1) != 0 )
      result = KeSetEvent((PRKEVENT)(a1 + 816), 0, 0);
    if ( (a2 & 2) != 0 )
      result = KeSetEvent((PRKEVENT)(a1 + 840), 0, 0);
    if ( (a2 & 4) != 0 )
    {
      if ( !*(_BYTE *)(a1 + 984) )
        KeBugCheckEx(0x34u, 0x754uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      result = KiSetTimerEx(a1 + 920, 0LL, 0, 0, 0LL);
    }
    if ( (a2 & 8) != 0 )
      result = KeSetEvent((PRKEVENT)(a1 + 864), 0, 0);
    if ( (a2 & 0x10) != 0 )
      result = KeSetEvent((PRKEVENT)(a1 + 888), 0, 0);
    if ( (a2 & 0x20) != 0 )
      return KeSetEvent((PRKEVENT)(a1 + 1576), 0, 0);
  }
  return result;
}
