/*
 * XREFs of KeRcuReadLock @ 0x140384590
 * Callers:
 *     CcCanIWrite @ 0x140383700 (CcCanIWrite.c)
 *     CcIsFileObjectDirectMapped @ 0x1403845D4 (CcIsFileObjectDirectMapped.c)
 *     CcInitializeVolumeCacheMap @ 0x14038538C (CcInitializeVolumeCacheMap.c)
 *     CcScanLogHandleList @ 0x140385FA8 (CcScanLogHandleList.c)
 *     CcFlushCachePreProcess @ 0x1403991C8 (CcFlushCachePreProcess.c)
 *     CcGetFlushedValidData @ 0x14039E120 (CcGetFlushedValidData.c)
 *     CcDeferWrite @ 0x1403E0210 (CcDeferWrite.c)
 *     CcZeroData @ 0x14046D2D0 (CcZeroData.c)
 *     CcPostVolumeTelemetry @ 0x14049BF90 (CcPostVolumeTelemetry.c)
 *     CcPerfLogLoggedStreamsStats @ 0x1404E1200 (CcPerfLogLoggedStreamsStats.c)
 *     CcUpdateTimeOnLogHandles @ 0x1405B14E4 (CcUpdateTimeOnLogHandles.c)
 * Callees:
 *     KiRcuReadLock @ 0x1402223BC (KiRcuReadLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeRcuReadLock(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v2; // rdx

  CurrentIrql = KeGetCurrentIrql();
  v2 = 2LL;
  if ( CurrentIrql < 2u )
  {
    a1 = KeGetCurrentIrql();
    if ( (_BYTE)a1 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  LOBYTE(a1) = CurrentIrql;
  return KiRcuReadLock(a1, v2);
}
