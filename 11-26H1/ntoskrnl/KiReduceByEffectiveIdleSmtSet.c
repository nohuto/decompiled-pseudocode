/*
 * XREFs of KiReduceByEffectiveIdleSmtSet @ 0x14022A160
 * Callers:
 *     KiChooseTargetProcessor @ 0x1402370C0 (KiChooseTargetProcessor.c)
 *     KiTryLocalThreadSchedule @ 0x140238D30 (KiTryLocalThreadSchedule.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x140228920 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiReduceByEffectiveIdleSmtSet(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned __int32 v11; // eax
  __int64 v12; // rdx
  unsigned __int32 v13; // ett

  v3 = *(_QWORD *)(a1 + 36512) & ~*(_QWORD *)(a1 + 200);
  if ( (v3 & *a2) == 0
    || (*a2 & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 16LL) & v3) != v3
    || (*(_BYTE *)(a1 + 14524) & 1) != 0
    || *(_DWORD *)(a1 + 33752) )
  {
    return 0;
  }
  v4 = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(a1 + 32) )
  {
    _disable();
    KiUpdateTotalCyclesCurrentThread(a1, *(_QWORD *)(a1 + 8), 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v11 = *SchedulerAssist;
      do
      {
        v12 = v11;
        LODWORD(v12) = v11 & 0xFFDFFFFF;
        v13 = v11;
        v11 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v11 & 0xFFDFFFFF, v11);
      }
      while ( v13 != v11 );
      if ( (v11 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v12, SchedulerAssist, v5);
    }
    _enable();
  }
  v8 = *(_DWORD *)(v4 + 80);
  v9 = *(_DWORD *)(v4 + 84);
  if ( v8 < v9 && v9 - v8 >= KiShortExecutionCycles )
    return 0;
  *a2 &= v3;
  return 1;
}
