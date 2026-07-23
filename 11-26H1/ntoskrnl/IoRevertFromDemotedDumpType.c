/*
 * XREFs of IoRevertFromDemotedDumpType @ 0x1405C9DD8
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405FC154 (KiAttemptBugcheckRecovery.c)
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x1405FC864 (KiBugCheckRecoveryPrepareForCrashDump.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 IoRevertFromDemotedDumpType()
{
  __int64 result; // rax

  result = qword_140E66020;
  if ( qword_140E66020 )
    return guard_dispatch_icall_no_overrides(8LL, 0LL);
  return result;
}
