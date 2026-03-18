/*
 * XREFs of WdipSemLogTimeoutInformation @ 0x140AD8C30
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x140AD8D80 (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     WdipSemSqmEnabled @ 0x1407757AC (WdipSemSqmEnabled.c)
 *     WdipSemSqmLogTimeoutDataPoints @ 0x140821D5C (WdipSemSqmLogTimeoutDataPoints.c)
 *     WdipSemWriteTimeoutEvent @ 0x140AD8CC8 (WdipSemWriteTimeoutEvent.c)
 */

__int64 __fastcall WdipSemLogTimeoutInformation(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  int v3; // edi
  int v6; // ebx

  v3 = a2;
  v6 = 0;
  if ( EtwEventEnabled((REGHANDLE)stru_140F03F40.Timer.TimerListEntry.Flink, &WDI_SEM_EVENT_SCENARIO_TIMEOUT) )
  {
    v6 = WdipSemWriteTimeoutEvent(a1, (unsigned __int16)v3, a3);
    if ( v6 < 0 )
      v6 = 0;
  }
  if ( WdipSemSqmEnabled() )
  {
    v6 = WdipSemSqmLogTimeoutDataPoints(a1, v3);
    if ( v6 < 0 )
      return 0;
  }
  return (unsigned int)v6;
}
