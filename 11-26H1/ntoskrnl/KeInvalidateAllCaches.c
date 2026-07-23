/*
 * XREFs of KeInvalidateAllCaches @ 0x140251640
 * Callers:
 *     KeInvalidateRangeAllCachesNoIpi @ 0x1402513E0 (KeInvalidateRangeAllCachesNoIpi.c)
 *     MiFlushCacheForAttributeChange @ 0x140251450 (MiFlushCacheForAttributeChange.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x14036ABBC (MiChangePageAttributeBatch.c)
 *     KeFlushIoBuffers @ 0x140439C90 (KeFlushIoBuffers.c)
 *     KeInvalidateRangeAllCaches @ 0x1404B2650 (KeInvalidateRangeAllCaches.c)
 *     MiFlushCacheMdl @ 0x1405101E0 (MiFlushCacheMdl.c)
 *     MiRemovePhysicalMemoryBatchComplete @ 0x1406EEDE8 (MiRemovePhysicalMemoryBatchComplete.c)
 *     MiFlushCacheRange @ 0x140712124 (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x140D0572C (MiInitializeCacheFlushing.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxSetTimeStampBusy @ 0x140252AF4 (KxSetTimeStampBusy.c)
 *     KiIpiSendRequestEx @ 0x14032BD90 (KiIpiSendRequestEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

BOOLEAN KeInvalidateAllCaches(void)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v1; // cl
  unsigned int CurrentPrcb; // edi

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 12 )
    __writecr8(0xCuLL);
  if ( KiIrqlFlags )
  {
    v1 = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v1, 12LL);
  }
  CurrentPrcb = (unsigned int)KeGetCurrentPrcb();
  if ( (unsigned __int8)KxSetTimeStampBusy(&KiCacheFlushTimeStamp) )
  {
    KiIpiSendRequestEx(CurrentPrcb, 1, 0, 0, 6LL, (__int64)KeSweepLocalCaches, 0LL);
    _InterlockedIncrement(&KiCacheFlushTimeStamp);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return 1;
}
