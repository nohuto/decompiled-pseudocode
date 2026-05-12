/*
 * XREFs of RaidAdapterStartDevice @ 0x140068EBC
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x140035C2C (RaidAdapterStartDeviceIrp.c)
 *     RaidPnPAsyncStartCompleteWorker @ 0x14006D350 (RaidPnPAsyncStartCompleteWorker.c)
 * Callees:
 *     RaidGetResetInterface @ 0x140009874 (RaidGetResetInterface.c)
 *     RaCallMiniportAdapterControl @ 0x14000EF30 (RaCallMiniportAdapterControl.c)
 *     RaidAdapterGetSystemPowerHint @ 0x140010BF8 (RaidAdapterGetSystemPowerHint.c)
 *     RaidAdapterGetSystemPowerResumeLatency @ 0x140010C1C (RaidAdapterGetSystemPowerResumeLatency.c)
 *     RaidIsAdapterControlSupported @ 0x140010D4C (RaidIsAdapterControlSupported.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     RaidAdapterPoFxIdleComponent @ 0x14002517C (RaidAdapterPoFxIdleComponent.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RaidAdapterInitializeWmi @ 0x14004632C (RaidAdapterInitializeWmi.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     RaidAdapterStartMiniport @ 0x140053D94 (RaidAdapterStartMiniport.c)
 *     RaidAdapterConfigureResources @ 0x14005AF28 (RaidAdapterConfigureResources.c)
 *     RaidAdapterCreateDevmapEntry @ 0x14005B814 (RaidAdapterCreateDevmapEntry.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     PortMiniportRegistryInitialize @ 0x14005BF18 (PortMiniportRegistryInitialize.c)
 *     StorIsMFNDSupported @ 0x14005CB18 (StorIsMFNDSupported.c)
 *     McTemplateK0jqzzqxtqqttt_EtwWriteTransfer @ 0x14005D1B8 (McTemplateK0jqzzqxtqqttt_EtwWriteTransfer.c)
 *     McTemplateK0pqtqqt_EtwWriteTransfer @ 0x14005D65C (McTemplateK0pqtqqt_EtwWriteTransfer.c)
 *     RaidAdapterCompleteInitialization @ 0x140060120 (RaidAdapterCompleteInitialization.c)
 *     RaidAdapterRegisterMFNDInterface @ 0x1400655FC (RaidAdapterRegisterMFNDInterface.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x14006DC84 (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qD @ 0x14006F3F4 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 *     RaGetBusData @ 0x14007062C (RaGetBusData.c)
 *     RaidGetD3ColdInterface @ 0x14007FA64 (RaidGetD3ColdInterface.c)
 *     RaidQueryPciMsixTableConfigurationInterface @ 0x140095BEC (RaidQueryPciMsixTableConfigurationInterface.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 *     RaidAdapterGetNvmeIceCapabilities @ 0x1401877EC (RaidAdapterGetNvmeIceCapabilities.c)
 *     StorAdapterInitializeDlrmIfSupported @ 0x1401B0860 (StorAdapterInitializeDlrmIfSupported.c)
 *     RaInitializeConfiguration @ 0x1401BE310 (RaInitializeConfiguration.c)
 */

