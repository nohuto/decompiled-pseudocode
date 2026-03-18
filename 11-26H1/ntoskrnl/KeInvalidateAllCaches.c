/*
 * XREFs of KeInvalidateAllCaches @ 0x14024FCE0
 * Callers:
 *     KeInvalidateRangeAllCachesNoIpi @ 0x14024FA80 (KeInvalidateRangeAllCachesNoIpi.c)
 *     MiFlushCacheForAttributeChange @ 0x14024FAF0 (MiFlushCacheForAttributeChange.c)
 *     MiChangePageAttribute @ 0x1402D8660 (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x140368E1C (MiChangePageAttributeBatch.c)
 *     KeFlushIoBuffers @ 0x140441180 (KeFlushIoBuffers.c)
 *     KeInvalidateRangeAllCaches @ 0x1404B8E20 (KeInvalidateRangeAllCaches.c)
 *     MiFlushCacheMdl @ 0x140516770 (MiFlushCacheMdl.c)
 *     MiRemovePhysicalMemoryBatchComplete @ 0x1406EA148 (MiRemovePhysicalMemoryBatchComplete.c)
 *     MiFlushCacheRange @ 0x14070D474 (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x140CFF38C (MiInitializeCacheFlushing.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxSetTimeStampBusy @ 0x140251194 (KxSetTimeStampBusy.c)
 *     KiIpiSendRequestEx @ 0x140329D60 (KiIpiSendRequestEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
