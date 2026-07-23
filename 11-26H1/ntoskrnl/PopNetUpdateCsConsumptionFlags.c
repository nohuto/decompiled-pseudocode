/*
 * XREFs of PopNetUpdateCsConsumptionFlags @ 0x140B32614
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1404E39E0 (PopNetEvaluationWorkerCallback.c)
 *     PopPdcCsDeviceNotification @ 0x140B32390 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     <none>
 */

bool PopNetUpdateCsConsumptionFlags()
{
  bool result; // al

  if ( qword_140E27088 )
  {
    if ( (word_140E27158 & 0x100) == 0 )
    {
      result = *(_DWORD *)&PopPdcDeviceListLock.SchedulerApcFill5[44] != 0;
      HIBYTE(word_140E27158) = (*(_DWORD *)&PopPdcDeviceListLock.SchedulerApcFill5[44] != 0) | HIBYTE(word_140E27158) & 0xFE;
    }
  }
  return result;
}