__int64 __fastcall RaidAdapterStartDevice(char *Context, __int64 a2)
{
  __int64 v4; // rbx
  __int32 v5; // eax
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r12
  int started; // esi
  __int64 v11; // r15
  __int64 v12; // rcx
  int v13; // r9d
  char v14; // al
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  bool v18; // al
  __int64 *v19; // r14
  __int64 v20; // rcx
  int (__fastcall *v21)(_QWORD, __int64, int *); // rax
  PIO_WORKITEM WorkItem; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  _QWORD *v25; // r9
  int *v26; // rax
  int v27; // ecx
  __int64 v28; // rcx
  void **v29; // rbx
  __int64 v30; // rdx
  NTSTATUS v31; // r8d
  int v32; // r8d
  void *v33; // rcx
  KIRQL v34; // bl
  __int64 v35; // rax
  ULONG Size[2]; // [rsp+20h] [rbp-E0h]
  PVOID Data; // [rsp+28h] [rbp-D8h]
  PULONG RequiredSize; // [rsp+30h] [rbp-D0h]
  PDEVPROPTYPE Type; // [rsp+38h] [rbp-C8h]
  __int64 v40; // [rsp+40h] [rbp-C0h]
  int v41; // [rsp+58h] [rbp-A8h]
  char v42; // [rsp+80h] [rbp-80h] BYREF
  char v43; // [rsp+81h] [rbp-7Fh] BYREF
  bool v44; // [rsp+82h] [rbp-7Eh] BYREF
  char v45; // [rsp+83h] [rbp-7Dh] BYREF
  int v46; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v47; // [rsp+88h] [rbp-78h] BYREF
  ULONG BusData; // [rsp+8Ch] [rbp-74h] BYREF
  ULONG v49; // [rsp+90h] [rbp-70h] BYREF
  int v50; // [rsp+94h] [rbp-6Ch] BYREF
  int v51; // [rsp+98h] [rbp-68h] BYREF
  int v52; // [rsp+9Ch] [rbp-64h] BYREF
  int v53; // [rsp+A0h] [rbp-60h] BYREF
  int v54; // [rsp+A4h] [rbp-5Ch] BYREF
  __int64 v55; // [rsp+A8h] [rbp-58h] BYREF
  int SystemPowerHint; // [rsp+B0h] [rbp-50h]
  int SystemPowerResumeLatency; // [rsp+B4h] [rbp-4Ch]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+C0h] [rbp-40h] BYREF
  char *v59; // [rsp+E0h] [rbp-20h]
  __int64 v60; // [rsp+E8h] [rbp-18h]
  int *v61; // [rsp+F0h] [rbp-10h]
  __int64 v62; // [rsp+F8h] [rbp-8h]
  int *v63; // [rsp+100h] [rbp+0h]
  __int64 v64; // [rsp+108h] [rbp+8h]
  __int64 *v65; // [rsp+110h] [rbp+10h]
  __int64 v66; // [rsp+118h] [rbp+18h]
  int *v67; // [rsp+120h] [rbp+20h]
  __int64 v68; // [rsp+128h] [rbp+28h]
  int *v69; // [rsp+130h] [rbp+30h]
  __int64 v70; // [rsp+138h] [rbp+38h]
  char *v71; // [rsp+140h] [rbp+40h]
  __int64 v72; // [rsp+148h] [rbp+48h]
  int *v73; // [rsp+150h] [rbp+50h]
  __int64 v74; // [rsp+158h] [rbp+58h]
  int *v75; // [rsp+160h] [rbp+60h]
  __int64 v76; // [rsp+168h] [rbp+68h]
  bool *v77; // [rsp+170h] [rbp+70h]
  __int64 v78; // [rsp+178h] [rbp+78h]
  char *v79; // [rsp+180h] [rbp+80h]
  __int64 v80; // [rsp+188h] [rbp+88h]

  v47 = 0;
  BusData = 0;
  v49 = 0;
  v42 = 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids, Context, a2);
  }
  v4 = 8LL;
  v5 = _InterlockedExchange((volatile __int32 *)Context + 22, 1);
  if ( v5 != 2 )
  {
    if ( v5 != 8 )
    {
      if ( (Context[111] & 0x20) != 0 )
        KeSetEvent((PRKEVENT)Context + 257, 0, 0);
      return 0LL;
    }
    Context[110] |= 0x80u;
  }
  v7 = *(_QWORD *)(a2 + 184);
  v8 = *(_QWORD *)(v7 + 8);
  v9 = *(_QWORD *)(v7 + 16);
  started = RaInitializeConfiguration(
              (int)Context + 384,
              *((_QWORD *)Context + 76),
              *((_DWORD *)Context + 238),
              *((_DWORD *)Context + 239),
              (Context[109] & 4) != 0,
              (unsigned __int8)Context[110] >> 7);
  if ( started < 0 )
  {
    *((_DWORD *)Context + 1563) = 2;
    goto LABEL_95;
  }
  v11 = *((_QWORD *)Context + 76);
  if ( !v11 )
  {
    *((_DWORD *)Context + 1563) = 3;
    started = -1073741810;
    goto LABEL_95;
  }
  started = RaidAdapterConfigureResources((__int64)Context, v8, v9);
  if ( started < 0 )
  {
    *((_DWORD *)Context + 1563) = 4;
    goto LABEL_95;
  }
  if ( *((_DWORD *)Context + 98) == 5 )
  {
    if ( IoGetDevicePropertyData(
           *((PDEVICE_OBJECT *)Context + 4),
           &DEVPKEY_Device_Address,
           0,
           0,
           4u,
           &v47,
           &BusData,
           &v49) >= 0 )
    {
      *((_DWORD *)Context + 240) = HIWORD(v47);
      *((_DWORD *)Context + 241) = (unsigned __int16)v47;
    }
    if ( IoGetDevicePropertyData(
           *((PDEVICE_OBJECT *)Context + 4),
           &DEVPKEY_PciDevice_IsTunneledDevice,
           0,
           0,
           1u,
           &v42,
           &BusData,
           &v49) >= 0 )
    {
      if ( StorageD3InModernStandbyEnabled || (v14 = 0, v42) )
        v14 = 64;
      Context[112] = v14 | Context[112] & 0x9F | (32 * (v42 & 1)) & 0xBF;
    }
    BusData = RaGetBusData((int)Context + 792, 4, (int)Context + 4800, v13, 64);
    RaidQueryPciMsixTableConfigurationInterface(Context);
  }
  if ( (unsigned int)dword_140172178 > 5 && tlgKeywordOn(v12, 0x400000000000LL) )
  {
    v60 = 16LL;
    v59 = Context + 5128;
    v46 = *((_DWORD *)Context + 534);
    v61 = &v46;
    v50 = *((_DWORD *)Context + 1047);
    v63 = &v50;
    v55 = *((_QWORD *)Context + 620);
    v65 = &v55;
    v51 = (unsigned __int8)Context[4956];
    v67 = &v51;
    v52 = *((_DWORD *)Context + 1260);
    v69 = &v52;
    v43 = StorageD3AllowedOnCurrentPlatform;
    v71 = &v43;
    v53 = *((_DWORD *)Context + 1444);
    v73 = &v53;
    v54 = StorageD3RegistryState;
    v75 = &v54;
    v18 = (Context[112] & 0x40) != 0;
    v62 = 4LL;
    v44 = v18;
    v77 = &v44;
    v45 = DFxEnabled;
    v79 = &v45;
    v64 = 4LL;
    v66 = 8LL;
    v68 = 4LL;
    v70 = 4LL;
    v72 = 1LL;
    v74 = 4LL;
    v76 = 4LL;
    v78 = 1LL;
    v80 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(v15, (unsigned __int8 *)dword_14015FF44, v16, v17, 0xDu, &v58);
  }
  if ( (byte_140173446 & 4) != 0 )
    McTemplateK0jqzzqxtqqttt_EtwWriteTransfer(
      (unsigned __int8)StorageD3AllowedOnCurrentPlatform,
      ((unsigned __int8)Context[112] >> 5) & 1,
      ((unsigned __int8)Context[112] >> 6) & 1,
      (__int64)(Context + 5128),
      *((_DWORD *)Context + 14),
      *((const wchar_t **)Context + 599),
      *((const wchar_t **)Context + 598),
      *((_DWORD *)Context + 98),
      *((_QWORD *)Context + 13),
      StorageD3AllowedOnCurrentPlatform,
      *((_DWORD *)Context + 1444),
      v41,
      (Context[112] & 0x40) != 0,
      DFxEnabled,
      (Context[112] & 0x20) != 0);
  *((_DWORD *)Context + 518) = 64;
  PortMiniportRegistryInitialize((__int64)(Context + 2072));
  if ( !_interlockedbittestandset((volatile signed __int32 *)Context + 1518, 0) )
    *((_DWORD *)Context + 1519) = g_MaximumProcessorCount;
  v19 = (__int64 *)(Context + 5432);
  RaidGetD3ColdInterface(*((PDEVICE_OBJECT *)Context + 1));
  RaidGetResetInterface(*((PDEVICE_OBJECT *)Context + 1), (_QWORD *)Context + 680);
  if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline()
    && (*(_DWORD *)(v11 + 184) & 0x20000) != 0 )
  {
    RaidAdapterGetNvmeIceCapabilities(Context);
  }
  started = RaidAdapterStartMiniport((__int64)Context, v11);
  if ( started < 0 )
    goto LABEL_95;
  if ( Context[110] < 0 )
  {
    v34 = KfRaiseIrql(2u);
    RaidResumeAndRestartAdapterQueues(Context);
    KeLowerIrql(v34);
  }
  else
  {
    v20 = *v19;
    if ( *v19 )
    {
      if ( *((_QWORD *)Context + 628) )
      {
        v46 = 0;
        v21 = *(int (__fastcall **)(_QWORD, __int64, int *))(v20 + 40);
        if ( v21 )
        {
          if ( v21(*(_QWORD *)(v20 + 8), 1LL, &v46) >= 0 && (unsigned int)(v46 - 4) <= 1 )
          {
            *(_DWORD *)(*((_QWORD *)Context + 628) + 20LL) |= 0x80u;
            WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)Context + 1));
            *((_QWORD *)Context + 718) = WorkItem;
            if ( !WorkItem )
            {
              *((_DWORD *)Context + 1563) = 12;
              started = -1073741670;
              goto LABEL_95;
            }
          }
        }
      }
    }
    started = RaidAdapterCompleteInitialization((__int64)Context);
    if ( started >= 0 )
    {
      if ( StorEtwLoggingEnabled )
      {
        v25 = (_QWORD *)*((_QWORD *)Context + 628);
        if ( v25 )
        {
          v26 = (int *)v25[1];
          v27 = *v26;
          if ( *v26 == 1 )
          {
            v4 = (__int64)(v26 + 6);
          }
          else if ( v27 == 2 || v27 == 3 )
          {
            v4 = (__int64)(v26 + 8);
          }
          if ( (byte_140173442 & 0x10) != 0 )
          {
            LODWORD(v40) = ((unsigned __int8)Context[110] >> 6) & 1;
            LODWORD(Type) = *(_DWORD *)v4;
            LODWORD(RequiredSize) = *((_DWORD *)Context + 1260);
            LODWORD(Data) = ((unsigned __int8)Context[107] >> 4) & 1;
            Size[0] = *((_DWORD *)Context + 14);
            McTemplateK0pqtqqt_EtwWriteTransfer(
              (unsigned int)Data,
              v23,
              v24,
              *v25,
              *(_QWORD *)Size,
              Data,
              RequiredSize,
              Type,
              v40);
          }
        }
      }
      RaidAdapterInitializeWmi((__int64)Context);
      if ( IoRegisterDeviceInterface(
             *((PDEVICE_OBJECT *)Context + 4),
             &GUID_DEVINTERFACE_STORAGEPORT,
             0LL,
             (PUNICODE_STRING)(Context + 2040)) >= 0
        && IoSetDeviceInterfaceState((PUNICODE_STRING)(Context + 2040), 1u) < 0 )
      {
        RtlFreeUnicodeString((PUNICODE_STRING)(Context + 2040));
      }
      RaidAdapterCreateDevmapEntry((__int64)Context);
      if ( StorIsMFNDSupported((__int64)Context) )
        RaidAdapterRegisterMFNDInterface(v28);
      if ( *((_DWORD *)Context + 1406)
        && IoRegisterDeviceInterface(
             *((PDEVICE_OBJECT *)Context + 4),
             &GUID_DEVINTERFACE_UNIFIED_ACCESS_RPMB,
             0LL,
             (PUNICODE_STRING)(Context + 5608)) >= 0
        && IoSetDeviceInterfaceState((PUNICODE_STRING)(Context + 5608), 1u) < 0 )
      {
        RtlFreeUnicodeString((PUNICODE_STRING)(Context + 5608));
      }
      if ( (Context[113] & 1) == 0 && *((_DWORD *)Context + 1085) == 17 && (Context[112] & 0x20) == 0 )
        StorAdapterInitializeDlrmIfSupported(Context);
      if ( IsSystemAoAC != 1 || !RaidIsAdapterControlSupported((__int64)(Context + 376), 12) )
        goto LABEL_86;
      v29 = (void **)(Context + 5032);
      v31 = PoRegisterPowerSettingCallback(
              *((PDEVICE_OBJECT *)Context + 1),
              &GUID_LOW_POWER_EPOCH,
              RaidPowerSettingCallback,
              Context,
              (PVOID *)Context + 629);
      if ( v31 < 0 )
      {
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_qD(
            WPP_GLOBAL_Control->AttachedDevice,
            18LL,
            &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids,
            Context,
            v31);
        }
      }
      else
      {
        LOBYTE(v30) = 1;
        v32 = PoRegisterCoalescingCallback(RaidCoalescingCallback, v30, Context + 5048, Context);
        if ( v32 >= 0 )
        {
          Context[108] &= 0xFCu;
          v55 = 0x1000000001LL;
          SystemPowerHint = RaidAdapterGetSystemPowerHint((__int64)Context);
          SystemPowerResumeLatency = RaidAdapterGetSystemPowerResumeLatency(SystemPowerHint);
          RaCallMiniportAdapterControl((__int64)(Context + 376));
          goto LABEL_83;
        }
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_qD(
            WPP_GLOBAL_Control->AttachedDevice,
            17LL,
            &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids,
            Context,
            v32);
        }
        v33 = *v29;
        *((_QWORD *)Context + 631) = 0LL;
        PoUnregisterPowerSettingCallback(v33);
      }
      *v29 = 0LL;
