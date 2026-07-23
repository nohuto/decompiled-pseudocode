/*
 * XREFs of TtmiResetInactivityTimer @ 0x1407F1B44
 * Callers:
 *     TtmiResetTerminalTimeouts @ 0x1407F1BE4 (TtmiResetTerminalTimeouts.c)
 *     TtmpUpdateTerminalState @ 0x1407F2640 (TtmpUpdateTerminalState.c)
 *     TtmpWnfInactivityTimeoutCallback @ 0x1407F27F0 (TtmpWnfInactivityTimeoutCallback.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1403B74A0 (KeCancelTimer.c)
 *     TtmiLogInactivityTimerReset @ 0x1407EF3A0 (TtmiLogInactivityTimerReset.c)
 */

void __fastcall TtmiResetInactivityTimer(int a1)
{
  struct _LIST_ENTRY *v2; // rbx

  ExAcquireResourceExclusiveLite((PERESOURCE)&PsAltSystemCallRegistrationLock.QueuedScb, 1u);
  if ( PsAltSystemCallRegistrationLock.OtherOperationCount )
    KiSetTimerEx(
      (__int64)&PsAltSystemCallRegistrationLock.MutantListHead.Blink,
      PsAltSystemCallRegistrationLock.OtherOperationCount,
      0,
      0,
      (__int64)&PsAltSystemCallRegistrationLock.PriorityFloorCounts[24]);
  else
    KeCancelTimer((PKTIMER)&PsAltSystemCallRegistrationLock.MutantListHead.Blink);
  if ( a1 == 4 )
  {
    v2 = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000008];
    if ( MEMORY[0xFFFFF78000000008]
       - (unsigned __int64)PsAltSystemCallRegistrationLock.SuspendEvent.Header.WaitListHead.Blink > 0x1312D00 )
      TtmiLogInactivityTimerReset(4);
    PsAltSystemCallRegistrationLock.SuspendEvent.Header.WaitListHead.Blink = v2;
  }
  else
  {
    TtmiLogInactivityTimerReset(a1);
  }
  ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.QueuedScb);
}
