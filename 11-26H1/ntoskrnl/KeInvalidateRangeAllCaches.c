/*
 * XREFs of KeInvalidateRangeAllCaches @ 0x1404B2650
 * Callers:
 *     KiFlushRangeAllCaches @ 0x1405F3990 (KiFlushRangeAllCaches.c)
 *     MiPersistMemory @ 0x1406FF834 (MiPersistMemory.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x1402513E0 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KeInvalidateAllCaches @ 0x140251640 (KeInvalidateAllCaches.c)
 *     KiIpiSendRequestEx @ 0x14032BD90 (KiIpiSendRequestEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __stdcall KeInvalidateRangeAllCaches(PVOID BaseAddress, ULONG Length)
{
  PVOID v3; // rsi
  unsigned __int8 CurrentIrql; // bl

  v3 = BaseAddress;
  if ( Length >= KiLargestCacheSize )
  {
    KeInvalidateAllCaches();
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 12 )
      __writecr8(0xCuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(BaseAddress) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(BaseAddress, 12LL);
    }
    KiIpiSendRequestEx((__int64)KeGetCurrentPrcb(), 1LL, 0LL, 0, 7LL, 0LL, 0LL);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    KeInvalidateRangeAllCachesNoIpi((__int64)v3, Length);
  }
}
