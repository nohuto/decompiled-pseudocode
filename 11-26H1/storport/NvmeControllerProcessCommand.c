/*
 * XREFs of NvmeControllerProcessCommand @ 0x140044AF0
 * Callers:
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeNamespaceFlushWorker @ 0x140044970 (NvmeNamespaceFlushWorker.c)
 *     NvmeControllerGetChangedNamespaceListLog @ 0x1400C5C50 (NvmeControllerGetChangedNamespaceListLog.c)
 *     NvmeControllerReConfigAsyncEvent @ 0x1400CF810 (NvmeControllerReConfigAsyncEvent.c)
 *     NvmeAdapterFirmwareActivateIoctl @ 0x1400D5D1C (NvmeAdapterFirmwareActivateIoctl.c)
 *     NvmeAdapterFirmwareDownloadIoctl @ 0x1400D6F6C (NvmeAdapterFirmwareDownloadIoctl.c)
 *     NvmeAdapterFirmwareGetInfoIoctl @ 0x1400D7D50 (NvmeAdapterFirmwareGetInfoIoctl.c)
 *     NvmeAdapterSetTemperatureThresholdIoctl @ 0x1400DD020 (NvmeAdapterSetTemperatureThresholdIoctl.c)
 *     NvmeControllerGetTemperatureThresholdWorkerCompletion @ 0x1400E0E40 (NvmeControllerGetTemperatureThresholdWorkerCompletion.c)
 *     NvmeGetStorageTemperaturePropertyComplete @ 0x1400E1690 (NvmeGetStorageTemperaturePropertyComplete.c)
 *     NvmeControllerAsyncEventCommandCompletion @ 0x1400F06B0 (NvmeControllerAsyncEventCommandCompletion.c)
 *     NvmeControllerSendAsyncEventCommand @ 0x1400FAB1C (NvmeControllerSendAsyncEventCommand.c)
 *     NvmeNamepspaceExecuteNvmeSrb @ 0x140100F94 (NvmeNamepspaceExecuteNvmeSrb.c)
 *     NvmeNamespaceExecuteScsiSrbEx @ 0x14010569C (NvmeNamespaceExecuteScsiSrbEx.c)
 *     NvmeNamespaceStorMQFirmwareGetInfoIoctl @ 0x140113B00 (NvmeNamespaceStorMQFirmwareGetInfoIoctl.c)
 *     NvmeContinueScatterGatherProcessCommand @ 0x14011F630 (NvmeContinueScatterGatherProcessCommand.c)
 *     NvmeQueryProtocolInfoCompletion @ 0x14011FFE0 (NvmeQueryProtocolInfoCompletion.c)
 *     NvmeQueryProtocolInfoFeatureData @ 0x140120B58 (NvmeQueryProtocolInfoFeatureData.c)
 *     NvmeQueryProtocolInfoIdentifyData @ 0x14012113C (NvmeQueryProtocolInfoIdentifyData.c)
 *     NvmeQueryProtocolInfoLogPageData @ 0x140121494 (NvmeQueryProtocolInfoLogPageData.c)
 *     NvmeSetProtocolInfoFeatureData @ 0x140122774 (NvmeSetProtocolInfoFeatureData.c)
 *     NvmeAdapterGetTemperatureProperty @ 0x14019D994 (NvmeAdapterGetTemperatureProperty.c)
 *     NvmeAdapterStorageProtocolCommandIoctl @ 0x14019FB54 (NvmeAdapterStorageProtocolCommandIoctl.c)
 *     NvmeNamespaceStorageQueryDeviceEndurancePropertyIoctl @ 0x1401AAF40 (NvmeNamespaceStorageQueryDeviceEndurancePropertyIoctl.c)
 *     NvmeNamespaceStorageProtocolCommandIoctl @ 0x1401BCE2C (NvmeNamespaceStorageProtocolCommandIoctl.c)
 * Callees:
 *     StorAttemptInsertDeviceQueue @ 0x14003F570 (StorAttemptInsertDeviceQueue.c)
 *     NvmeControllerProcessPendingCommand @ 0x14003F6A0 (NvmeControllerProcessPendingCommand.c)
 *     NvmeControllerSendNonReadWriteCommand @ 0x14004CB10 (NvmeControllerSendNonReadWriteCommand.c)
 *     StorPushRequestToDeviceQueue @ 0x140057990 (StorPushRequestToDeviceQueue.c)
 */

