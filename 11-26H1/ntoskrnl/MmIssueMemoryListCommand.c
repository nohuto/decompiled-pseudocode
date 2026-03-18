/*
 * XREFs of MmIssueMemoryListCommand @ 0x14086AD20
 * Callers:
 *     NtManagePartition @ 0x1407FD4C0 (NtManagePartition.c)
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 *     PfpLogEventRequest @ 0x140B4F4BC (PfpLogEventRequest.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     MmPerformMemoryListCommand @ 0x140C0C460 (MmPerformMemoryListCommand.c)
 */

__int64 __fastcall MmIssueMemoryListCommand(unsigned int a1, KPROCESSOR_MODE a2, __int64 a3)
{
  if ( a1 > 5 )
    return 3221225485LL;
  if ( a1 == 3 || SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a2) )
    return MmPerformMemoryListCommand(a1, a3);
  return 3221225569LL;
}
