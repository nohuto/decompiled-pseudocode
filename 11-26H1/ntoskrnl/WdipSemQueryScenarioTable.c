/*
 * XREFs of WdipSemQueryScenarioTable @ 0x140AD7814
 * Callers:
 *     WdipSemEnableScenario @ 0x140AD5DB4 (WdipSemEnableScenario.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WdipSemQueryScenarioTable(_QWORD *a1, __int16 a2)
{
  __int64 v2; // r8
  unsigned int i; // r9d
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = 0LL;
  if ( a1 )
  {
    for ( i = 0; i < LODWORD(stru_140F042A0.SchedulerSharedSystemSlot); ++i )
    {
      v6 = *((_QWORD *)&stru_140F042A0.Timer.TimerListEntry.Flink + i);
      v7 = *a1 - *(_QWORD *)v6;
      if ( *a1 == *(_QWORD *)v6 )
        v7 = a1[1] - *(_QWORD *)(v6 + 8);
      if ( !v7 && a2 == *(_WORD *)(v6 + 16) )
        return *((_QWORD *)&stru_140F042A0.Timer.TimerListEntry.Flink + i);
    }
  }
  return v2;
}
