/*
 * XREFs of PopSuspendResumeInvocation @ 0x140B37780
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1406105F0 (PdcPoCurrentPdcPhase.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x1407CF534 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x1407D4188 (PopSendSuspendResumeApplicationNotification.c)
 *     PopSendSuspendResumeServiceNotification @ 0x1407D42B8 (PopSendSuspendResumeServiceNotification.c)
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopSuspendResumeInvocation(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140E677C8 )
    return guard_dispatch_icall_no_overrides(a1, qword_140E677C8);
  return result;
}
