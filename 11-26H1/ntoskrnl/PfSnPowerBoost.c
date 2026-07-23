/*
 * XREFs of PfSnPowerBoost @ 0x140988C2C
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1409887A0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1403B74A0 (KeCancelTimer.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     ExpNtUpdateWnfStateData @ 0x1409C6210 (ExpNtUpdateWnfStateData.c)
 */

void __fastcall PfSnPowerBoost(PEX_RUNDOWN_REF RunRef, int a2)
{
  if ( a2 )
  {
    if ( !_InterlockedExchangeAdd((volatile signed __int32 *)&stru_140E67200.WaitBlockFill11[36], 1u) )
      ExpNtUpdateWnfStateData(&WNF_SEB_APP_LAUNCH_PREFETCH, 0LL, 0, 0, 1);
    ExAcquireRundownProtection_0(RunRef);
    KiSetTimerEx((__int64)&RunRef[1], -30000000LL, 0, 0, (__int64)&RunRef[9]);
  }
  else
  {
    if ( KeCancelTimer((PKTIMER)&RunRef[1]) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&stru_140E67200.WaitBlockFill11[36], 0xFFFFFFFF) == 1 )
        ExpNtUpdateWnfStateData(&WNF_SEB_APP_LAUNCH_PREFETCH, 0LL, 0, 0, 1);
      ExReleaseRundownProtection_0(RunRef);
    }
    ExWaitForRundownProtectionRelease(RunRef);
  }
}
