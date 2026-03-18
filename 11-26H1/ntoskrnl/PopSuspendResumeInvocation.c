/*
 * XREFs of PopSuspendResumeInvocation @ 0x140B35570
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x14060D4E0 (PdcPoCurrentPdcPhase.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x1407CC494 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x1407D10E8 (PopSendSuspendResumeApplicationNotification.c)
 *     PopSendSuspendResumeServiceNotification @ 0x1407D1218 (PopSendSuspendResumeServiceNotification.c)
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopSuspendResumeInvocation(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140E67568 )
    return guard_dispatch_icall_no_overrides(a1, qword_140E67568);
  return result;
}
