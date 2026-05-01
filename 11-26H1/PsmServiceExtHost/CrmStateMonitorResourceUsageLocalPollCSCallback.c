/*
 * XREFs of CrmStateMonitorResourceUsageLocalPollCSCallback @ 0x18001D270
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateRoutineConnectedStandby @ 0x18001D3E0 (CrmStateRoutineConnectedStandby.c)
 *     CrmStateMonitorResourceUsageQuery @ 0x18001D7D8 (CrmStateMonitorResourceUsageQuery.c)
 *     CrmStateMonitorStateSet @ 0x1800200C0 (CrmStateMonitorStateSet.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 */

__int64 __fastcall CrmStateMonitorResourceUsageLocalPollCSCallback(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rdi
  int v4; // eax
  unsigned int *v5; // rcx
  __int64 v7; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v3 = (unsigned int *)(a1 - 64);
  v8[0] = 0LL;
  v9 = 0;
  v10 = 0LL;
  v4 = CrmStateRoutineConnectedStandby(a3);
  v5 = v3 + 2;
  if ( v4 )
  {
    CempLockAcquireExclusive(v5);
    TpSetTimer(*((_QWORD *)v3 + 11), 0LL, 0LL, 0LL);
    v3[4] = 0;
    RtlReleaseSRWLockExclusive(v3 + 2);
    TpWaitForTimer(*((_QWORD *)v3 + 11), 1LL);
    return CrmStateMonitorStateSet(v3, &v9, 4LL);
  }
  else
  {
    CempLockAcquireExclusive(v5);
    if ( !(unsigned int)TpIsTimerSet(*((_QWORD *)v3 + 11)) )
    {
      CrmStateMonitorResourceUsageQuery(v3 + 26, *v3, v8);
      RtlQueryUnbiasedInterruptTime(v3 + 24);
      v9 = 100;
      CrmStateMonitorStateSet(v3, &v9, 4LL);
      v7 = *((_QWORD *)v3 + 11);
      v10 = -100000000LL;
      TpSetTimer(v7, &v10, 0LL, 2000LL);
    }
    v3[4] = 0;
    return RtlReleaseSRWLockExclusive(v3 + 2);
  }
}
