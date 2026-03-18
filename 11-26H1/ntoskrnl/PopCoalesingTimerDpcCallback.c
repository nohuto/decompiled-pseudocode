/*
 * XREFs of PopCoalesingTimerDpcCallback @ 0x140606D70
 * Callers:
 *     <none>
 * Callees:
 *     PopCheckForWork @ 0x1404385D4 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x14043864C (PopGetPolicyWorker.c)
 */

void PopCoalesingTimerDpcCallback()
{
  PopGetPolicyWorker(32);
  PopCheckForWork();
}
