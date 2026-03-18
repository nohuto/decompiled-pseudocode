/*
 * XREFs of PopQueryInputSuppressionCount @ 0x140B46548
 * Callers:
 *     PopCalculateCsSummary @ 0x14042A4C8 (PopCalculateCsSummary.c)
 *     PopCaptureSleepStudyStatistics @ 0x14042AB54 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopQueryInputSuppressionCount(_DWORD *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(&dword_140E67634, 0);
  *a1 = result;
  return result;
}
