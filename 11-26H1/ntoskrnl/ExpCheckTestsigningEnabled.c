/*
 * XREFs of ExpCheckTestsigningEnabled @ 0x14077F3DC
 * Callers:
 *     ExpSetTimerObject @ 0x1406D2DD8 (ExpSetTimerObject.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1409D46E0 (RtlRunOnceExecuteOnce.c)
 */

char ExpCheckTestsigningEnabled()
{
  RtlRunOnceExecuteOnce(&ExpCheckTestSigningInit, (PRTL_RUN_ONCE_INIT_FN)ExpInitExpCheckTestSigningInfo, 0LL, 0LL);
  return ExSaPageGroupDescriptorArrayLock.WriteTransferCount;
}
