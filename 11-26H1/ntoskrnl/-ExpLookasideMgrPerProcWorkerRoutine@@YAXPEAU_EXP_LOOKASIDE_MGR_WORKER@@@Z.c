/*
 * XREFs of ?ExpLookasideMgrPerProcWorkerRoutine@@YAXPEAU_EXP_LOOKASIDE_MGR_WORKER@@@Z @ 0x140AD8060
 * Callers:
 *     <none>
 * Callees:
 *     ?ExpScanProcessorLookasideLists@@YAXKK@Z @ 0x140AD80F8 (-ExpScanProcessorLookasideLists@@YAXKK@Z.c)
 */

void __fastcall ExpLookasideMgrPerProcWorkerRoutine(struct _EXP_LOOKASIDE_MGR_WORKER *a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbp
  unsigned __int16 i; // bx
  unsigned __int64 v5; // rdx

  v1 = *((_QWORD *)a1 + 2);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 56LL) / 0x989680uLL;
  for ( i = 0; ; v2 = *(_QWORD *)(v1 + 8LL * i + 8) )
  {
    while ( v2 )
    {
      _BitScanForward64(&v5, v2);
      v2 &= ~(1LL << v5);
      ExpScanProcessorLookasideLists(
        *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * i].Flink
        + (unsigned int)(unsigned __int8)v5),
        v3);
    }
    if ( ++i >= *(_WORD *)v1 )
      break;
  }
}
