/*
 * XREFs of PopNetResiliencyPhaseStateChanged @ 0x1407DE7B0
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1406105F0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     KeCancelTimer2 @ 0x1403B40F0 (KeCancelTimer2.c)
 *     PopQueueWorkItem @ 0x1404C8890 (PopQueueWorkItem.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopNetResiliencyPhaseStateChanged(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // [rsp+20h] [rbp-8h]

  v2 = a1;
  PopAcquirePolicyLock(a1, a2);
  v3 = 0LL;
  if ( v2 )
  {
    PopPdcDeviceListLock.SchedulerApcFill3[40] = 1;
    _InterlockedExchange(&PopNetGracePeriodState, 1);
    v4 = 10000000LL * (unsigned int)PopStandbyConnectivityGracePeriod;
    if ( MEMORY[0xFFFFF78000000008] < (unsigned __int64)(v4 + qword_140E27088) )
      v3 = v4 + qword_140E27088 - MEMORY[0xFFFFF78000000008];
    KeSetTimer2((__int64)&PopPdcDeviceListLock.SchedulerApc.SystemArgument2, -v3, 0LL, 0LL);
  }
  else
  {
    PopPdcDeviceListLock.SchedulerApcFill3[40] = 0;
    KeCancelTimer2((__int64)&PopPdcDeviceListLock.SchedulerApc.SystemArgument2);
    _InterlockedExchange(&PopNetGracePeriodState, 0);
    PopQueueWorkItem((__int64)&PopPdcDeviceListLock.PriorityFloorSummary, DelayedWorkQueue);
  }
  return PopReleasePolicyLock(v6, v5, v7, v8, v10);
}
