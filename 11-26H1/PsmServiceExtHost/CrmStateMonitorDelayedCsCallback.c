/*
 * XREFs of CrmStateMonitorDelayedCsCallback @ 0x18001D1B0
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateRoutineConnectedStandby @ 0x18001D3E0 (CrmStateRoutineConnectedStandby.c)
 *     CrmStateMonitorStateSet @ 0x1800200C0 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall CrmStateMonitorDelayedCsCallback(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  v3 = a1 - 64;
  if ( (unsigned int)CrmStateRoutineConnectedStandby(a3) )
  {
    v6 = 1;
    CrmStateMonitorStateSet(v3, &v6, 4LL);
    v4 = *(_QWORD *)(v3 + 88);
    v7 = -36000000000LL;
    return TpSetTimer(v4, &v7, 0LL, 60000LL);
  }
  else
  {
    TpSetTimer(*(_QWORD *)(v3 + 88), 0LL, 0LL, 0LL);
    TpWaitForTimer(*(_QWORD *)(v3 + 88), 1LL);
    v6 = 0;
    return CrmStateMonitorStateSet(v3, &v6, 4LL);
  }
}
