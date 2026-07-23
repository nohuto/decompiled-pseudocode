/*
 * XREFs of MmIssueMemoryListCommand @ 0x140871100
 * Callers:
 *     NtManagePartition @ 0x140802EF0 (NtManagePartition.c)
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 *     PfpLogEventRequest @ 0x140B51D4C (PfpLogEventRequest.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     MmPerformMemoryListCommand @ 0x140C12670 (MmPerformMemoryListCommand.c)
 */

__int64 __fastcall MmIssueMemoryListCommand(unsigned int a1, KPROCESSOR_MODE a2, __int64 a3)
{
  if ( a1 > 5 )
    return 3221225485LL;
  if ( a1 == 3 || SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a2) )
    return MmPerformMemoryListCommand(a1, a3);
  return 3221225569LL;
}