__int64 __fastcall NvmeControllerProcessCommand(__int64 SystemArgument2, _DWORD *a2)
{
  __int64 result; // rax
  __int64 CurrentProcessorNumber; // rbp
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // edi
  int v14; // edi
  signed __int32 v15[8]; // [rsp+0h] [rbp-38h] BYREF

  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)a2 + 4256LL), 0xEu);
  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)a2 + 4256LL), 0xFu);
  *(_WORD *)(*(_QWORD *)a2 + 4264LL) = 0;
  if ( *(_BYTE *)(SystemArgument2 + 1228) )
    return 3221225486LL;
  _interlockedbittestandset((volatile signed __int32 *)(*(_QWORD *)a2 + 4256LL), 0xFu);
  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  if ( (*(_QWORD *)(SystemArgument2 + 968) & 1) == 0 )
    *(_DWORD *)(*(_QWORD *)a2 + 4256LL) |= 0x800u;
  if ( (*(_QWORD *)(SystemArgument2 + 968) & 0x2000000LL) != 0
    || (*(_QWORD *)(SystemArgument2 + 968) & 0x4000000LL) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)a2 + 4256LL) |= 0x800u;
  }
  if ( *(_DWORD *)(*(_QWORD *)(SystemArgument2 + 1288) + 4LL) )
    *(_DWORD *)(*(_QWORD *)a2 + 4256LL) |= 0x800u;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 4256LL) & 0x800) == 0 )
  {
    if ( (a2[12] & 4) != 0 )
    {
      v6 = *(_QWORD *)a2;
      a2[16] = CurrentProcessorNumber;
      _InterlockedIncrement16((volatile signed __int16 *)(v6 + 4264));
    }
    v7 = *(_QWORD *)(SystemArgument2 + 128);
    v8 = *(_QWORD *)(v7 + 160);
    if ( *(_BYTE *)v8 == 1 )
    {
      if ( _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(v8 + 16) + 8 * CurrentProcessorNumber)) == 1 )
      {
        if ( KeGetCurrentIrql() >= 2u || (v9 = *(_QWORD *)(v7 + 160), (*(_DWORD *)(v9 + 76) & 6) != 0) )
        {
          v11 = 2LL;
          v10 = *(_QWORD **)(*(_QWORD *)(v7 + 160) + 8LL);
        }
        else
        {
          v10 = *(_QWORD **)(v9 + 8);
          v11 = 1LL;
        }
        PoFxActivateComponent(*v10, 0LL, v11);
      }
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 160) + 8LL) + 64LL) != 1 )
      {
        if ( *(_QWORD *)a2 )
        {
          v12 = *(_QWORD *)(*(_QWORD *)a2 + 4184LL);
          if ( v12 )
            *(_BYTE *)(*(_QWORD *)(v12 + 184) + 3LL) |= 1u;
        }
        v13 = *(_DWORD *)(*(_QWORD *)a2 + 4256LL);
        StorPushRequestToDeviceQueue(*(_QWORD *)(SystemArgument2 + 1024), (unsigned int)CurrentProcessorNumber, a2);
        if ( (v13 & 1) == 0 )
          _InterlockedIncrement((volatile signed __int32 *)(SystemArgument2 + 960));
        _InterlockedOr(v15, 0);
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SystemArgument2 + 128) + 160LL) + 8LL) + 64LL) == 1 )
          NvmeControllerProcessPendingCommand(SystemArgument2, CurrentProcessorNumber, 0LL, 0LL, 0);
        return 259LL;
      }
    }
  }
  if ( *(_QWORD *)(*(_QWORD *)a2 + 4184LL) )
  {
    v14 = *(_DWORD *)(*(_QWORD *)a2 + 4256LL) & 1;
    if ( StorAttemptInsertDeviceQueue(
           *(volatile signed __int32 **)(SystemArgument2 + 1024),
           a2,
           0,
           CurrentProcessorNumber,
           SystemArgument2) )
    {
      if ( !(_BYTE)v14 )
        _InterlockedIncrement((volatile signed __int32 *)(SystemArgument2 + 960));
      return 259LL;
    }
  }
  result = NvmeControllerSendNonReadWriteCommand((PVOID)SystemArgument2, 0LL);
  if ( (_DWORD)result == -2147483631 )
    return 259LL;
  return result;
}
