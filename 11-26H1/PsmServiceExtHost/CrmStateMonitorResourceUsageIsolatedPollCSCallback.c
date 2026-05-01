/*
 * XREFs of CrmStateMonitorResourceUsageIsolatedPollCSCallback @ 0x18001CD20
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateRoutineConnectedStandby @ 0x18001D3E0 (CrmStateRoutineConnectedStandby.c)
 *     CrmStateMonitorStateSet @ 0x1800200C0 (CrmStateMonitorStateSet.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 */

__int64 __fastcall CrmStateMonitorResourceUsageIsolatedPollCSCallback(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  int IsTimerSet; // eax
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  v3 = a1 - 64;
  v7 = 0LL;
  if ( (unsigned int)CrmStateRoutineConnectedStandby(a3) )
  {
    CempLockAcquireExclusive(&unk_1800E39A0);
    *((_QWORD *)&xmmword_1800E39B0 + 1) = 0LL;
    dword_1800E39A8 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800E39A0);
    v6 = 0;
    return CrmStateMonitorStateSet(v3, &v6, 4LL);
  }
  else
  {
    CempLockAcquireExclusive(&unk_1800E39A0);
    IsTimerSet = TpIsTimerSet(xmmword_1800E39B0);
    *((_QWORD *)&xmmword_1800E39B0 + 1) = v3;
    if ( !IsTimerSet )
    {
      RtlQueryUnbiasedInterruptTime(v3 + 96);
      TpSetTimer(xmmword_1800E39B0, &v7, 0LL, 2000LL);
    }
    dword_1800E39A8 = 0;
    return RtlReleaseSRWLockExclusive(&unk_1800E39A0);
  }
}
