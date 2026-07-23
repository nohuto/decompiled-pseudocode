/*
 * XREFs of TpIsTimerSet @ 0x180089C30
 * Callers:
 *     TpSetTimerEx @ 0x180089470 (TpSetTimerEx.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 */

LOGICAL __cdecl TpIsTimerSet(PTP_TIMER Timer)
{
  volatile int Flags; // eax
  __int64 v2; // rax

  if ( !Timer
    || Timer->WaitTimer
    || (Flags = Timer->Work.CleanupGroupMember.Flags, (Flags & 0x10000) != 0)
    || (Flags & 0x20000) != 0
    || (__int64 (__fastcall **)(PVOID))Timer->Work.CleanupGroupMember.VFuncs != &TppTimerpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    LODWORD(v2) = 0;
  }
  else
  {
    return Timer->DueTime != 0;
  }
  return v2;
}
