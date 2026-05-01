/*
 * XREFs of CrmStateMonitorPostResumeSetAndReset @ 0x1800492F4
 * Callers:
 *     CrmStateMonitorPostResumeSuspendCallback @ 0x180048470 (CrmStateMonitorPostResumeSuspendCallback.c)
 *     CrmStateMonitorPostResumeTimerCallback @ 0x18006D7F0 (CrmStateMonitorPostResumeTimerCallback.c)
 * Callees:
 *     CrmStateMonitorStateSet @ 0x1800200C0 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorListenerRemove @ 0x1800227B0 (CrmStateMonitorListenerRemove.c)
 */

__int64 __fastcall CrmStateMonitorPostResumeSetAndReset(__int64 a1, int a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( *(_QWORD *)(a1 + 104) != a1 + 104 )
    CrmStateMonitorListenerRemove((int *)qword_1800E3890, a1 + 96);
  if ( *(_QWORD *)(a1 + 128) != a1 + 128 )
    CrmStateMonitorListenerRemove((int *)qword_1800E3898, a1 + 120);
  return CrmStateMonitorStateSet((unsigned int *)a1, &v4, 4uLL, 0);
}
