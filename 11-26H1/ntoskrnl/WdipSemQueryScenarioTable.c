/*
 * XREFs of WdipSemQueryScenarioTable @ 0x140ADAD64
 * Callers:
 *     WdipSemEnableScenario @ 0x140AD9304 (WdipSemEnableScenario.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WdipSemQueryScenarioTable(_QWORD *a1, __int16 a2)
{
  __int64 v2; // r8
  volatile unsigned int i; // r9d
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = 0LL;
  if ( a1 )
  {
    for ( i = 0; i < stru_140F060A8.NextProcessor; ++i )
    {
      v6 = *((_QWORD *)&stru_140F060A8.SListFaultAddress + i);
      v7 = *a1 - *(_QWORD *)v6;
      if ( *a1 == *(_QWORD *)v6 )
        v7 = a1[1] - *(_QWORD *)(v6 + 8);
      if ( !v7 && a2 == *(_WORD *)(v6 + 16) )
        return *((_QWORD *)&stru_140F060A8.SListFaultAddress + i);
    }
  }
  return v2;
}
