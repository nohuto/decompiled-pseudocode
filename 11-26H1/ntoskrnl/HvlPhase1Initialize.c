/*
 * XREFs of HvlPhase1Initialize @ 0x1405B89CC
 * Callers:
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024D7A0 (KeRegisterBugCheckReasonCallback.c)
 *     MmMapIoSpaceEx @ 0x140363DC0 (MmMapIoSpaceEx.c)
 *     HviIsAnyHypervisorPresent @ 0x1404E63D0 (HviIsAnyHypervisorPresent.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1405B8380 (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlpMapStatisticsPage @ 0x1405BA4F0 (HvlpMapStatisticsPage.c)
 *     HvlpSetupCachedHypercallPages @ 0x1405BB1B8 (HvlpSetupCachedHypercallPages.c)
 *     HvlpInitializePowerStatistics @ 0x1405BF6FC (HvlpInitializePowerStatistics.c)
 *     HvlpConfigureGhcbGuestOsId @ 0x1405BFB54 (HvlpConfigureGhcbGuestOsId.c)
 *     HvlpMapApicBackingPage @ 0x1405BFC2C (HvlpMapApicBackingPage.c)
 *     HvlpMapGhcb @ 0x1405BFCAC (HvlpMapGhcb.c)
 *     HvlpInitializeHvCrashdump @ 0x1405C0B08 (HvlpInitializeHvCrashdump.c)
 *     MiMarkRetpolineBits @ 0x140B1F348 (MiMarkRetpolineBits.c)
 *     VslpIumPhase0Initialize @ 0x140CB9CAC (VslpIumPhase0Initialize.c)
 */

__int64 __fastcall HvlPhase1Initialize(__int64 a1)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0LL;
  if ( HviIsAnyHypervisorPresent() && (HvlpRootFlags & 4) == 0 )
  {
    HvlpHvIdentityInfoCallbackRecord.State = 0;
    KeRegisterBugCheckReasonCallback(
      &HvlpHvIdentityInfoCallbackRecord,
      HvlpHvIdentityInfoCallback,
      KbCallbackSecondaryDumpData,
      &HvlpComponentName);
  }
  if ( HvlHypervisorConnected )
  {
    if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
      MiMarkRetpolineBits(HvlpHypercallCodeVa, 4096LL, 1LL);
    HvlpSetupCachedHypercallPages(KeGetCurrentPrcb());
    HvlpInitializePowerStatistics();
    if ( (HvlpRootFlags & 0x10) != 0 )
    {
      v3 = 0LL;
      if ( (int)HvlpMapStatisticsPage(1LL, &v3, &v4) >= 0 )
        HvlpHypervisorStatsPage = MmMapIoSpaceEx(v4, 4096LL, 2u);
    }
    HvlConfigureMemoryZeroingOnReset(1);
    if ( HvlEnlightenments < 0 )
    {
      HvlpMapGhcb();
      HvlpConfigureGhcbGuestOsId();
      HvlpMapApicBackingPage();
    }
    HvlpFlags |= 8u;
    VslpIumPhase0Initialize(a1);
    if ( (HvlpRootFlags & 4) != 0 || VslVsmEnabled )
      HvlpInitializeHvCrashdump(*(_QWORD *)(a1 + 240) + 2504LL);
  }
  return 0LL;
}
