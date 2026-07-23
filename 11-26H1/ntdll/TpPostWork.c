/*
 * XREFs of TpPostWork @ 0x180088400
 * Callers:
 *     RtlpFcCallChangeCallbacks @ 0x18005FAA4 (RtlpFcCallChangeCallbacks.c)
 *     LdrpQueueWork @ 0x180087FA0 (LdrpQueueWork.c)
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x18008EE30 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1801492A0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     <none>
 */

void __cdecl TpPostWork(PTP_WORK Work)
{
  _PEB_LDR_DATA *Ldr; // rdx
  volatile int Flags; // eax

  if ( !Work
    || (Flags = Work->CleanupGroupMember.Flags, (Flags & 0x10000) != 0)
    || (Flags & 0x20000) != 0
    || (__int64 (__fastcall **)(PVOID))Work->CleanupGroupMember.VFuncs != &TppWorkpCleanupGroupMemberVFuncs
    || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(Work, Ldr);
  }
  else
  {
    TppWorkPost((__int64)Work);
  }
}
