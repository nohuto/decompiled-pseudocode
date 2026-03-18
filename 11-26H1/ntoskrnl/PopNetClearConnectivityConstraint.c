/*
 * XREFs of PopNetClearConnectivityConstraint @ 0x140B66B94
 * Callers:
 *     PopNetCompliantNicUpdate @ 0x1407DA440 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x1407DA78C (PopNetNonCompliantDeviceUpdate.c)
 * Callees:
 *     PopQueueWorkItem @ 0x1404CEE60 (PopQueueWorkItem.c)
 */

char __fastcall PopNetClearConnectivityConstraint(int a1)
{
  char v1; // dl
  signed __int32 v2; // eax

  v1 = 0;
  HIDWORD(stru_140F0C428.Header.WaitListHead.Blink) &= ~(1 << a1);
  if ( a1 == 3 || a1 == 6 )
    v1 = 1;
  v2 = _InterlockedExchangeAdd(&PopNetGracePeriodState, 0);
  if ( v2 == 2 || v1 )
    LOBYTE(v2) = PopQueueWorkItem((__int64)&stru_140F0C428.WaitBlockFill11[64], DelayedWorkQueue);
  return v2;
}
