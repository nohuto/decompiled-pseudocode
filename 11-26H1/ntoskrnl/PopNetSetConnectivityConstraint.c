/*
 * XREFs of PopNetSetConnectivityConstraint @ 0x14077D290
 * Callers:
 *     PopNetCompliantNicUpdate @ 0x1407DE328 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x1407DE67C (PopNetNonCompliantDeviceUpdate.c)
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x140B46EB0 (PopPowerAggregatorEngageAggressiveStandbyActions.c)
 *     PopNetInitialize @ 0x140CDB1D8 (PopNetInitialize.c)
 * Callees:
 *     PopQueueWorkItem @ 0x1404C8890 (PopQueueWorkItem.c)
 */

char __fastcall PopNetSetConnectivityConstraint(int a1)
{
  bool v1; // r8
  signed __int32 v2; // eax

  v1 = 0;
  *(_DWORD *)&PopPdcDeviceListLock.SchedulerApcFill5[48] |= 1 << a1;
  if ( ((a1 - 2) & 0xFFFFFFFA) == 0 )
    v1 = a1 != 7;
  v2 = _InterlockedExchangeAdd(&PopNetGracePeriodState, 0);
  if ( v2 == 2 || v1 )
    LOBYTE(v2) = PopQueueWorkItem((__int64)&PopPdcDeviceListLock.PriorityFloorSummary, DelayedWorkQueue);
  return v2;
}
