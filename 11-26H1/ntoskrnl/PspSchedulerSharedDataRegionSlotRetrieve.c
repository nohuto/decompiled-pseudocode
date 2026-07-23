/*
 * XREFs of PspSchedulerSharedDataRegionSlotRetrieve @ 0x140A2B1FC
 * Callers:
 *     NtQueryInformationThread @ 0x140A28950 (NtQueryInformationThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSchedulerSharedDataRegionSlotRetrieve(struct _KTHREAD *a1, _QWORD *a2)
{
  _KPROCESS *Process; // r9
  unsigned int v4; // r8d
  _KSWAPPABLE_PAGE *SchedulerSharedSwappablePage; // rdx
  unsigned __int64 v6; // rdx

  if ( a1 == KeGetCurrentThread() )
  {
    Process = a1[1].Process;
    v4 = 0;
    if ( Process )
    {
      SchedulerSharedSwappablePage = a1->SchedulerSharedSwappablePage;
      if ( SchedulerSharedSwappablePage )
      {
        v6 = (__int64)((unsigned __int128)(((char *)SchedulerSharedSwappablePage - (char *)Process)
                                         * (__int128)0x6666666666666667LL) >> 64) >> 5;
        *a2 = (char *)Process->IdealProcessorAssignmentBlock
            + 64 * ((a1->SchedulerSharedOffset >> 6) + (((unsigned int)v6 + (v6 >> 63)) << 6));
      }
      else
      {
        return (unsigned int)-1073741275;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v4;
}
