/*
 * XREFs of PopNetSetConnectivityConstraint @ 0x14077A360
 * Callers:
 *     PopNetCompliantNicUpdate @ 0x1407DA440 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x1407DA78C (PopNetNonCompliantDeviceUpdate.c)
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x140B451B0 (PopPowerAggregatorEngageAggressiveStandbyActions.c)
 *     PopNetInitialize @ 0x140CD4E38 (PopNetInitialize.c)
 * Callees:
 *     PopQueueWorkItem @ 0x1404CEE60 (PopQueueWorkItem.c)
 */

char __fastcall PopNetSetConnectivityConstraint(int a1)
{
  bool v1; // r8
  signed __int32 v2; // eax

  v1 = 0;
  HIDWORD(stru_140F0C428.Header.WaitListHead.Blink) |= 1 << a1;
  if ( ((a1 - 2) & 0xFFFFFFFA) == 0 )
    v1 = a1 != 7;
  v2 = _InterlockedExchangeAdd(&PopNetGracePeriodState, 0);
  if ( v2 == 2 || v1 )
    LOBYTE(v2) = PopQueueWorkItem((__int64)&stru_140F0C428.WaitBlockFill11[64], DelayedWorkQueue);
  return v2;
}
