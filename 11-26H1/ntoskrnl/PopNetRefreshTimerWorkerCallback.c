/*
 * XREFs of PopNetRefreshTimerWorkerCallback @ 0x1407DA7F0
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x1404DE3B8 (PopOkayToQueueNextWorkItem.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     PopNetArmRefreshTimer @ 0x1407DA3D0 (PopNetArmRefreshTimer.c)
 *     PopNetDisengageNetworkRefresh @ 0x1407DA528 (PopNetDisengageNetworkRefresh.c)
 *     PopNetGetNextDueRefreshTime @ 0x1407DA57C (PopNetGetNextDueRefreshTime.c)
 *     PopNetIsNetworkRefreshEnabled @ 0x1407DA634 (PopNetIsNetworkRefreshEnabled.c)
 *     PopNetSetResiliencyPhaseBias @ 0x140B4AC80 (PopNetSetResiliencyPhaseBias.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopNetRefreshTimerWorkerCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  char v3; // dl
  __int64 v4; // rcx
  char *NextDueRefreshTime; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+20h] [rbp-28h]
  char v12; // [rsp+58h] [rbp+10h] BYREF

  PopAcquirePolicyLock(a1, a2);
  if ( HIDWORD(stru_140F0C428.SListFaultAddress)
    && PopNetIsNetworkRefreshEnabled()
    && _InterlockedExchangeAdd(&PopNetRefreshTimerState, 0) == 2 )
  {
    if ( LOBYTE(stru_140F0C428.SListFaultAddress) )
    {
      PopNetDisengageNetworkRefresh();
      NextDueRefreshTime = PopNetGetNextDueRefreshTime();
      v3 = 1;
      _InterlockedExchange(&PopNetRefreshTimerState, 1);
      v4 = (__int64)NextDueRefreshTime;
    }
    else
    {
      LOBYTE(v2) = 1;
      PopNetSetResiliencyPhaseBias(v2);
      v11 = 0LL;
      v12 = 1;
      ZwUpdateWnfStateData((__int64)&WNF_PO_OPPORTUNISTIC_CS, (__int64)&v12);
      LOBYTE(stru_140F0C428.SListFaultAddress) = 1;
      v3 = 0;
      _InterlockedExchange(&PopNetRefreshTimerState, 1);
      v4 = 300000000LL;
    }
    PopNetArmRefreshTimer(v4, v3);
  }
  PopOkayToQueueNextWorkItem((__int64)&stru_140F0C428.ApcStateFill[40]);
  return PopReleasePolicyLock(v7, v6, v8, v9, v11);
}
