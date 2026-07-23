/*
 * XREFs of WdipSemLogInflightLimitExceededInformation @ 0x140826B88
 * Callers:
 *     WdipSemReserveInstanceTableEntry @ 0x140AD79E0 (WdipSemReserveInstanceTableEntry.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     WdipSemSqmEnabled @ 0x1407787AC (WdipSemSqmEnabled.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x140826CD4 (WdipSemUpdateFrequentScenarioTable.c)
 *     WdipSemUpdateInflightScenarioTable @ 0x140826E20 (WdipSemUpdateInflightScenarioTable.c)
 *     WdipSemWriteInflightLimitExceededEvent @ 0x140827430 (WdipSemWriteInflightLimitExceededEvent.c)
 *     WdipSemFastFree @ 0x140AD7F00 (WdipSemFastFree.c)
 */

__int64 __fastcall WdipSemLogInflightLimitExceededInformation(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  unsigned int v6; // ebx
  int updated; // edi
  struct _KTHREAD *i; // rsi
  _QWORD v10[125]; // [rsp+20h] [rbp-408h] BYREF
  unsigned int v11; // [rsp+408h] [rbp-20h]
  __int64 v12; // [rsp+430h] [rbp+8h] BYREF

  v6 = 0;
  v12 = 0LL;
  updated = 0;
  memset_0(v10, 0, 0x3F0uLL);
  if ( a1 && a3 )
  {
    if ( EtwEventEnabled((REGHANDLE)stru_140F06A28.Header.WaitListHead.Flink, &WDI_SEM_EVENT_SCENARIO_INFLIGHT_MAX)
      || WdipSemSqmEnabled() )
    {
      for ( i = (struct _KTHREAD *)stru_140F049E8.SListFaultAddress;
            &stru_140F049E8.SListFaultAddress != (void **)i;
            i = *(struct _KTHREAD **)&i->Header.Lock )
      {
        updated = WdipSemUpdateInflightScenarioTable(
                    i->QuantumTarget,
                    *(unsigned __int16 *)(i->QuantumTarget + 16),
                    v10,
                    &v12);
        if ( updated < 0 )
          goto LABEL_16;
      }
      if ( v12 )
      {
        if ( EtwEventEnabled((REGHANDLE)stru_140F06A28.Header.WaitListHead.Flink, &WDI_SEM_EVENT_SCENARIO_INFLIGHT_MAX) )
          WdipSemWriteInflightLimitExceededEvent(a1, a2, a3, v10);
        if ( WdipSemSqmEnabled() )
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
      WdipSemFastFree(5LL, v10[v6++]);
    while ( v6 < v11 );
  }
  return (unsigned int)updated;
}
