/*
 * XREFs of AcpiQueueRecordBlackboxInformation @ 0x140054394
 * Callers:
 *     FreeContext @ 0x140003D30 (FreeContext.c)
 *     AmliWatchdogTimeoutAction @ 0x14006B97C (AmliWatchdogTimeoutAction.c)
 * Callees:
 *     <none>
 */

char AcpiQueueRecordBlackboxInformation()
{
  char v0; // cl

  v0 = 0;
  if ( _InterlockedIncrement(&dword_14008F7A0) == 1 )
  {
    ExQueueWorkItem(&AcpiRecordBlackboxWorkItem, DelayedWorkQueue);
    return 1;
  }
  return v0;
}
