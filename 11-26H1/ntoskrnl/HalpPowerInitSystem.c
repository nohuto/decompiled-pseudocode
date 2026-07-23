/*
 * XREFs of HalpPowerInitSystem @ 0x140BF0950
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140368A50 (MmUnlockPagableImageSection.c)
 *     MmLockPagableDataSection @ 0x140ABC640 (MmLockPagableDataSection.c)
 *     HalpPowerInitDiscard @ 0x140CB4440 (HalpPowerInitDiscard.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140CB4538 (HalpPowerInitFwPerformanceTableMappings.c)
 */

__int64 __fastcall HalpPowerInitSystem(int a1, __int64 a2, __int64 a3)
{
  if ( a1 == 8 )
  {
    HalpPowerInitDiscard(a3);
  }
  else if ( a1 == 17 )
  {
    if ( LOBYTE(HalpDeviceBlockUnblockPushLock.QueueListEntry.Flink) >= 5u )
      HalpPowerInitFwPerformanceTableMappings();
    HalpSleepPageLock = MmLockPagableDataSection(HalpSaveDmaControllerState);
    MmUnlockPagableImageSection(HalpSleepPageLock);
  }
  return 0LL;
}
