/*
 * XREFs of NtSetIntervalProfile @ 0x14084B880
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140B38820 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     KeSetIntervalProfile @ 0x1407BDF28 (KeSetIntervalProfile.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS __cdecl NtSetIntervalProfile(ULONG Interval, KPROFILE_SOURCE Source)
{
  if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, KeGetCurrentThread()->PreviousMode) )
    return -1073741727;
  KeSetIntervalProfile(Interval, Source);
  return 0;
}
