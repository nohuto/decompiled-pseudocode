/*
 * XREFs of ExpCheckTestsigningEnabled @ 0x14077C8E8
 * Callers:
 *     ExpSetTimerObject @ 0x1406CEDA8 (ExpSetTimerObject.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1409E7CD0 (RtlRunOnceExecuteOnce.c)
 */

char ExpCheckTestsigningEnabled()
{
  RtlRunOnceExecuteOnce(&ExpCheckTestSigningInit, (PRTL_RUN_ONCE_INIT_FN)ExpInitExpCheckTestSigningInfo, 0LL, 0LL);
  return ExSaPageGroupDescriptorArrayLock.InGlobalForegroundList;
}
