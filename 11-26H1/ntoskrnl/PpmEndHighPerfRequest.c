/*
 * XREFs of PpmEndHighPerfRequest @ 0x14049F728
 * Callers:
 *     PopSetupHighPerfPowerRequest @ 0x1407CB6F0 (PopSetupHighPerfPowerRequest.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x1407D46D4 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopIssueActionRequest @ 0x1409F3438 (PopIssueActionRequest.c)
 *     PdcPoPerfOverride @ 0x1409F4CB8 (PdcPoPerfOverride.c)
 *     PoClearBroadcast @ 0x140B35BB8 (PoClearBroadcast.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     PopPowerRequestReferenceRelease @ 0x14049FB30 (PopPowerRequestReferenceRelease.c)
 */

void __fastcall PpmEndHighPerfRequest(int a1)
{
  __int64 v1; // rbx
  KIRQL v2; // di
  __int64 v3; // r8
  __int64 v4; // rcx

  v1 = a1;
  v2 = KeAcquireSpinLockRaiseToDpc(&PpmHighPerfRequestLock);
  if ( !PpmHighPerfDuration[v1] || PpmHighPerfDeferredEndDisabled )
  {
    PopPowerRequestReferenceRelease(PpmHighPerfPowerRequest);
  }
  else
  {
    ++PpmHighPerfDeferredEndCount;
    v3 = 10000LL * (unsigned int)PpmHighPerfDuration[v1];
    v4 = PpmHighPerfDeferredEndTime;
    if ( PpmHighPerfDeferredEndTime <= (unsigned __int64)(v3 + MEMORY[0xFFFFF78000000008]) )
    {
      v4 = v3 + MEMORY[0xFFFFF78000000008];
      PpmHighPerfDeferredEndTime = v3 + MEMORY[0xFFFFF78000000008];
    }
    KiSetTimerEx((__int64)&PpmHighPerfEndTimer, MEMORY[0xFFFFF78000000008] - v4, 0, 0, (__int64)&PpmHighPerfEndDpc);
  }
  KeReleaseSpinLock(&PpmHighPerfRequestLock, v2);
}
