/*
 * XREFs of KiFindRankBiasedIdleSmtSet @ 0x14022A5C4
 * Callers:
 *     KiSelectIdleProcessor @ 0x14022A240 (KiSelectIdleProcessor.c)
 *     KiChooseTargetProcessor @ 0x1402370C0 (KiChooseTargetProcessor.c)
 *     KiTryLocalThreadSchedule @ 0x140238D30 (KiTryLocalThreadSchedule.c)
 *     KiSearchForNewThreadsOnTarget @ 0x140241E30 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     <none>
 */

char __fastcall KiFindRankBiasedIdleSmtSet(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r9
  unsigned __int64 v4; // r8
  int v5; // r10d
  unsigned __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax

  v3 = 0LL;
  v4 = *a2 & *(_QWORD *)(a1 + 16);
  if ( !v4 )
    return 0;
  v5 = *(unsigned __int16 *)(a1 + 136) << 6;
  do
  {
    _BitScanForward64(&v6, v4);
    v7 = 1LL << v6;
    v4 ^= 1LL << v6;
    v8 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
                          + (unsigned int)(v5 + v6))];
    v9 = *(_QWORD *)(v8 + 36512) & ~*(_QWORD *)(v8 + 200);
    if ( (v4 & v9) == v9 )
    {
      v4 ^= v9;
    }
    else
    {
      _BitScanForward64(&v10, v9);
      if ( (*(_DWORD *)(KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
                                         + (unsigned int)(v5 + v10))]
                      + 236) & 0x200) != 0 )
        v3 |= v7;
    }
  }
  while ( v4 );
  if ( !v3 )
    return 0;
  *a2 = v3;
  return 1;
}
