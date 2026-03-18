/*
 * XREFs of WdipSemSqmEnabled @ 0x1407757AC
 * Callers:
 *     WdipSemLogInflightLimitExceededInformation @ 0x140820978 (WdipSemLogInflightLimitExceededInformation.c)
 *     WdipSemLogTimeoutInformation @ 0x140AD8C30 (WdipSemLogTimeoutInformation.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 */

bool WdipSemSqmEnabled()
{
  char v0; // bl

  v0 = 0;
  if ( EtwEventEnabled((REGHANDLE)stru_140F03F40.Timer.TimerListEntry.Flink, &WDI_SEM_EVENT_SQM_INCREMENT_DWORD) )
    return EtwEventEnabled((REGHANDLE)stru_140F03F40.Timer.TimerListEntry.Flink, &WDI_SEM_EVENT_SQM_ADD_TO_STREAM) != 0;
  return v0;
}
