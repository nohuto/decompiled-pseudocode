/*
 * XREFs of PpmEventTraceMakeupPerfCheck @ 0x1404A0498
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x1404A02A0 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 */

void PpmEventTraceMakeupPerfCheck()
{
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_CHECK_MAKEUP) )
      EtwWriteEx(PpmEtwHandle, &PPM_ETW_PERF_CHECK_MAKEUP, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
}
