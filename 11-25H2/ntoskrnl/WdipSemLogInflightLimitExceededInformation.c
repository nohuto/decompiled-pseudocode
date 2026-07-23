/*
 * XREFs of WdipSemLogInflightLimitExceededInformation @ 0x140792F90
 * Callers:
 *     WdipSemReserveInstanceTableEntry @ 0x140A44018 (WdipSemReserveInstanceTableEntry.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     WdipSemFastFree @ 0x1406EDCC4 (WdipSemFastFree.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x1407931D4 (WdipSemUpdateFrequentScenarioTable.c)
 *     WdipSemUpdateInflightScenarioTable @ 0x14079330C (WdipSemUpdateInflightScenarioTable.c)
 *     WdipSemWriteInflightLimitExceededEvent @ 0x14079388C (WdipSemWriteInflightLimitExceededEvent.c)
 *     WdipSemSqmEnabled @ 0x140A43364 (WdipSemSqmEnabled.c)
 */

__int64 __fastcall WdipSemLogInflightLimitExceededInformation(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  unsigned int v6; // ebx
  int updated; // edi
  __int64 *i; // rsi
  _QWORD v10[125]; // [rsp+20h] [rbp-408h] BYREF
  unsigned int v11; // [rsp+408h] [rbp-20h]
  __int64 v12; // [rsp+430h] [rbp+8h] BYREF

  v6 = 0;
  v12 = 0LL;
  updated = 0;
  memset_0(v10, 0, 0x3F0uLL);
  if ( a1 && a3 )
  {
    if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_INFLIGHT_MAX) || (unsigned __int8)WdipSemSqmEnabled() )
    {
      for ( i = (__int64 *)WdipSemEnabledInstanceTable; &WdipSemEnabledInstanceTable != i; i = (__int64 *)*i )
      {
        updated = WdipSemUpdateInflightScenarioTable(i[4], *(unsigned __int16 *)(i[4] + 16), v10, &v12);
        if ( updated < 0 )
          goto LABEL_16;
      }
      if ( v12 )
      {
        if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_INFLIGHT_MAX) )
          WdipSemWriteInflightLimitExceededEvent(a1, a2, a3, v10);
        if ( (unsigned __int8)WdipSemSqmEnabled() )
          WdipSemUpdateFrequentScenarioTable(v12);
      }
      else
      {
        updated = -1073741823;
      }
    }
  }
  else
  {
    updated = -1073741811;
  }
LABEL_16:
  if ( v11 )
  {
    do
      WdipSemFastFree(5, (_SLIST_ENTRY *)v10[v6++]);
    while ( v6 < v11 );
  }
  return (unsigned int)updated;
}
