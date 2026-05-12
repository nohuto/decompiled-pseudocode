/*
 * XREFs of NvmeAdapterStartDevice @ 0x1400DDCA8
 * Callers:
 *     NvmeAdapterStartDeviceIrp @ 0x1400DE2A4 (NvmeAdapterStartDeviceIrp.c)
 *     NvmePnpAsyncStartCompleteWorker @ 0x1400E2A20 (NvmePnpAsyncStartCompleteWorker.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorIsChildAdapterPdo @ 0x140059C94 (StorIsChildAdapterPdo.c)
 *     PortMiniportRegistryInitialize @ 0x14005BF18 (PortMiniportRegistryInitialize.c)
 *     RaGetBusData @ 0x14007062C (RaGetBusData.c)
 *     RaidQueryPciMsixTableConfigurationInterface @ 0x140095BEC (RaidQueryPciMsixTableConfigurationInterface.c)
 *     NvmeAdapterCompleteInitialization @ 0x1400D3950 (NvmeAdapterCompleteInitialization.c)
 *     NvmeAdapterConfigureResources @ 0x1400D3CA4 (NvmeAdapterConfigureResources.c)
 *     NvmeAdapterGetSystemPowerHint @ 0x1400D8ED0 (NvmeAdapterGetSystemPowerHint.c)
 *     NvmeAdapterGetSystemPowerResumeLatency @ 0x1400D8F00 (NvmeAdapterGetSystemPowerResumeLatency.c)
 *     NvmeAdapterInitializeFabricProperties @ 0x1400D8F54 (NvmeAdapterInitializeFabricProperties.c)
 *     NvmeAdapterInitializeWmi @ 0x1400D9030 (NvmeAdapterInitializeWmi.c)
 *     NvmeAdapterRegisterDeviceInterface @ 0x1400DBD94 (NvmeAdapterRegisterDeviceInterface.c)
 *     NvmeAdapterRestart @ 0x1400DC7F4 (NvmeAdapterRestart.c)
 *     NvmeAdapterStartMiniport @ 0x1400DE784 (NvmeAdapterStartMiniport.c)
 *     NvmeAdapterUnlock @ 0x1400E0C44 (NvmeAdapterUnlock.c)
 *     NvmeControllerSystemPowerHint @ 0x14012754C (NvmeControllerSystemPowerHint.c)
 *     RaInitializeConfiguration @ 0x1401BE310 (RaInitializeConfiguration.c)
 */

