/*
 * XREFs of PopCoalesingTimerDpcCallback @ 0x140609870
 * Callers:
 *     <none>
 * Callees:
 *     PopCheckForWork @ 0x1404274F4 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x14042756C (PopGetPolicyWorker.c)
 */

void PopCoalesingTimerDpcCallback()
{
  PopGetPolicyWorker(32);
  PopCheckForWork();
}
