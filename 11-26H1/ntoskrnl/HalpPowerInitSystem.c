/*
 * XREFs of HalpPowerInitSystem @ 0x140BEA950
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140366CB0 (MmUnlockPagableImageSection.c)
 *     MmLockPagableDataSection @ 0x140ABB180 (MmLockPagableDataSection.c)
 *     HalpPowerInitDiscard @ 0x140CAE400 (HalpPowerInitDiscard.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140CAE4F8 (HalpPowerInitFwPerformanceTableMappings.c)
 */

__int64 __fastcall HalpPowerInitSystem(int a1, __int64 a2, __int64 a3)
{
  if ( a1 == 8 )
  {
    HalpPowerInitDiscard(a3);
  }
  else if ( a1 == 17 )
  {
    if ( LOBYTE(HalpDeviceBlockUnblockPushLock.UserAffinity) >= 5u )
      HalpPowerInitFwPerformanceTableMappings();
    HalpSleepPageLock = MmLockPagableDataSection(HalpSaveDmaControllerState);
    MmUnlockPagableImageSection(HalpSleepPageLock);
  }
  return 0LL;
}
