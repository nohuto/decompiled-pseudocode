/*
 * XREFs of PopClearShutdownMarker @ 0x14077F40C
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140C0ACC0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     <none>
 */

void PopClearShutdownMarker()
{
  HIDWORD(stru_140E67200.OtherOperationCount) = 0;
}
