/*
 * XREFs of ACPIFanStartDevice @ 0x1400A89C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIFanLoop @ 0x140017774 (ACPIFanLoop.c)
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x140031590 (WPP_RECORDER_SF_qsLqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIDebugGetIrpText @ 0x14003D6E4 (ACPIDebugGetIrpText.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x140042918 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x140042A28 (ACPIThermalAcquireCoolingInterfaces.c)
 *     ACPIInternalSetDeviceInterface @ 0x14004E790 (ACPIInternalSetDeviceInterface.c)
 *     ACPIRegisterForDeviceNotifications @ 0x14004F080 (ACPIRegisterForDeviceNotifications.c)
 *     ACPIFanPrepareImpactZoneSupport @ 0x1400B0460 (ACPIFanPrepareImpactZoneSupport.c)
 */

__int64 __fastcall ACPIFanStartDevice(PDEVICE_OBJECT PhysicalDeviceObject, PIRP Irp)
{
  unsigned __int8 MinorFunction; // r14
  __int64 DeviceExtension; // rax
  __int64 v6; // rbx
  struct _KEVENT *v7; // rdi
  int v8; // edi
  __int64 v9; // rdx
  const char *v10; // r8
  const char *v11; // rcx
  unsigned __int16 v12; // r9
  __int64 v13; // rdx
  char *IrpText; // rax
  const char *v15; // r8
  const char *v16; // r10

  MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)PhysicalDeviceObject);
  v6 = DeviceExtension;
  v7 = (struct _KEVENT *)(DeviceExtension + 344);
  if ( !*(_DWORD *)(DeviceExtension + 192) )
  {
    KeInitializeSpinLock((PKSPIN_LOCK)(DeviceExtension + 184));
    KeInitializeEvent(v7, NotificationEvent, 1u);
  }
  *(_DWORD *)(v6 + 192) = 0x10000000;
  *(_QWORD *)(v6 + 312) = 1LL;
  *(_QWORD *)(v6 + 224) = v6 + 216;
  *(_QWORD *)(v6 + 216) = v6 + 216;
  *(_QWORD *)(v6 + 240) = v6 + 232;
  *(_QWORD *)(v6 + 232) = v6 + 232;
  *(_QWORD *)(v6 + 248) = AMLIGetNamedChild(*(__int64 **)(v6 + 760), 1414743647);
  KeClearEvent(v7);
  v8 = ACPIInternalSetDeviceInterface(PhysicalDeviceObject, &GUID_DEVICE_FAN);
  if ( v8 >= 0 )
  {
    v8 = ACPIInternalSetDeviceInterface(PhysicalDeviceObject, &GUID_DEVINTERFACE_THERMAL_COOLING);
    if ( v8 >= 0 )
    {
      ACPIRegisterForDeviceNotifications(*(_QWORD *)(v6 + 768), (__int64)ACPIFanEvent, *(_QWORD *)(v6 + 768));
      *(_DWORD *)(v6 + 368) = 2;
      ACPIDeviceInternalDeviceRequest(
        (_QWORD *)v6,
        4LL,
        (void (__fastcall *)(__int64, __int64, __int64))ACPIFanPowerCallback,
        0LL,
        0);
      ACPIThermalAcquireCoolingInterfaces(v6);
      ACPIFanPrepareImpactZoneSupport(v6);
      v8 = 0;
      Irp->IoStatus.Status = 0;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        IrpText = ACPIDebugGetIrpText(*(_QWORD *)(v6 + 8), MinorFunction);
        WPP_RECORDER_SF_qsLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x10u,
          0xCu,
          (__int64)&WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
          (char)Irp,
          IrpText,
          0,
          v6,
          v15,
          v16);
      }
      ACPIFanLoop(v6, 0x10000000, 0x20000000);
    }
    else
    {
      v13 = *(_QWORD *)(v6 + 8);
      v10 = byte_140075A82;
      v11 = byte_140075A82;
      if ( (v13 & 0x200000000000LL) != 0 )
      {
        v10 = *(const char **)(v6 + 608);
        if ( (v13 & 0x400000000000LL) != 0 )
          v11 = *(const char **)(v6 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = 11;
        goto LABEL_9;
      }
    }
  }
  else
  {
    v9 = *(_QWORD *)(v6 + 8);
    v10 = byte_140075A82;
    v11 = byte_140075A82;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v10 = *(const char **)(v6 + 608);
      if ( (v9 & 0x400000000000LL) != 0 )
        v11 = *(const char **)(v6 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 10;
LABEL_9:
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x10u,
        v12,
        (__int64)&WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
        v8,
        v6,
        v10,
        v11);
    }
  }
  return (unsigned int)v8;
}