LABEL_83:
      started = PoRegisterPowerSettingCallback(
                  *((PDEVICE_OBJECT *)Context + 1),
                  &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
                  RaidPowerSettingCallback,
                  Context,
                  (PVOID *)Context + 763);
      if ( started < 0 )
      {
        *((_QWORD *)Context + 763) = 0LL;
        started = 0;
      }
      else
      {
        Context[111] &= ~8u;
      }
LABEL_86:
      if ( RaidIsAdapterControlSupported((__int64)(Context + 376), 14) )
      {
        PoRegisterPowerSettingCallback(
          *((PDEVICE_OBJECT *)Context + 1),
          &GUID_DISK_MAX_POWER,
          RaidPowerSettingCallback,
          Context,
          (PVOID *)Context + 632);
        started = IoRegisterDeviceInterface(
                    *((PDEVICE_OBJECT *)Context + 4),
                    &GUID_DEVINTERFACE_THERMAL_COOLING,
                    0LL,
                    (PUNICODE_STRING)(Context + 5064));
        if ( started >= 0 )
        {
          Context[108] |= 0x10u;
          IoSetDeviceInterfaceState((PUNICODE_STRING)(Context + 5064), 1u);
        }
      }
      if ( !*((_QWORD *)Context + 628)
        && Context[4434]
        && IoRegisterDeviceInterface(
             *((PDEVICE_OBJECT *)Context + 4),
             &GUID_STORPORT_NON_POFX_MINIPORT,
             0LL,
             (PUNICODE_STRING)Context + 362) >= 0
        && IoSetDeviceInterfaceState((PUNICODE_STRING)Context + 362, 1u) < 0 )
      {
        RtlFreeUnicodeString((PUNICODE_STRING)Context + 362);
      }
    }
  }
LABEL_95:
  Context[110] &= ~0x80u;
  v35 = *((_QWORD *)Context + 628);
  if ( v35 && (*(_DWORD *)(v35 + 20) & 4) != 0 )
  {
    RaidAdapterPoFxIdleComponent((__int64)Context, 0LL, 0LL);
    *(_DWORD *)(*((_QWORD *)Context + 628) + 20LL) &= ~4u;
  }
  Context[111] &= ~0x80u;
  *((_QWORD *)Context + 715) = 0LL;
  *((_DWORD *)Context + 1432) = 0;
  *((_QWORD *)Context + 768) = 0LL;
  *((_QWORD *)Context + 769) = 0LL;
  *((_QWORD *)Context + 770) = 0LL;
  if ( started < 0 )
    _InterlockedExchange((volatile __int32 *)Context + 22, 2);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    LODWORD(Data) = started;
    WPP_SF_qqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x13u,
      (__int64)&WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids,
      Context,
      a2,
      Data);
  }
  if ( (Context[111] & 0x20) != 0 )
    KeSetEvent((PRKEVENT)Context + 257, 0, 0);
  return (unsigned int)started;
}
