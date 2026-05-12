/*
 * XREFs of StorAllocateContiguousIoResources @ 0x14001B548
 * Callers:
 *     StorUnitExecuteNvmeSrb @ 0x1400034B4 (StorUnitExecuteNvmeSrb.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140012104 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidPnPPassToMiniPort @ 0x14001A8BC (RaidPnPPassToMiniPort.c)
 *     RaidUnitAllocateResources @ 0x14002D7B4 (RaidUnitAllocateResources.c)
 *     RaidUnitSubmitResetRequest @ 0x14004CED4 (RaidUnitSubmitResetRequest.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x140056C08 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaInitializePower @ 0x14005872C (RaInitializePower.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x140067AD0 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140068000 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     StorPortGetUncachedExtension @ 0x14007B850 (StorPortGetUncachedExtension.c)
 *     TcglibEalExecuteCommandSync @ 0x14008CF08 (TcglibEalExecuteCommandSync.c)
 *     StorGetNVMePollingInformation @ 0x140097348 (StorGetNVMePollingInformation.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x14009F164 (RaUnitScsiGetDumpPointersIoctl.c)
 *     StorpTelemetrySendAdapterSurfaceUfsHealthInfo @ 0x1400C0CD0 (StorpTelemetrySendAdapterSurfaceUfsHealthInfo.c)
 *     RaidAdapterDiagnosticIoctl @ 0x14018470C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1401855B0 (RaidAdapterGetMiniportDumpInfo.c)
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1401B407C (RaUnitStorageDataSetManagementIoctl.c)
 *     StorGetNVMeIdentifyInfo @ 0x1401B6194 (StorGetNVMeIdentifyInfo.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1401B816C (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaWmiPassToMiniPort @ 0x1401B8A40 (RaWmiPassToMiniPort.c)
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     IsDmarEnabled @ 0x14001CD00 (IsDmarEnabled.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall StorAllocateContiguousIoResources(unsigned int a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rbp
  __int64 v6; // rbx
  __int64 ContiguousNodeMemory; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v11[5]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v12; // [rsp+90h] [rbp+18h] BYREF
  __int64 v13; // [rsp+98h] [rbp+20h] BYREF

  v4 = a3[112];
  v6 = a3[546];
  v13 = a3[547];
  v12 = a3[548];
  v11[0] = 0LL;
  if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() && a3[711] )
    a1 += 24;
  if ( (unsigned __int8)IsDmarEnabled(a3) )
    ContiguousNodeMemory = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, _QWORD, _DWORD, _QWORD, unsigned int, __int64 *))(*(_QWORD *)(v4 + 8) + 272LL))(
                             v4,
                             &v13,
                             &v12,
                             a1,
                             0,
                             0LL,
                             0x80000000,
                             v11);
  else
    ContiguousNodeMemory = MmAllocateContiguousNodeMemory(a1, v13, v12, v6, 4, 0x80000000);
  v8 = ContiguousNodeMemory;
  if ( ContiguousNodeMemory )
  {
    if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
    {
      *(_QWORD *)(v8 + 840) = 0LL;
      if ( a3[710] )
      {
        *(_QWORD *)(v8 + 840) = v8 + 856;
        *(_OWORD *)(v8 + 856) = 0LL;
        *(_QWORD *)(v8 + 872) = 0LL;
      }
    }
    else if ( a3[711] )
    {
      v9 = v8 + a1 - 24LL;
      *(_QWORD *)(v8 + 840) = v9;
      *(_OWORD *)v9 = 0LL;
      *(_QWORD *)(v9 + 16) = 0LL;
    }
    else
    {
      *(_QWORD *)(v8 + 840) = 0LL;
    }
    *(_QWORD *)(v8 + 24) = v11[0];
    *(_DWORD *)(v8 + 16) = a1;
  }
  return v8;
}
