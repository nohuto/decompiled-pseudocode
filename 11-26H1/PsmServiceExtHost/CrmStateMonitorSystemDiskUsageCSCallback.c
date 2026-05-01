/*
 * XREFs of CrmStateMonitorSystemDiskUsageCSCallback @ 0x18001CE10
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateRoutineConnectedStandby @ 0x18001D3E0 (CrmStateRoutineConnectedStandby.c)
 *     CrmStateMonitorSystemDiskUsageIdleTimeGet @ 0x18001F830 (CrmStateMonitorSystemDiskUsageIdleTimeGet.c)
 *     CrmStateMonitorStateSet @ 0x1800200C0 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall CrmStateMonitorSystemDiskUsageCSCallback(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  v3 = a1 - 64;
  if ( (unsigned int)CrmStateRoutineConnectedStandby(a3) )
  {
    TpSetTimer(*(_QWORD *)(v3 + 88), 0LL, 0LL, 0LL);
    TpWaitForTimer(*(_QWORD *)(v3 + 88), 1LL);
    v6 = 0;
    return CrmStateMonitorStateSet(v3, &v6, 4LL);
  }
  else
  {
    if ( (int)CrmStateMonitorSystemDiskUsageIdleTimeGet(v3, v3 + 112) < 0 )
      *(_QWORD *)(v3 + 112) = -1LL;
    RtlQueryUnbiasedInterruptTime(v3 + 104);
    v6 = 100;
    CrmStateMonitorStateSet(v3, &v6, 4LL);
    v5 = *(_QWORD *)(v3 + 88);
    v7 = -100000000LL;
    return TpSetTimer(v5, &v7, 10000LL, 2000LL);
  }
}
