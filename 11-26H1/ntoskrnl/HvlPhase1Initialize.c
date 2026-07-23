/*
 * XREFs of HvlPhase1Initialize @ 0x1405BB23C
 * Callers:
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024F100 (KeRegisterBugCheckReasonCallback.c)
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 *     HviIsAnyHypervisorPresent @ 0x1404DF970 (HviIsAnyHypervisorPresent.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1405BABF0 (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlpMapStatisticsPage @ 0x1405BCD60 (HvlpMapStatisticsPage.c)
 *     HvlpSetupCachedHypercallPages @ 0x1405BDA28 (HvlpSetupCachedHypercallPages.c)
 *     HvlpInitializePowerStatistics @ 0x1405C1F6C (HvlpInitializePowerStatistics.c)
 *     HvlpConfigureGhcbGuestOsId @ 0x1405C23C4 (HvlpConfigureGhcbGuestOsId.c)
 *     HvlpMapApicBackingPage @ 0x1405C249C (HvlpMapApicBackingPage.c)
 *     HvlpMapGhcb @ 0x1405C251C (HvlpMapGhcb.c)
 *     HvlpInitializeHvCrashdump @ 0x1405C3378 (HvlpInitializeHvCrashdump.c)
 *     MiMarkRetpolineBits @ 0x140B213C8 (MiMarkRetpolineBits.c)
 *     VslpIumPhase0Initialize @ 0x140CBFCEC (VslpIumPhase0Initialize.c)
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
