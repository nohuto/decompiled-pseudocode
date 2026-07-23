/*
 * XREFs of PopNetClearConnectivityConstraint @ 0x140B69B20
 * Callers:
 *     PopNetCompliantNicUpdate @ 0x1407DE328 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x1407DE67C (PopNetNonCompliantDeviceUpdate.c)
 * Callees:
 *     PopQueueWorkItem @ 0x1404C8890 (PopQueueWorkItem.c)
 */

char __fastcall PopNetClearConnectivityConstraint(int a1)
{
  char v1; // dl
  signed __int32 v2; // eax

  v1 = 0;
  *(_DWORD *)&PopPdcDeviceListLock.SchedulerApcFill5[48] &= ~(1 << a1);
  if ( a1 == 3 || a1 == 6 )
    v1 = 1;
  v2 = _InterlockedExchangeAdd(&PopNetGracePeriodState, 0);
  if ( v2 == 2 || v1 )
    LOBYTE(v2) = PopQueueWorkItem((__int64)&PopPdcDeviceListLock.PriorityFloorSummary, DelayedWorkQueue);
  return v2;
}
