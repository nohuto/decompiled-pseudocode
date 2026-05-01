/*
 * XREFs of CrmStateMonitorPostShellReadySetAndReset @ 0x18006DED4
 * Callers:
 *     CrmStateMonitorPostShellReadyTimeSinceLogonCallback @ 0x180048390 (CrmStateMonitorPostShellReadyTimeSinceLogonCallback.c)
 *     CrmStateMonitorPostShellReadyTimerCallback @ 0x180076D30 (CrmStateMonitorPostShellReadyTimerCallback.c)
 * Callees:
 *     CrmStateMonitorStateSet @ 0x1800200C0 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorListenerRemove @ 0x1800227B0 (CrmStateMonitorListenerRemove.c)
 */

__int64 __fastcall CrmStateMonitorPostShellReadySetAndReset(__int64 a1, int a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( *(_QWORD *)(a1 + 96) != a1 + 96 )
    CrmStateMonitorListenerRemove((int *)qword_1800E3890, a1 + 88);
  if ( *(_QWORD *)(a1 + 120) != a1 + 120 )
    CrmStateMonitorListenerRemove((int *)qword_1800E3898, a1 + 112);
  return CrmStateMonitorStateSet((unsigned int *)a1, &v4, 4uLL, 0);
}
