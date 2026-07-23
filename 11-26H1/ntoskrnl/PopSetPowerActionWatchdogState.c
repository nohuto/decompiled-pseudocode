/*
 * XREFs of PopSetPowerActionWatchdogState @ 0x1404F7F48
 * Callers:
 *     PopIssueActionRequest @ 0x1409F3438 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1403B74A0 (KeCancelTimer.c)
 *     PopGetPowerActionWatchdogTimeout @ 0x14060A35C (PopGetPowerActionWatchdogTimeout.c)
 *     PopPowerActionWatchdog @ 0x14060A380 (PopPowerActionWatchdog.c)
 *     PopUpdatePowerActionWatchdogTimeouts @ 0x1407D4538 (PopUpdatePowerActionWatchdogTimeouts.c)
 */

void __fastcall PopSetPowerActionWatchdogState(int a1)
{
  KIRQL v2; // di
  int PowerActionWatchdogTimeout; // eax

  if ( a1 < 3 )
  {
    if ( a1 == 1 )
      PopUpdatePowerActionWatchdogTimeouts();
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_140F10548);
    if ( dword_140F105D4 == a1 )
      goto LABEL_12;
    if ( dword_140F105D4 )
    {
      if ( !KeCancelTimer(&stru_140F10590) )
      {
        PopPowerActionWatchdog(0LL, 0LL, 0LL, 0LL);
LABEL_12:
        KeReleaseSpinLock(&qword_140F10548, v2);
        return;
      }
      qword_140F105D8 = 0LL;
      dword_140F105E4 = 0;
      dword_140F105D4 = 0;
    }
    if ( a1 )
    {
      PowerActionWatchdogTimeout = PopGetPowerActionWatchdogTimeout((unsigned int)a1);
      if ( PowerActionWatchdogTimeout )
      {
        dword_140F105E0 = PowerActionWatchdogTimeout;
        qword_140F105D8 = MEMORY[0xFFFFF78000000008];
        dword_140F105D4 = a1;
        KiSetTimerEx(
          (__int64)&stru_140F10590,
          -10000000LL * PowerActionWatchdogTimeout,
          0,
          0,
          (__int64)&dword_140F10550);
      }
    }
    goto LABEL_12;
  }
}
