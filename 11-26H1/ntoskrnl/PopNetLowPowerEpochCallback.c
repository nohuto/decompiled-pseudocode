/*
 * XREFs of PopNetLowPowerEpochCallback @ 0x1407DA660
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     KeCancelTimer2 @ 0x1403AA4E0 (KeCancelTimer2.c)
 *     memcmp @ 0x14073D750 (memcmp.c)
 *     PopNetArmRefreshTimer @ 0x1407DA3D0 (PopNetArmRefreshTimer.c)
 *     PopNetDisengageNetworkRefresh @ 0x1407DA528 (PopNetDisengageNetworkRefresh.c)
 *     PopNetGetNextDueRefreshTime @ 0x1407DA57C (PopNetGetNextDueRefreshTime.c)
 *     PopNetIsNetworkRefreshEnabled @ 0x1407DA634 (PopNetIsNetworkRefreshEnabled.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
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
  __int64 SListFaultAddress_high; // rcx
  char *NextDueRefreshTime; // rax
  PEVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-18h]

  v8 = 0;
  if ( !memcmp(&GUID_LOW_POWER_EPOCH, SettingGuid, 0x10uLL) && ValueLength == 4 && Value )
  {
    PopAcquirePolicyLock(v7, v6);
    v11 = *Value;
    SListFaultAddress_high = HIDWORD(stru_140F0C428.SListFaultAddress);
    if ( ((_DWORD)v11 != 0) != HIDWORD(stru_140F0C428.SListFaultAddress) )
    {
      if ( (_DWORD)v11 )
      {
        HIDWORD(stru_140F0C428.SListFaultAddress) = 1;
        if ( PopNetIsNetworkRefreshEnabled() )
        {
          NextDueRefreshTime = PopNetGetNextDueRefreshTime();
          _InterlockedExchange(&PopNetRefreshTimerState, 1);
          PopNetArmRefreshTimer((__int64)NextDueRefreshTime, 1);
        }
      }
      else if ( HIDWORD(stru_140F0C428.SListFaultAddress) )
      {
        HIDWORD(stru_140F0C428.SListFaultAddress) = 0;
        if ( _InterlockedExchange(&PopNetRefreshTimerState, 0) == 1 )
        {
          KeCancelTimer2((__int64)&stru_140F0C428.StackBase);
          if ( byte_140E67628 )
          {
            if ( EtwEventEnabled(
                   *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
                   &POP_ETW_EVENT_NET_REFRESH_TIMER_DISARMED) )
            {
              EtwWrite(
                *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
                &POP_ETW_EVENT_NET_REFRESH_TIMER_DISARMED,
                0LL,
                0,
                0LL);
            }
          }
        }
        if ( LOBYTE(stru_140F0C428.SListFaultAddress) )
          PopNetDisengageNetworkRefresh();
      }
    }
    PopReleasePolicyLock(SListFaultAddress_high, v11, v9, v10, UserData);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
