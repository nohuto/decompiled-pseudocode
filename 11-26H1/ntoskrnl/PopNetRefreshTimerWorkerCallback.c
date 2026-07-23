/*
 * XREFs of PopNetRefreshTimerWorkerCallback @ 0x1407DE6E0
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x1404D7A98 (PopOkayToQueueNextWorkItem.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     PopNetArmRefreshTimer @ 0x1407DE2B8 (PopNetArmRefreshTimer.c)
 *     PopNetDisengageNetworkRefresh @ 0x1407DE418 (PopNetDisengageNetworkRefresh.c)
 *     PopNetGetNextDueRefreshTime @ 0x1407DE46C (PopNetGetNextDueRefreshTime.c)
 *     PopNetIsNetworkRefreshEnabled @ 0x1407DE524 (PopNetIsNetworkRefreshEnabled.c)
 *     PopNetSetResiliencyPhaseBias @ 0x140B4CA10 (PopNetSetResiliencyPhaseBias.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopNetRefreshTimerWorkerCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  char v3; // dl
  __int64 QuadPart; // rcx
  LARGE_INTEGER NextDueRefreshTime; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  void *ExplicitScope; // [rsp+20h] [rbp-28h]
  char Buffer; // [rsp+58h] [rbp+10h] BYREF

  PopAcquirePolicyLock(a1, a2);
  if ( LODWORD(PopPdcDeviceListLock.WriteOperationCount)
    && PopNetIsNetworkRefreshEnabled()
    && _InterlockedExchangeAdd(&PopNetRefreshTimerState, 0) == 2 )
  {
    if ( BYTE4(PopPdcDeviceListLock.ReadOperationCount) )
    {
      PopNetDisengageNetworkRefresh();
      NextDueRefreshTime = PopNetGetNextDueRefreshTime();
      v3 = 1;
      _InterlockedExchange(&PopNetRefreshTimerState, 1);
      QuadPart = NextDueRefreshTime.QuadPart;
    }
    else
    {
      LOBYTE(v2) = 1;
      PopNetSetResiliencyPhaseBias(v2);
      Buffer = 1;
      ZwUpdateWnfStateData(&WNF_PO_OPPORTUNISTIC_CS, &Buffer, 1u, 0LL, 0LL, 0, 0);
      BYTE4(PopPdcDeviceListLock.ReadOperationCount) = 1;
      v3 = 0;
      _InterlockedExchange(&PopNetRefreshTimerState, 1);
      QuadPart = 300000000LL;
    }
    PopNetArmRefreshTimer(QuadPart, v3);
  }
  PopOkayToQueueNextWorkItem((__int64)&PopPdcDeviceListLock.KernelShadowStackBase);
  return PopReleasePolicyLock(v7, v6, v8, v9, ExplicitScope);
}
