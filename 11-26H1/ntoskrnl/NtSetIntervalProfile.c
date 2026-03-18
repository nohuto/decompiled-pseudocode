/*
 * XREFs of NtSetIntervalProfile @ 0x1408427E0
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140B36610 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     KeSetIntervalProfile @ 0x1407BAEC8 (KeSetIntervalProfile.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall NtSetIntervalProfile(int a1, int a2)
{
  if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, KeGetCurrentThread()->PreviousMode) )
    return 3221225569LL;
  KeSetIntervalProfile(a1, a2);
  return 0LL;
}