__int64 __fastcall NvmeAdapterStartDevice(__int64 Context, __int64 a2)
{
  __int32 v3; // eax
  _QWORD *v6; // rdx
  int v7; // eax
  __int64 *v8; // rax
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rax
  int started; // edi
  __int64 v13; // r12
  __int64 Pool; // rax
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  int SystemPowerResumeLatency; // eax
  __int64 v22; // rcx
  NTSTATUS v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  _DWORD v28[2]; // [rsp+40h] [rbp-10h] BYREF
  int SystemPowerHint; // [rsp+48h] [rbp-8h]
  int v30; // [rsp+4Ch] [rbp-4h]
  int Data; // [rsp+90h] [rbp+40h] BYREF
  ULONG RequiredSize; // [rsp+A0h] [rbp+50h] BYREF
  ULONG Type; // [rsp+A8h] [rbp+58h] BYREF

  Data = 0;
  RequiredSize = 0;
  Type = 0;
  v3 = _InterlockedExchange((volatile __int32 *)(Context + 84), 1);
  if ( v3 != 2 )
  {
    if ( v3 != 8 )
      return 0LL;
    *(_QWORD *)(Context + 144) |= 0x200uLL;
  }
  if ( StorIsChildAdapterPdo(*(PDEVICE_OBJECT *)(Context + 32)) )
  {
    v6 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(Context + 32) + 64LL) + 72LL);
    v7 = **(_DWORD **)(v6[1] + 64LL);
    if ( v7 == 1094997074 )
    {
      v8 = v6 + 45;
    }
    else
    {
      if ( v7 != 1314275652 )
        return 3221225485LL;
      v8 = (__int64 *)(v6[75] + 88LL);
    }
    v9 = *v8;
    v10 = v8[1];
  }
  else
  {
    v11 = *(_QWORD *)(a2 + 184);
    v9 = *(_QWORD *)(v11 + 8);
    v10 = *(_QWORD *)(v11 + 16);
  }
  started = RaInitializeConfiguration(
              (int)Context + 176,
              *(_QWORD *)(Context + 400),
              *(_DWORD *)(Context + 584),
              *(_DWORD *)(Context + 588),
              BYTE1(*(_QWORD *)(Context + 144)) & 1,
              (*(_QWORD *)(Context + 144) & 0x200LL) != 0);
  if ( started >= 0 )
  {
    v13 = *(_QWORD *)(Context + 400);
    if ( !v13 )
    {
      *(_DWORD *)(Context + 1028) = 3;
      started = -1073741810;
      goto LABEL_58;
    }
    started = NvmeAdapterConfigureResources(Context, v9, v10);
    if ( started < 0 )
    {
      *(_DWORD *)(Context + 1028) = 4;
      goto LABEL_58;
    }
    if ( *(_DWORD *)(Context + 184) == 5 )
    {
      if ( !*(_QWORD *)(Context + 592) )
      {
        Pool = RaidAllocatePool(64LL, 168LL, 1447977298LL, *(_QWORD *)(Context + 8));
        *(_QWORD *)(Context + 592) = Pool;
        if ( !Pool )
        {
          started = -1073741801;
          goto LABEL_58;
        }
      }
      if ( IoGetDevicePropertyData(
             *(PDEVICE_OBJECT *)(Context + 32),
             &DEVPKEY_Device_Address,
             0,
             0,
             4u,
             &Data,
             &RequiredSize,
             &Type) >= 0 )
      {
        **(_WORD **)(Context + 592) = HIWORD(Data);
        *(_WORD *)(*(_QWORD *)(Context + 592) + 2LL) = Data;
      }
      RequiredSize = RaGetBusData(*(_QWORD *)(Context + 600) + 16LL, 4LL, *(_QWORD *)(Context + 592) + 8LL, v15, 64);
      RaidQueryPciMsixTableConfigurationInterface(Context);
    }
    if ( (*(_BYTE *)(Context + 144) & 1) != 0 && !*(_QWORD *)(Context + 608) )
    {
      started = NvmeAdapterInitializeFabricProperties((__int64 *)Context);
      if ( started < 0 )
      {
        *(_DWORD *)(Context + 1028) = 5;
        goto LABEL_58;
      }
    }
    *(_DWORD *)(Context + 920) = 64;
    PortMiniportRegistryInitialize(Context + 920);
    started = NvmeAdapterStartMiniport(Context, v13);
    if ( started >= 0 )
    {
      if ( (*(_DWORD *)(Context + 144) & 0x200LL) == 0 )
      {
        started = NvmeAdapterCompleteInitialization(Context);
        if ( started < 0 )
          goto LABEL_58;
        NvmeAdapterRegisterDeviceInterface(Context);
        NvmeAdapterInitializeWmi(Context);
        v16 = *(_QWORD *)(Context + 160);
        if ( *(_BYTE *)v16 != 1
          && (*(_DWORD *)(Context + 144) & 0x1000LL) != 0
          && IoRegisterDeviceInterface(
               *(PDEVICE_OBJECT *)(Context + 32),
               &GUID_STORPORT_NON_POFX_MINIPORT,
               0LL,
               (PUNICODE_STRING)(v16 + 336)) >= 0
          && IoSetDeviceInterfaceState((PUNICODE_STRING)(*(_QWORD *)(Context + 160) + 336LL), 1u) < 0 )
        {
          RtlFreeUnicodeString((PUNICODE_STRING)(*(_QWORD *)(Context + 160) + 336LL));
        }
      }
      if ( IsSystemAoAC && _bittest((const signed __int32 *)(*(_QWORD *)(Context + 400) + 184LL), 0x1Eu) )
      {
        if ( PoRegisterPowerSettingCallback(
               *(PDEVICE_OBJECT *)(Context + 8),
               &GUID_LOW_POWER_EPOCH,
               NvmePowerSettingCallback,
               (PVOID)Context,
               (PVOID *)(*(_QWORD *)(Context + 160) + 280LL)) >= 0 )
        {
          LOBYTE(v17) = 1;
          v18 = PoRegisterCoalescingCallback(
                  NvmeAdapterCoalescingCallback,
                  v17,
                  *(_QWORD *)(Context + 160) + 288LL,
                  Context);
          v19 = *(_QWORD *)(Context + 160);
          if ( v18 < 0 )
          {
            PoUnregisterPowerSettingCallback(*(PVOID *)(v19 + 280));
            *(_QWORD *)(*(_QWORD *)(Context + 160) + 280LL) = 0LL;
          }
          else
          {
            *(_DWORD *)(v19 + 176) &= ~0x2000u;
            v20 = *(_QWORD *)(Context + 160);
            v28[0] = 1;
            v28[1] = 16;
            *(_DWORD *)(v20 + 176) &= ~0x4000u;
            SystemPowerHint = NvmeAdapterGetSystemPowerHint(Context);
            SystemPowerResumeLatency = NvmeAdapterGetSystemPowerResumeLatency(SystemPowerHint);
            v22 = *(_QWORD *)(Context + 1152);
            v30 = SystemPowerResumeLatency;
            NvmeControllerSystemPowerHint(v22, v28);
          }
        }
        v23 = PoRegisterPowerSettingCallback(
                *(PDEVICE_OBJECT *)(Context + 8),
                &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
                NvmePowerSettingCallback,
                (PVOID)Context,
                (PVOID *)(*(_QWORD *)(Context + 160) + 296LL));
        v24 = *(_QWORD *)(Context + 160);
        if ( v23 < 0 )
          *(_QWORD *)(v24 + 296) = 0LL;
        else
          *(_DWORD *)(v24 + 176) &= ~0x8000u;
        started = 0;
      }
      if ( _bittest((const signed __int32 *)(*(_QWORD *)(Context + 400) + 184LL), 0x1Eu) )
      {
        PoRegisterPowerSettingCallback(
          *(PDEVICE_OBJECT *)(Context + 8),
          &GUID_DISK_MAX_POWER,
          NvmePowerSettingCallback,
          (PVOID)Context,
          (PVOID *)(*(_QWORD *)(Context + 160) + 304LL));
        if ( IoRegisterDeviceInterface(
               *(PDEVICE_OBJECT *)(Context + 32),
               &GUID_DEVINTERFACE_THERMAL_COOLING,
               0LL,
               (PUNICODE_STRING)(*(_QWORD *)(Context + 160) + 320LL)) >= 0 )
        {
          *(_DWORD *)(*(_QWORD *)(Context + 160) + 176LL) |= 0x10000u;
          IoSetDeviceInterfaceState((PUNICODE_STRING)(*(_QWORD *)(Context + 160) + 320LL), 1u);
        }
        started = 0;
      }
      if ( (*(_DWORD *)(Context + 144) & 0x200LL) != 0 )
      {
        NvmeAdapterUnlock(Context);
        NvmeAdapterRestart(Context);
      }
      if ( (*(_DWORD *)(Context + 376) & 2) != 0 )
      {
        v25 = *(_QWORD *)(Context + 1152);
        if ( !_InterlockedCompareExchange(
                (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v25 + 1288) + 40LL) + 192LL),
                1,
                0) )
          KeSetCoalescableTimer(
            (PKTIMER)(*(_QWORD *)(*(_QWORD *)(v25 + 1288) + 40LL) + 128LL),
            (LARGE_INTEGER)-50000000LL,
            0x7D0u,
            0x12Cu,
            (PKDPC)(*(_QWORD *)(*(_QWORD *)(v25 + 1288) + 40LL) + 64LL));
      }
    }
  }
  else
  {
    *(_DWORD *)(Context + 1028) = 2;
  }
LABEL_58:
  v26 = *(_QWORD *)(Context + 160);
  *(_QWORD *)(Context + 144) &= ~0x200uLL;
  if ( *(_BYTE *)v26 == 1 )
  {
    v27 = *(_QWORD *)(v26 + 8);
    if ( (*(_DWORD *)(v27 + 20) & 2) != 0 )
    {
      PoFxIdleComponent(*(_QWORD *)v27, 0LL, 0LL);
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(Context + 160) + 8LL) + 20LL) &= ~2u;
    }
  }
  if ( started < 0 )
    _InterlockedExchange((volatile __int32 *)(Context + 84), 2);
  return (unsigned int)started;
}
