/*
 * XREFs of PopNetIsCompliantNicPresent @ 0x140B462D4
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14042AB54 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     <none>
 */

bool PopNetIsCompliantNicPresent()
{
  return LODWORD(stru_140F0C428.Header.WaitListHead.Blink) != 0;
}
