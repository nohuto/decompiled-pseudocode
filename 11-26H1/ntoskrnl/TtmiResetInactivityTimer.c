/*
 * XREFs of TtmiResetInactivityTimer @ 0x1407EBFE0
 * Callers:
 *     TtmiResetTerminalTimeouts @ 0x1407EC080 (TtmiResetTerminalTimeouts.c)
 *     TtmpUpdateTerminalState @ 0x1407ECAE0 (TtmpUpdateTerminalState.c)
 *     TtmpWnfInactivityTimeoutCallback @ 0x1407ECC90 (TtmpWnfInactivityTimeoutCallback.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KiSetTimerEx @ 0x1403ABF20 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1403AD790 (KeCancelTimer.c)
 *     TtmiLogInactivityTimerReset @ 0x1407E9840 (TtmiLogInactivityTimerReset.c)
 */

void __fastcall TtmiResetInactivityTimer(int a1)
{
  struct _LIST_ENTRY *v2; // rbx

  ExAcquireResourceExclusiveLite((PERESOURCE)&PsAltSystemCallRegistrationLock.SavedApcStateFill[16], 1u);
  if ( PsAltSystemCallRegistrationLock.NpxState )
    KiSetTimerEx(
      (__int64)&PsAltSystemCallRegistrationLock.PriorityFloorCounts[16],
      PsAltSystemCallRegistrationLock.NpxState,
      0,
      0,
      (__int64)&PsAltSystemCallRegistrationLock.MutantListHead);
  else
    KeCancelTimer((PKTIMER)&PsAltSystemCallRegistrationLock.PriorityFloorCounts[16]);
  if ( a1 == 4 )
  {
    v2 = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000008];
    if ( MEMORY[0xFFFFF78000000008]
       - (unsigned __int64)PsAltSystemCallRegistrationLock.SavedApcState.ApcListHead[0].Flink > 0x1312D00 )
      TtmiLogInactivityTimerReset(4);
    PsAltSystemCallRegistrationLock.SavedApcState.ApcListHead[0].Flink = v2;
  }
  else
  {
    TtmiLogInactivityTimerReset(a1);
  }
  ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.SavedApcStateFill[16]);
}
