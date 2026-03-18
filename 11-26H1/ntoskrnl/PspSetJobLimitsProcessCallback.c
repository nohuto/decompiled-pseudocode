/*
 * XREFs of PspSetJobLimitsProcessCallback @ 0x140A8FE60
 * Callers:
 *     <none>
 * Callees:
 *     PspApplyJobLimitsToProcess @ 0x140A8FEB8 (PspApplyJobLimitsToProcess.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x140B3984C (PspAddProcessToWorkingSetChangeList.c)
 */

__int64 __fastcall PspSetJobLimitsProcessCallback(struct _KPROCESS *Object, __int64 a2)
{
  if ( (Object[1].DirectoryTableBase & 1) == 0 )
  {
    PspApplyJobLimitsToProcess(Object);
    if ( (*(_DWORD *)(a2 + 8) & 1) == 0 && *(_QWORD *)a2 != Object[1].Padding[3] )
      PspAddProcessToWorkingSetChangeList(Object);
  }
  return 0LL;
}
