/*
 * XREFs of ?KiSelectIdealProcessorForProcess@@YAGPEAU_KSCHEDULER_SUBNODE@@PEAU_GROUP_AFFINITY@@@Z @ 0x1404ADE78
 * Callers:
 *     KiSetIdealNodeProcessByGroup @ 0x1404ADD98 (KiSetIdealNodeProcessByGroup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSelectIdealProcessorForProcess(struct _KSCHEDULER_SUBNODE *a1, struct _GROUP_AFFINITY *a2)
{
  unsigned __int64 LLCLeaders; // rbx
  unsigned __int64 Mask; // rdi
  int v4; // r8d
  __int64 v5; // r11
  unsigned __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // rax

  LLCLeaders = a1->LLCLeaders;
  Mask = a2->Mask;
  v4 = a2->Group << 6;
  if ( LLCLeaders )
  {
    LOBYTE(v5) = a1->ProcessSeed & 0x3F;
    v6 = ~((1LL << v5) - 1) & LLCLeaders;
    do
    {
      v7 = v6 & ~(1LL << v5);
      v6 = a1->LLCLeaders;
      if ( v7 )
        v6 = v7;
      _BitScanForward64((unsigned __int64 *)&v5, v6);
      v8 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
                            + (unsigned int)(v4 + v5))];
    }
    while ( (*(_QWORD *)(v8 + 36528) & Mask) == 0 );
    _BitScanForward64((unsigned __int64 *)&v8, *(_QWORD *)(v8 + 36528) & Mask);
    a1->ProcessSeed = v8;
  }
  else
  {
    _BitScanForward64((unsigned __int64 *)&v8, a2->Mask & a1->Affinity.Mask);
  }
  return *((unsigned __int16 *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
         + 2 * (unsigned int)(v4 + v8));
}
