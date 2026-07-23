/*
 * XREFs of WdipSemSqmEnabled @ 0x1407787AC
 * Callers:
 *     WdipSemLogInflightLimitExceededInformation @ 0x140826B88 (WdipSemLogInflightLimitExceededInformation.c)
 *     WdipSemLogTimeoutInformation @ 0x140AD56D8 (WdipSemLogTimeoutInformation.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 */

bool WdipSemSqmEnabled()
{
  char v0; // bl

  v0 = 0;
  if ( EtwEventEnabled((REGHANDLE)stru_140F06A28.Header.WaitListHead.Flink, &WDI_SEM_EVENT_SQM_INCREMENT_DWORD) )
    return EtwEventEnabled((REGHANDLE)stru_140F06A28.Header.WaitListHead.Flink, &WDI_SEM_EVENT_SQM_ADD_TO_STREAM) != 0;
  return v0;
}
