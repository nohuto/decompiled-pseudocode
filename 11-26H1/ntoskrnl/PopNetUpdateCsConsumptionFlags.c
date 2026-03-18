/*
 * XREFs of PopNetUpdateCsConsumptionFlags @ 0x140B30410
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1404EA630 (PopNetEvaluationWorkerCallback.c)
 *     PopPdcCsDeviceNotification @ 0x140B3018C (PopPdcCsDeviceNotification.c)
 * Callees:
 *     <none>
 */

bool PopNetUpdateCsConsumptionFlags()
{
  bool result; // al

  if ( qword_140E26F48 )
  {
    if ( (word_140E27018 & 0x100) == 0 )
    {
      result = LODWORD(stru_140F0C428.Header.WaitListHead.Blink) != 0;
      HIBYTE(word_140E27018) = (LODWORD(stru_140F0C428.Header.WaitListHead.Blink) != 0) | HIBYTE(word_140E27018) & 0xFE;
    }
  }
  return result;
}
