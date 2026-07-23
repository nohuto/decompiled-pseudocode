/*
 * XREFs of WdipSemUpdateProviderTableWithEvent @ 0x140B630F4
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x140826454 (WdipSemLoadScenarioTable.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     WdipSemWriteProviderLimitExceededEvent @ 0x1408275A4 (WdipSemWriteProviderLimitExceededEvent.c)
 *     WdipSemFastAllocate @ 0x140AD7DB0 (WdipSemFastAllocate.c)
 *     WdipSemQueryProviderTable @ 0x140B631C0 (WdipSemQueryProviderTable.c)
 */

__int64 __fastcall WdipSemUpdateProviderTableWithEvent(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 ProviderTable; // rax
  PSLIST_ENTRY v4; // rax
  _OWORD *v5; // rsi

  v1 = 0;
  if ( a1 )
  {
    ProviderTable = WdipSemQueryProviderTable();
    if ( ProviderTable )
    {
      *(_QWORD *)(a1 + 40) = ProviderTable;
    }
    else if ( (unsigned int)dword_140F06A20 < 0x400 )
    {
      v4 = WdipSemFastAllocate(2, 0x50u);
      v5 = v4;
      if ( v4 )
      {
        memset_0(v4, 0, 0x50uLL);
        *v5 = *(_OWORD *)a1;
        *((_QWORD *)&stru_140F049E8.StackBase + (unsigned int)dword_140F06A20++) = v5;
        *(_QWORD *)(a1 + 40) = v5;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
    else
    {
      if ( EtwEventEnabled((REGHANDLE)stru_140F06A28.Header.WaitListHead.Flink, &WDI_SEM_EVENT_INIT_PROVIDER_MAX) )
        WdipSemWriteProviderLimitExceededEvent(a1);
      return (unsigned int)-1073741823;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
