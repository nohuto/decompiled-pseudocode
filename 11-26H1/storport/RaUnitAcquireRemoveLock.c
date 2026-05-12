/*
 * XREFs of RaUnitAcquireRemoveLock @ 0x140004AB0
 * Callers:
 *     RaDriverScsiIrp @ 0x140003DF0 (RaDriverScsiIrp.c)
 *     RaidUnitProcessBusyRequest @ 0x140012A1C (RaidUnitProcessBusyRequest.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1400197D8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001BC80 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitIncrementOutstandingIrpRequests @ 0x14002134C (RaUnitIncrementOutstandingIrpRequests.c)
 *     RaUnitGetInstances @ 0x140039F84 (RaUnitGetInstances.c)
 *     RaUnitPowerIrp @ 0x14003C8D0 (RaUnitPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x14003CFDC (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x14003D4FC (RaidUnitSetDevicePowerIrp.c)
 *     RaUnitPnpIrp @ 0x14003FBDC (RaUnitPnpIrp.c)
 *     StorpLogPerUnitStatistics @ 0x140046F34 (StorpLogPerUnitStatistics.c)
 *     RaidAdapterCheckWaitTimeout @ 0x14004B9A8 (RaidAdapterCheckWaitTimeout.c)
 *     RaAdapterUpdateAssociatedUnitsIdentity @ 0x14005FEC8 (RaAdapterUpdateAssociatedUnitsIdentity.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x14009A788 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitStartResetIo @ 0x1400A2224 (RaUnitStartResetIo.c)
 *     RaidUnitAbortSrb @ 0x1400A6B30 (RaidUnitAbortSrb.c)
 *     RaidUnitUpdateDynamicRegistrySettings @ 0x1400AA4B0 (RaidUnitUpdateDynamicRegistrySettings.c)
 *     StorEtwResetCounters @ 0x1400B24B8 (StorEtwResetCounters.c)
 *     RaUnitStorageDumpControl @ 0x14018C0B0 (RaUnitStorageDumpControl.c)
 *     RaWmiDispatchIrp @ 0x1401B7718 (RaWmiDispatchIrp.c)
 * Callees:
 *     RaidSrbFunctionFromIrp @ 0x140070658 (RaidSrbFunctionFromIrp.c)
 */

__int64 __fastcall RaUnitAcquireRemoveLock(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r9
  unsigned __int64 v5; // r10
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  int v8; // eax
  int v9; // ebx
  unsigned __int8 *v11; // rcx
  unsigned __int8 v12; // al
  __int64 v13; // rdx
  char v14; // al
  char v15; // dl
  __int64 v16; // rax

  v4 = a1;
  v5 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v6 = *(_DWORD *)(v5 + *(_QWORD *)(a1 + 40));
  while ( (v6 & 1) == 0 )
  {
    v7 = v6;
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + *(_QWORD *)(a1 + 40)), v6 + 2, v6);
    if ( v7 == v6 )
      goto LABEL_4;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 1032));
LABEL_4:
  v8 = *(_DWORD *)(a1 + 56);
  if ( a3 )
  {
    if ( v8 != 6 )
    {
      if ( v8 != 7 )
      {
        if ( v8 != 5 )
        {
          v9 = 0;
          goto LABEL_7;
        }
        if ( a2 )
        {
          v16 = *(_QWORD *)(a2 + 184);
          if ( *(_BYTE *)v16 == 27 )
          {
            v9 = 0;
            goto LABEL_7;
          }
          if ( *(_BYTE *)v16 == 14 && *(_DWORD *)(v16 + 24) == 266276 )
          {
            v9 = 0;
            goto LABEL_7;
          }
        }
        goto LABEL_6;
      }
      if ( a2 )
      {
        v11 = *(unsigned __int8 **)(a2 + 184);
        v12 = *v11;
        v13 = v11[1];
        if ( *v11 == 15 )
        {
          v14 = RaidSrbFunctionFromIrp(a2, v13);
          if ( v15 != -16 && v14 != 1 )
            goto LABEL_6;
        }
        else if ( v12 != 27 )
        {
          if ( v12 == 14 )
          {
            if ( *((_DWORD *)v11 + 6) == 266264 )
            {
              v9 = 0;
              goto LABEL_7;
            }
          }
          else if ( __PAIR16__(v13, v12) == 534 )
          {
            v9 = 0;
            goto LABEL_7;
          }
          goto LABEL_6;
        }
        v9 = 0;
        goto LABEL_7;
      }
    }
  }
  else if ( v8 != 6 && v8 != 7 && v8 != 5 )
  {
    v9 = 0;
    goto LABEL_7;
  }
LABEL_6:
  v9 = -1073741738;
LABEL_7:
  if ( v9 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 1032), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(v4 + 520), 0, 0);
  return (unsigned int)v9;
}
