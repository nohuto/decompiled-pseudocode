/*
 * XREFs of DpiFdoInitializeGpuVirtualization @ 0x1404279F8
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     DxgkIsDirtyBitTrackingSupported @ 0x14007107C (DxgkIsDirtyBitTrackingSupported.c)
 *     DxgkIsLiveMigrationInterfaceSupported @ 0x140071090 (DxgkIsLiveMigrationInterfaceSupported.c)
 *     DpiQueryMiniportInterface @ 0x140193720 (DpiQueryMiniportInterface.c)
 *     DxgkCheckGpuVirtualizationCaps @ 0x1401AA0C0 (DxgkCheckGpuVirtualizationCaps.c)
 *     DxgkIsGpuParavirtualizationSupported @ 0x1401AA170 (DxgkIsGpuParavirtualizationSupported.c)
 *     DpiCreateSecurityDescriptorForGpuVirtualization @ 0x14023F62C (DpiCreateSecurityDescriptorForGpuVirtualization.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1402C00F8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x14030CE44 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x14030E12C (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiFdoCleanupGpuVirtualization @ 0x1404247EC (DpiFdoCleanupGpuVirtualization.c)
 */

__int64 __fastcall DpiFdoInitializeGpuVirtualization(__int64 a1)
{
  __int64 v1; // rdi
  int MiniportInterface; // ebx
  int v4; // eax
  DXGADAPTER *v5; // rcx
  _DWORD *v6; // r14
  struct _DEVICE_OBJECT *v7; // rcx
  struct _DEVICE_OBJECT *v8; // rcx
  char v9; // r15
  __int64 v10; // rcx
  char v11; // r9
  char v12; // dl
  __int64 Type; // [rsp+20h] [rbp-49h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-19h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v16; // [rsp+60h] [rbp-9h] BYREF
  PVOID P; // [rsp+D0h] [rbp+67h] BYREF
  char Data; // [rsp+D8h] [rbp+6Fh] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  LOBYTE(P) = 0;
  MiniportInterface = 0;
  if ( (**(_DWORD **)(*(_QWORD *)(v1 + 4032) + 3048LL) & 0x100) != 0 )
  {
    v9 = 0;
    goto LABEL_71;
  }
  if ( !*(_BYTE *)(v1 + 5144) )
  {
    MiniportInterface = DpiQueryMiniportInterface(
                          a1,
                          (__int64)&GUID_DXGKDDI_GPU_PARTITION_INTERFACE,
                          128,
                          1,
                          Type,
                          v1 + 5152);
    if ( MiniportInterface < 0 )
      goto LABEL_56;
    if ( !*(_QWORD *)(v1 + 5216)
      || !*(_QWORD *)(v1 + 5240)
      || !*(_QWORD *)(v1 + 5192)
      || !*(_QWORD *)(v1 + 5200)
      || !*(_QWORD *)(v1 + 5208)
      || !*(_QWORD *)(v1 + 5224)
      || !*(_QWORD *)(v1 + 5232)
      || !*(_QWORD *)(v1 + 5248)
      || !*(_QWORD *)(v1 + 5256)
      || !*(_QWORD *)(v1 + 5264)
      || !*(_QWORD *)(v1 + 5272)
      || !*(_QWORD *)(v1 + 5184) )
    {
      MiniportInterface = -1073741823;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 14395;
      goto LABEL_127;
    }
    v4 = *(_DWORD *)(v1 + 4048);
    *(_BYTE *)(v1 + 5144) = 1;
    if ( v4 >= 9728 || (unsigned int)(v4 - 8454) <= 0xF9 )
    {
      if ( (int)DpiAcquireCoreSyncAccessSafe(a1, 1) < 0 )
        goto LABEL_40;
      v5 = *(DXGADAPTER **)(v1 + 4032);
      v6 = (_DWORD *)(v1 + 5592);
      memset(&v16, 0, 24);
      v16.Type = DXGKQAITYPE_DEVICE_TYPE_CAPS|DXGKQAITYPE_QUERYSEGMENT;
      v16.pOutputData = (void *)(v1 + 5592);
      *(_OWORD *)&v16.OutputDataSize = 0LL;
      v16.OutputDataSize = 4;
      MiniportInterface = DXGADAPTER::DdiQueryAdapterInfo(v5, &v16);
      DpiReleaseCoreSyncAccessSafe(a1, 1);
      if ( MiniportInterface < 0 )
      {
LABEL_40:
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 14426;
        MiniportInterface = 0;
      }
      else
      {
        if ( *v6 >= 0x10u )
        {
          MiniportInterface = -1073741811;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 14437;
          goto LABEL_127;
        }
        if ( (*v6 & 1) != 0 )
        {
          v7 = *(struct _DEVICE_OBJECT **)(v1 + 152);
          Data = -1;
          IoSetDevicePropertyData(v7, &DEVPKEY_Gpup_Supports_Guest_Hibernation, 0, 0, 0x11u, 1u, &Data);
        }
        if ( (*v6 & 2) != 0 )
        {
          v8 = *(struct _DEVICE_OBJECT **)(v1 + 152);
          Data = -1;
          IoSetDevicePropertyData(v8, &DEVPKEY_Gpup_Supports_Hot_Driver_Update, 0, 0, 0x11u, 1u, &Data);
        }
      }
    }
  }
  if ( *(_BYTE *)(v1 + 5016) )
    goto LABEL_42;
  MiniportInterface = DpiQueryMiniportInterface(a1, (__int64)&GUID_DXGKDDI_SRIOV_INTERFACE, 120, 1, Type, v1 + 5024);
  if ( MiniportInterface >= 0 )
  {
    *(_BYTE *)(v1 + 5016) = 1;
    if ( !*(_QWORD *)(v1 + 5056)
      || !*(_QWORD *)(v1 + 5064)
      || !*(_QWORD *)(v1 + 5072)
      || !*(_QWORD *)(v1 + 5080)
      || !*(_QWORD *)(v1 + 5088)
      || !*(_QWORD *)(v1 + 5096)
      || !*(_QWORD *)(v1 + 5104)
      || !*(_QWORD *)(v1 + 5112)
      || !*(_QWORD *)(v1 + 5120)
      || !*(_QWORD *)(v1 + 5136)
      || !*(_QWORD *)(v1 + 5128) )
    {
      MiniportInterface = -1073741823;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 14497;
      goto LABEL_127;
    }
LABEL_42:
    if ( !*(_BYTE *)(v1 + 5280) )
    {
      MiniportInterface = DpiQueryMiniportInterface(
                            a1,
                            (__int64)&GUID_DXGKDDI_MITIGABLE_DEVICE_INTERFACE,
                            48,
                            1,
                            Type,
                            v1 + 5288);
      if ( MiniportInterface < 0 )
      {
        MiniportInterface = 0;
      }
      else
      {
        *(_BYTE *)(v1 + 5280) = 1;
        if ( !*(_QWORD *)(v1 + 5320) || !*(_QWORD *)(v1 + 5328) )
        {
          MiniportInterface = -1073741823;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 14524;
          goto LABEL_127;
        }
      }
    }
    if ( !*(_BYTE *)(v1 + 5336) )
    {
      MiniportInterface = DpiQueryMiniportInterface(
                            a1,
                            (__int64)&GUID_DXGKDDI_FLEXIOV_DEVICE_INTERFACE,
                            56,
                            1,
                            Type,
                            v1 + 5344);
      if ( MiniportInterface < 0 )
      {
        MiniportInterface = 0;
      }
      else
      {
        *(_BYTE *)(v1 + 5336) = 1;
        if ( !*(_QWORD *)(v1 + 5376) || !*(_QWORD *)(v1 + 5384) || !*(_QWORD *)(v1 + 5392) || *(_WORD *)(v1 + 5346) != 1 )
        {
          MiniportInterface = -1073741823;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 14558;
          goto LABEL_127;
        }
      }
    }
  }
LABEL_56:
  if ( *(_BYTE *)(v1 + 5144) )
  {
    if ( MiniportInterface < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 14580;
      goto LABEL_127;
    }
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 28LL) >= 0x11008u
      && !*(_BYTE *)(v1 + 5336)
      && !*(_BYTE *)(v1 + 5280) )
    {
      MiniportInterface = -1073741811;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 14591;
      goto LABEL_127;
    }
    v9 = 1;
    *(_BYTE *)(v1 + 5016) = 1;
    *(_BYTE *)(v1 + 5336) = 1;
  }
  else
  {
    v9 = (char)P;
  }
  if ( (*(_DWORD *)(v1 + 5592) & 4) != 0 )
  {
    if ( !DxgkIsLiveMigrationInterfaceSupported(*(_QWORD **)(v1 + 4032)) )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 14609;
      goto LABEL_127;
    }
    if ( !(unsigned int)DxgkIsDirtyBitTrackingSupported(v10) )
    {
      MiniportInterface = -1073741823;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 14622;
      goto LABEL_127;
    }
  }
