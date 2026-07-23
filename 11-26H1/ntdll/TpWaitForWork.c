/*
 * XREFs of TpWaitForWork @ 0x1800851A0
 * Callers:
 *     RtlpFcFreeChangeRegistration @ 0x180084F5C (RtlpFcFreeChangeRegistration.c)
 *     LdrpDetectDetour @ 0x180084FB0 (LdrpDetectDetour.c)
 * Callees:
 *     TppWorkWait @ 0x1800166F0 (TppWorkWait.c)
 */

// local variable allocation has failed, the output may be wrong!
void __cdecl TpWaitForWork(PTP_WORK Work, LOGICAL CancelPendingCallbacks)
{
  volatile int Flags; // eax
  _PEB_LDR_DATA *Ldr; // rcx

  if ( !Work
    || (Flags = Work->CleanupGroupMember.Flags, (Flags & 0x10000) != 0)
    || (Flags & 0x20000) != 0
    || (__int64 (__fastcall **)(PVOID))Work->CleanupGroupMember.VFuncs != &TppWorkpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    Ldr = NtCurrentPeb()->Ldr;
    if ( !Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter(Ldr, *(_QWORD *)&CancelPendingCallbacks);
  }
  else
  {
    TppWorkWait(Work, CancelPendingCallbacks);
  }
}
