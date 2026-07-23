/*
 * XREFs of PopNetLowPowerEpochCallback @ 0x1407DE550
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     KeCancelTimer2 @ 0x1403B40F0 (KeCancelTimer2.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     PopNetArmRefreshTimer @ 0x1407DE2B8 (PopNetArmRefreshTimer.c)
 *     PopNetDisengageNetworkRefresh @ 0x1407DE418 (PopNetDisengageNetworkRefresh.c)
 *     PopNetGetNextDueRefreshTime @ 0x1407DE46C (PopNetGetNextDueRefreshTime.c)
 *     PopNetIsNetworkRefreshEnabled @ 0x1407DE524 (PopNetIsNetworkRefreshEnabled.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopNetLowPowerEpochCallback(
        LPCGUID SettingGuid,
        unsigned int *Value,
        ULONG ValueLength,
        PVOID Context)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 WriteOperationCount_low; // rcx
  LARGE_INTEGER NextDueRefreshTime; // rax
  PEVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-18h]

  v8 = 0;
  if ( !memcmp(&GUID_LOW_POWER_EPOCH, SettingGuid, 0x10uLL) && ValueLength == 4 && Value )
  {
    PopAcquirePolicyLock(v7, v6);
    v11 = *Value;
    WriteOperationCount_low = LODWORD(PopPdcDeviceListLock.WriteOperationCount);
    if ( ((_DWORD)v11 != 0) != LODWORD(PopPdcDeviceListLock.WriteOperationCount) )
    {
      if ( (_DWORD)v11 )
      {
        LODWORD(PopPdcDeviceListLock.WriteOperationCount) = 1;
        if ( PopNetIsNetworkRefreshEnabled() )
        {
          NextDueRefreshTime = PopNetGetNextDueRefreshTime();
          _InterlockedExchange(&PopNetRefreshTimerState, 1);
          PopNetArmRefreshTimer(NextDueRefreshTime.QuadPart, 1);
        }
      }
      else if ( LODWORD(PopPdcDeviceListLock.WriteOperationCount) )
      {
        LODWORD(PopPdcDeviceListLock.WriteOperationCount) = 0;
        if ( _InterlockedExchange(&PopNetRefreshTimerState, 0) == 1 )
        {
          KeCancelTimer2((__int64)&PopPdcDeviceListLock.OtherOperationCount);
          if ( PopDiagHandleRegistered )
          {
            if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_NET_REFRESH_TIMER_DISARMED) )
              EtwWrite(PopDiagHandle, &POP_ETW_EVENT_NET_REFRESH_TIMER_DISARMED, 0LL, 0, 0LL);
          }
        }
        if ( BYTE4(PopPdcDeviceListLock.ReadOperationCount) )
          PopNetDisengageNetworkRefresh();
      }
    }
    PopReleasePolicyLock(WriteOperationCount_low, v11, v9, v10, UserData);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
