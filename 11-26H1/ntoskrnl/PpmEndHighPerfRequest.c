/*
 * XREFs of PpmEndHighPerfRequest @ 0x1404A6098
 * Callers:
 *     PopSetupHighPerfPowerRequest @ 0x1407C8690 (PopSetupHighPerfPowerRequest.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x1407D1634 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopIssueActionRequest @ 0x140A37878 (PopIssueActionRequest.c)
 *     PdcPoPerfOverride @ 0x140A390F8 (PdcPoPerfOverride.c)
 *     PoClearBroadcast @ 0x140B33768 (PoClearBroadcast.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x1403ABF20 (KiSetTimerEx.c)
 *     PopPowerRequestReferenceRelease @ 0x1404A64A0 (PopPowerRequestReferenceRelease.c)
 */

void __fastcall PpmEndHighPerfRequest(int a1)
{
  __int64 v1; // rbx
  KIRQL v2; // di
  __int64 v3; // r8
  __int64 v4; // rcx

  v1 = a1;
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F10828.WaitBlock[2].Thread);
  if ( !PpmHighPerfDuration[v1] || unk_140F10E00 )
  {
    PopPowerRequestReferenceRelease(stru_140F10828.WaitBlock[2].WaitListEntry.Blink);
  }
  else
  {
    ++unk_140F10E04;
    v3 = 10000LL * (unsigned int)PpmHighPerfDuration[v1];
    v4 = unk_140F10E08;
    if ( unk_140F10E08 <= (unsigned __int64)(v3 + MEMORY[0xFFFFF78000000008]) )
    {
      v4 = v3 + MEMORY[0xFFFFF78000000008];
      unk_140F10E08 = v3 + MEMORY[0xFFFFF78000000008];
    }
    KiSetTimerEx(
      (__int64)&stru_140F10828.536,
      MEMORY[0xFFFFF78000000008] - v4,
      0,
      0,
      (__int64)&stru_140F10828.WaitBlock[3].WaitListEntry.Blink);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_140F10828.WaitBlock[2].Thread, v2);
}
