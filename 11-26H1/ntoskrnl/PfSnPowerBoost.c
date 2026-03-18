/*
 * XREFs of PfSnPowerBoost @ 0x1409B7C4C
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1409B77C0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     KiSetTimerEx @ 0x1403ABF20 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1403AD790 (KeCancelTimer.c)
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 *     ExpNtUpdateWnfStateData @ 0x14094A8A0 (ExpNtUpdateWnfStateData.c)
 */

void __fastcall PfSnPowerBoost(PEX_RUNDOWN_REF RunRef, int a2)
{
  unsigned __int64 v3; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 )
  {
    if ( !_InterlockedExchangeAdd((volatile signed __int32 *)&stru_140E66FF0.WaitBlockFill11[36], 1u) )
    {
      v3 = 0xFFFFFFFF00000003uLL;
      ExpNtUpdateWnfStateData(&WNF_SEB_APP_LAUNCH_PREFETCH, (__int64)&v3, 8u, 0LL, 0LL, 0, 0, 1);
    }
    ExAcquireRundownProtection_0(RunRef);
    KiSetTimerEx((__int64)&RunRef[1], -30000000LL, 0, 0, (__int64)&RunRef[9]);
  }
  else
  {
    if ( KeCancelTimer((PKTIMER)&RunRef[1]) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&stru_140E66FF0.WaitBlockFill11[36], 0xFFFFFFFF) == 1 )
      {
        v3 = 0xFFFFFFFF00000001uLL;
        ExpNtUpdateWnfStateData(&WNF_SEB_APP_LAUNCH_PREFETCH, (__int64)&v3, 8u, 0LL, 0LL, 0, 0, 1);
      }
      ExReleaseRundownProtection_0(RunRef);
    }
    ExWaitForRundownProtectionRelease(RunRef);
  }
}
