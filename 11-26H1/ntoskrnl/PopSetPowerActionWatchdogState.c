/*
 * XREFs of PopSetPowerActionWatchdogState @ 0x1404FE998
 * Callers:
 *     PopIssueActionRequest @ 0x140A37878 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x1403ABF20 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1403AD790 (KeCancelTimer.c)
 *     PopGetPowerActionWatchdogTimeout @ 0x1406077FC (PopGetPowerActionWatchdogTimeout.c)
 *     PopPowerActionWatchdog @ 0x140607820 (PopPowerActionWatchdog.c)
 *     PopUpdatePowerActionWatchdogTimeouts @ 0x1407D1498 (PopUpdatePowerActionWatchdogTimeouts.c)
 */

void __fastcall PopSetPowerActionWatchdogState(int a1)
{
  KIRQL v2; // di
  int PowerActionWatchdogTimeout; // eax

  if ( a1 < 3 )
  {
    if ( a1 == 1 )
      PopUpdatePowerActionWatchdogTimeouts();
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_140F0FC88);
    if ( dword_140F0FD14 == a1 )
      goto LABEL_12;
    if ( dword_140F0FD14 )
    {
      if ( !KeCancelTimer(&qword_140F0FCD0) )
      {
        PopPowerActionWatchdog(0LL, 0LL, 0LL, 0LL);
LABEL_12:
        KeReleaseSpinLock(&qword_140F0FC88, v2);
        return;
      }
      qword_140F0FD18 = 0LL;
      dword_140F0FD24 = 0;
      dword_140F0FD14 = 0;
    }
    if ( a1 )
    {
      PowerActionWatchdogTimeout = PopGetPowerActionWatchdogTimeout((unsigned int)a1);
      if ( PowerActionWatchdogTimeout )
      {
        dword_140F0FD20 = PowerActionWatchdogTimeout;
        qword_140F0FD18 = MEMORY[0xFFFFF78000000008];
        dword_140F0FD14 = a1;
        KiSetTimerEx(
          (__int64)&qword_140F0FCD0,
          -10000000LL * PowerActionWatchdogTimeout,
          0,
          0,
          (__int64)&dword_140F0FC90);
      }
    }
    goto LABEL_12;
  }
}
