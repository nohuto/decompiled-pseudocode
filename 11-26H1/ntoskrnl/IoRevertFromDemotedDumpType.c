/*
 * XREFs of IoRevertFromDemotedDumpType @ 0x1405C7508
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405F9734 (KiAttemptBugcheckRecovery.c)
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x1405F9E44 (KiBugCheckRecoveryPrepareForCrashDump.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 IoRevertFromDemotedDumpType()
{
  __int64 result; // rax

  result = qword_140E65E80;
  if ( qword_140E65E80 )
    return guard_dispatch_icall_no_overrides(8LL, 0LL);
  return result;
}
