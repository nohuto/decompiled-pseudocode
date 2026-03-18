/*
 * XREFs of WdipSemSqmEnabled @ 0x140A43364
 * Callers:
 *     WdipSemLogInflightLimitExceededInformation @ 0x140792F90 (WdipSemLogInflightLimitExceededInformation.c)
 *     WdipSemLogTimeoutInformation @ 0x140A432CC (WdipSemLogTimeoutInformation.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 */

bool WdipSemSqmEnabled()
{
  char v0; // bl

  v0 = 0;
  if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SQM_INCREMENT_DWORD) )
    return EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SQM_ADD_TO_STREAM) != 0;
  return v0;
}
