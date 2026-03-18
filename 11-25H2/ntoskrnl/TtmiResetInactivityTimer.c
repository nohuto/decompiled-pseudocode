/*
 * XREFs of TtmiResetInactivityTimer @ 0x1407600D0
 * Callers:
 *     TtmiResetTerminalTimeouts @ 0x140760170 (TtmiResetTerminalTimeouts.c)
 *     TtmpUpdateTerminalState @ 0x140760BB0 (TtmpUpdateTerminalState.c)
 *     TtmpWnfInactivityTimeoutCallback @ 0x140760D70 (TtmpWnfInactivityTimeoutCallback.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeCancelTimer @ 0x1402ECAA0 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 *     TtmiLogInactivityTimerReset @ 0x14075D74C (TtmiLogInactivityTimerReset.c)
 */

void __fastcall TtmiResetInactivityTimer(int a1)
{
  __int64 v2; // rbx

  ExAcquireResourceExclusiveLite(&TtmpTerminalInactivityLock, 1u);
  if ( TtmpTerminalInactivityTimeout )
    KiSetTimerEx(
      (__int64)&TtmpTerminalInactivityTimer,
      TtmpTerminalInactivityTimeout,
      0,
      0,
      (__int64)&TtmpTerminalInactivityTimerDpc);
  else
    KeCancelTimer(&TtmpTerminalInactivityTimer);
  if ( a1 == 4 )
  {
    v2 = MEMORY[0xFFFFF78000000008];
    if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - TtmpLastInputInactivityResetTime) > 0x1312D00 )
      TtmiLogInactivityTimerReset(4);
    TtmpLastInputInactivityResetTime = v2;
  }
  else
  {
    TtmiLogInactivityTimerReset(a1);
  }
  ExReleaseResourceLite(&TtmpTerminalInactivityLock);
}