LABEL_71:
  if ( DxgkIsGpuParavirtualizationSupported(*(_QWORD *)(v1 + 4032)) )
  {
    *(_BYTE *)(v1 + 5016) = v11;
    *(_BYTE *)(v1 + 5336) = v11;
    if ( !*(_QWORD *)(v1 + 2904) )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"GPUPARAV");
      if ( IoRegisterDeviceInterface(
             *(PDEVICE_OBJECT *)(v1 + 152),
             &GUID_DEVINTERFACE_GPU_PARTITIONING_DEVICE,
             &DestinationString,
             (PUNICODE_STRING)(v1 + 2896)) < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 14659;
        goto LABEL_127;
      }
    }
  }
  if ( v9 || *(_QWORD *)(v1 + 2904) )
  {
    *(_BYTE *)(v1 + 58) = 1;
    *(_QWORD *)(v1 + 120) = DpiFdoDispatchIoctl;
    *(_DWORD *)(v1 + 5792) = 0;
    *(_QWORD *)(v1 + 104) = DpiFdoDispatchCreate;
    *(_QWORD *)(v1 + 96) = DpiFdoDispatchCleanupAndClose;
    P = 0LL;
    MiniportInterface = DpiCreateSecurityDescriptorForGpuVirtualization(&P);
    if ( MiniportInterface < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 14704;
      goto LABEL_127;
    }
    MiniportInterface = ObSetSecurityObjectByPointer(a1, 4LL, P);
    if ( MiniportInterface < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 14695;
    }
    ExFreePoolWithTag(P, 0);
  }
  if ( MiniportInterface < 0 )
  {
    MiniportInterface = 0;
  }
  else
  {
    if ( !v9 )
      goto LABEL_132;
    if ( !*(_QWORD *)(v1 + 2888) )
    {
      MiniportInterface = IoRegisterDeviceInterface(
                            *(PDEVICE_OBJECT *)(v1 + 152),
                            &GUID_DEVINTERFACE_GPU_PARTITIONING_DEVICE,
                            0LL,
                            (PUNICODE_STRING)(v1 + 2880));
      if ( MiniportInterface < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 14733;
        goto LABEL_127;
      }
    }
    if ( *(_QWORD *)(v1 + 2920)
      || (MiniportInterface = IoRegisterDeviceInterface(
                                *(PDEVICE_OBJECT *)(v1 + 152),
                                &GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE,
                                0LL,
                                (PUNICODE_STRING)(v1 + 2912)),
          MiniportInterface >= 0) )
    {
LABEL_132:
      if ( !DxgkIsGpuParavirtualizationSupported(*(_QWORD *)(v1 + 4032))
        || *(_QWORD *)(v1 + 2936)
        || (DestinationString = 0LL,
            RtlInitUnicodeString(&DestinationString, L"GPUPARAV"),
            MiniportInterface = IoRegisterDeviceInterface(
                                  *(PDEVICE_OBJECT *)(v1 + 152),
                                  &GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE,
                                  &DestinationString,
                                  (PUNICODE_STRING)(v1 + 2928)),
            MiniportInterface >= 0) )
      {
        if ( *(_QWORD *)(v1 + 2952)
          || (MiniportInterface = IoRegisterDeviceInterface(
                                    *(PDEVICE_OBJECT *)(v1 + 152),
                                    &GUID_MITIGABLE_DEVICE_INTERFACE,
                                    0LL,
                                    (PUNICODE_STRING)(v1 + 2944)),
              MiniportInterface >= 0) )
        {
          if ( *(_QWORD *)(v1 + 2968)
            || (MiniportInterface = IoRegisterDeviceInterface(
                                      *(PDEVICE_OBJECT *)(v1 + 152),
                                      &GUID_SRIOV_DEVICE_INTERFACE_STANDARD,
                                      0LL,
                                      (PUNICODE_STRING)(v1 + 2960)),
                MiniportInterface >= 0) )
          {
            if ( *(_QWORD *)(v1 + 2984)
              || (MiniportInterface = IoRegisterDeviceInterface(
                                        *(PDEVICE_OBJECT *)(v1 + 152),
                                        &GUID_FLEXIBLE_IOV_INTERFACE,
                                        0LL,
                                        (PUNICODE_STRING)(v1 + 2976)),
                  MiniportInterface >= 0) )
            {
              MiniportInterface = DxgkCheckGpuVirtualizationCaps(*(_QWORD *)(v1 + 4032), v12, (_BYTE *)(v1 + 5597));
              if ( MiniportInterface >= 0 )
              {
                if ( *(_BYTE *)(v1 + 5144)
                  && (MiniportInterface = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2880), 1u),
                      MiniportInterface < 0) )
                {
                  WdLogSingleEntry1(2LL);
                  WdLogGlobalForLineNumber = 14858;
                }
                else if ( *(_QWORD *)(v1 + 2904)
                       && (MiniportInterface = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2896), 1u),
                           MiniportInterface < 0) )
                {
                  WdLogSingleEntry1(2LL);
                  WdLogGlobalForLineNumber = 14871;
                }
                else if ( *(_QWORD *)(v1 + 2920)
                       && (MiniportInterface = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2912), 1u),
                           MiniportInterface < 0) )
                {
                  WdLogSingleEntry1(2LL);
                  WdLogGlobalForLineNumber = 14888;
                }
                else if ( *(_QWORD *)(v1 + 2936)
                       && (MiniportInterface = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2928), 1u),
                           MiniportInterface < 0) )
                {
                  WdLogSingleEntry1(2LL);
                  WdLogGlobalForLineNumber = 14901;
                }
                else if ( *(_QWORD *)(v1 + 2952)
                       && (MiniportInterface = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2944), 1u),
                           MiniportInterface < 0) )
                {
                  WdLogSingleEntry1(2LL);
                  WdLogGlobalForLineNumber = 14915;
                }
                else if ( *(_QWORD *)(v1 + 2968)
                       && (MiniportInterface = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2960), 1u),
                           MiniportInterface < 0) )
                {
                  WdLogSingleEntry1(2LL);
                  WdLogGlobalForLineNumber = 14928;
                }
                else if ( *(_QWORD *)(v1 + 2984) )
                {
                  MiniportInterface = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2976), 1u);
                  if ( MiniportInterface < 0 )
                  {
                    WdLogSingleEntry1(2LL);
                    WdLogGlobalForLineNumber = 14941;
                  }
                }
              }
              else
              {
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 14842;
              }
            }
            else
            {
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 14831;
            }
          }
          else
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 14814;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 14797;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 14780;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 14761;
    }
  }
LABEL_127:
  DxgkLogInternalTriageEvent(
    *(_QWORD *)(v1 + 4032),
    131075,
    -1,
    (__int64)L"GPU virtualization initialization has completed with status %1",
    MiniportInterface,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( MiniportInterface < 0 )
    DpiFdoCleanupGpuVirtualization(v1);
  return (unsigned int)MiniportInterface;
}
