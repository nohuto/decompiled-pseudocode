/*
 * XREFs of PpmEventTraceMakeupPerfCheck @ 0x1404A6E08
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x1404A6C10 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 */

void PpmEventTraceMakeupPerfCheck()
{
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(
           (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
           &PPM_ETW_PERF_CHECK_MAKEUP) )
    {
      EtwWriteEx(
        (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
        &PPM_ETW_PERF_CHECK_MAKEUP,
        0LL,
        0,
        0LL,
        0LL,
        0,
        0LL);
    }
  }
}
