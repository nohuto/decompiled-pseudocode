/*
 * XREFs of CrmStateMonitorCPUUsageCSCallback @ 0x18001CFD0
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateRoutineConnectedStandby @ 0x18001D3E0 (CrmStateRoutineConnectedStandby.c)
 *     CrmStateMonitorStateSet @ 0x1800200C0 (CrmStateMonitorStateSet.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall CrmStateMonitorCPUUsageCSCallback(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  int v9; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v10; // [rsp+28h] [rbp-1A0h] BYREF
  _QWORD SystemInformation[48]; // [rsp+30h] [rbp-198h] BYREF

  memset_0(SystemInformation, 0, 0x178uLL);
  v9 = 0;
  v10 = 0LL;
  v5 = a1 - 56;
  v6 = CrmStateRoutineConnectedStandby(a3);
  v7 = a1 - 56;
  if ( v6 )
  {
    CempLockAcquireExclusive(v7);
    TpSetTimer(*(_QWORD *)(a1 + 24), 0LL, 0LL, 0LL);
    *(_DWORD *)(v5 + 8) = 0;
    RtlReleaseSRWLockExclusive(a1 - 56);
    TpWaitForTimer(*(_QWORD *)(a1 + 24), 1LL);
    return CrmStateMonitorStateSet(a1 - 64, &v9, 4LL);
  }
  else
  {
    CempLockAcquireExclusive(v7);
    if ( !(unsigned int)TpIsTimerSet(*(_QWORD *)(a1 + 24)) )
    {
      NtQuerySystemInformation(SystemPerformanceInformation, SystemInformation, 0x178u, 0LL);
      *(_QWORD *)(a1 + 48) = SystemInformation[0];
      RtlQueryUnbiasedInterruptTime(a1 + 40);
      v9 = 100;
      CrmStateMonitorStateSet(a1 - 64, &v9, 4LL);
      v10 = -10000LL * *(unsigned int *)(a1 + 32);
      TpSetTimer(*(_QWORD *)(a1 + 24), &v10, 0LL, 2000LL);
    }
    *(_DWORD *)(v5 + 8) = 0;
    return RtlReleaseSRWLockExclusive(a1 - 56);
  }
}
