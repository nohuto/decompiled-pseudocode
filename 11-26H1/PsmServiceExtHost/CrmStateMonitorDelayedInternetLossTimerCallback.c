/*
 * XREFs of CrmStateMonitorDelayedInternetLossTimerCallback @ 0x180076A00
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x1800200C0 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall CrmStateMonitorDelayedInternetLossTimerCallback(__int64 a1, unsigned int *a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 1;
  return CrmStateMonitorStateSet(a2, &v3, 4uLL, 0);
}
