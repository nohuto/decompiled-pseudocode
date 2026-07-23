/*
 * XREFs of KeRcuReadLock @ 0x140386340
 * Callers:
 *     CcCanIWrite @ 0x1403854B0 (CcCanIWrite.c)
 *     CcIsFileObjectDirectMapped @ 0x140386384 (CcIsFileObjectDirectMapped.c)
 *     CcInitializeVolumeCacheMap @ 0x14038713C (CcInitializeVolumeCacheMap.c)
 *     CcScanLogHandleList @ 0x140387D58 (CcScanLogHandleList.c)
 *     CcFlushCachePreProcess @ 0x14039AF28 (CcFlushCachePreProcess.c)
 *     CcGetFlushedValidData @ 0x14039FE80 (CcGetFlushedValidData.c)
 *     CcDeferWrite @ 0x1403E3400 (CcDeferWrite.c)
 *     CcZeroData @ 0x140466A50 (CcZeroData.c)
 *     CcPostVolumeTelemetry @ 0x140495AE0 (CcPostVolumeTelemetry.c)
 *     CcPerfLogLoggedStreamsStats @ 0x1404DA8E0 (CcPerfLogLoggedStreamsStats.c)
 *     CcUpdateTimeOnLogHandles @ 0x1405B3CF4 (CcUpdateTimeOnLogHandles.c)
 * Callees:
 *     KiRcuReadLock @ 0x140223D4C (KiRcuReadLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
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
