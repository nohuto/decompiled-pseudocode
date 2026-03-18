/*
 * XREFs of PopQueryPowerButtonSuppressionCount @ 0x140B49970
 * Callers:
 *     PopCalculateCsSummary @ 0x14042A4C8 (PopCalculateCsSummary.c)
 *     PopCaptureSleepStudyStatistics @ 0x14042AB54 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopQueryPowerButtonSuppressionCount(_DWORD *a1)
{
  __int64 result; // rax

  result = LODWORD(PopWeakChargerLock.QueueListEntry.Blink);
  *a1 = PopWeakChargerLock.QueueListEntry.Blink;
  return result;
}
