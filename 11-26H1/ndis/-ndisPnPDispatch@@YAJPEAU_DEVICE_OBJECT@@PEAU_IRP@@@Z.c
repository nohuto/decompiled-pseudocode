/*
 * XREFs of ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x14000A2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x140006630 (-ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x140009060 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLL @ 0x14004CC70 (WPP_RECORDER_SF_qLL.c)
 *     ?ndisPnPIrpQueryCapabilities@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x140060F10 (-ndisPnPIrpQueryCapabilities@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x140081C20 (-ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpFilterResourceRequirements@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x14008C350 (-ndisPnPIrpFilterResourceRequirements@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP.c)
 *     ?ndisPnPIrpQueryPnPDeviceState@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x14008E490 (-ndisPnPIrpQueryPnPDeviceState@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3.c)
 *     ?ndisPnPIrpCancelRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400A9D40 (-ndisPnPIrpCancelRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpCancelStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400A9E40 (-ndisPnPIrpCancelStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpDeviceUsageNotification@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400A9F38 (-ndisPnPIrpDeviceUsageNotification@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@P.c)
 *     ?ndisPnPIrpQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400AA000 (-ndisPnPIrpQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpQueryRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400AA06C (-ndisPnPIrpQueryRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpQueryStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400AA15C (-ndisPnPIrpQueryStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400AA224 (-ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x14016E220 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 */

__int64 __fastcall ndisPnPDispatch(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  unsigned int v2; // ebx
  int MinorFunction; // ebp
  struct _IRP *v4; // rsi
  int v6; // edx
  struct _DEVICE_OBJECT *v7; // rcx
  unsigned __int8 *v8; // r9
  struct _NDIS_MINIPORT_BLOCK *DeviceExtension; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int started; // eax
  int v12; // edx
  unsigned __int64 v14; // rdx
  struct _GUID *v15; // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+30h] [rbp-38h]
  char v17; // [rsp+30h] [rbp-38h]
  unsigned __int8 v18; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int8 v19; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0;
  v18 = 1;
  LOBYTE(MinorFunction) = 0;
  v19 = 1;
  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      48,
      (struct _GUID *)&WPP_a0375633690b3eae5e161e1c8b2d1e08_Traceguids,
      (char)a1,
      v17);
  }
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  DeviceExtension = (struct _NDIS_MINIPORT_BLOCK *)a1->DeviceExtension;
  if ( DeviceExtension->Header.Type != 17 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        13,
        49,
        (struct _GUID *)&WPP_a0375633690b3eae5e161e1c8b2d1e08_Traceguids,
        (char)a1,
        (char)v4);
    }
    v2 = -1073741808;
LABEL_15:
    v4->IoStatus.Status = v2;
    IofCompleteRequest(v4, 0);
    goto LABEL_16;
  }
  CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      13,
      50,
      (struct _GUID *)&WPP_a0375633690b3eae5e161e1c8b2d1e08_Traceguids,
      (char)DeviceExtension,
      CurrentStackLocation->MinorFunction);
  }
  if ( Microsoft_Windows_NDISEnableBits < 0 )
  {
    LODWORD(v16) = MinorFunction;
    LODWORD(v15) = DeviceExtension->IfIndex;
    McTemplateK0jqxd_EtwWriteTransfer(
      (__int64)v7,
      (__int64)&DispatchPnPIrp,
      (__int64)&DeviceExtension->InterfaceGuid,
      (__int64)&DeviceExtension->InterfaceGuid,
      (__int64)v15,
      DeviceExtension->NetLuid.Value,
      v16);
  }
  switch ( MinorFunction )
  {
    case 9:
      started = ndisPnPIrpQueryCapabilities(v7, DeviceExtension, v4, v8, &v18);
      break;
    case 13:
      started = ndisPnPIrpFilterResourceRequirements(v7, DeviceExtension, v4, v8, &v18);
      break;
    case 20:
      started = ndisPnPIrpQueryPnPDeviceState(v7, DeviceExtension, v4, v8, &v18);
      break;
    default:
      v14 = 0x140000000uLL;
      switch ( MinorFunction )
      {
        case 0:
          started = ndisPnPIrpStartDevice(v7, DeviceExtension, v4, &v19, &v18);
          goto LABEL_13;
        case 1:
          started = ndisPnPIrpQueryRemove(v7, DeviceExtension, v4, v8, &v18);
          goto LABEL_13;
        case 2:
          started = ndisPnPIrpRemoveDevice(a1, DeviceExtension, v4, &v19, &v18);
          goto LABEL_13;
        case 3:
          started = ndisPnPIrpCancelRemove(v7, DeviceExtension, v4, &v19, &v18);
          goto LABEL_13;
        case 4:
          started = ndisPnPIrpStopDevice(v7, DeviceExtension, v4, v8, &v18);
          goto LABEL_13;
        case 5:
          started = ndisPnPIrpQueryStop(v7, DeviceExtension, v4, v8, &v18);
          goto LABEL_13;
        case 6:
          started = ndisPnPIrpCancelStop(v7, DeviceExtension, v4, &v19, &v18);
          goto LABEL_13;
        case 8:
          started = ndisPnPIrpQueryInterface(v7, DeviceExtension, v4, v8, &v18);
          goto LABEL_13;
        case 22:
          started = ndisPnPIrpDeviceUsageNotification(a1, DeviceExtension, v4, v8, &v18);
          goto LABEL_13;
        case 23:
          started = ndisPnPIrpSurpriseRemoval(v7, DeviceExtension, v4, &v19, &v18);
          goto LABEL_13;
        default:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v14) = 4;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v14,
              13,
              51,
              (struct _GUID *)&WPP_a0375633690b3eae5e161e1c8b2d1e08_Traceguids,
              (char)DeviceExtension,
              MinorFunction);
          }
          goto LABEL_22;
      }
  }
LABEL_13:
  v2 = started;
  if ( !v18 )
  {
LABEL_14:
    if ( !v19 )
      goto LABEL_16;
    goto LABEL_15;
  }
LABEL_22:
  if ( !DeviceExtension->NextDeviceObject )
    goto LABEL_14;
  ++v4->CurrentLocation;
  ++v4->Tail.Overlay.CurrentStackLocation;
  v2 = IofCallDriver(DeviceExtension->NextDeviceObject, v4);
LABEL_16:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      13,
      52,
      (struct _GUID *)&WPP_a0375633690b3eae5e161e1c8b2d1e08_Traceguids,
      (char)DeviceExtension,
      MinorFunction,
      v2);
  return v2;
}
