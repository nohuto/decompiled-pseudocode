/*
 * XREFs of ?ndisQueryPowerCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006BEC0
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     NdisWriteErrorLogEntry @ 0x140005D80 (NdisWriteErrorLogEntry.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisQueryPowerCapabilities(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v1; // edi
  PIRP Irp; // rax
  _IRP *v4; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v6; // rax
  int v7; // eax
  int v8; // ecx
  bool v9; // zf
  __int128 v10; // xmm3
  __int128 v11; // xmm2
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 i; // rax
  PULONG RequiredSize; // [rsp+30h] [rbp-49h]
  _BYTE Data[4]; // [rsp+40h] [rbp-39h] BYREF
  ULONG Type; // [rsp+44h] [rbp-35h] BYREF
  ULONG v19; // [rsp+48h] [rbp-31h] BYREF
  _BYTE Event[32]; // [rsp+50h] [rbp-29h] BYREF
  __int128 v21; // [rsp+70h] [rbp-9h] BYREF
  __int128 v22; // [rsp+80h] [rbp+7h]
  __int128 v23; // [rsp+90h] [rbp+17h]
  __int128 v24; // [rsp+A0h] [rbp+27h]

  v1 = 0;
  v21 = 0LL;
  Data[0] = 0;
  v22 = 0LL;
  v19 = 0;
  v23 = 0LL;
  Type = 0;
  v24 = 0LL;
  memset(Event, 0, sizeof(Event));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      13,
      (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
      (char)a1);
  a1->PnPFlags &= ~1u;
  if ( a1->NextDeviceObject )
  {
    if ( IoGetDevicePropertyData(
           a1->PhysicalDeviceObject,
           &DEVPKEY_PciDevice_S0WakeupSupported,
           0,
           0,
           1u,
           Data,
           &v19,
           &Type) >= 0
      && Type == 17 )
    {
      a1->S0WakeupSupported = Data[0] != 0;
    }
    Irp = IoAllocateIrp(a1->NextDeviceObject->StackSize + 1, 0);
    v4 = Irp;
    if ( Irp )
    {
      LODWORD(v21) = 65600;
      *((_QWORD *)&v21 + 1) = -1LL;
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = 0LL;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = 0LL;
      *(_OWORD *)&CurrentStackLocation[-1].FileObject = 0LL;
      CurrentStackLocation[-1].Context = 0LL;
      CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&v21;
      *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2331;
      v4->IoStatus.Status = -1073741637;
      KeInitializeEvent((PRKEVENT)Event, NotificationEvent, 0);
      v6 = v4->Tail.Overlay.CurrentStackLocation;
      v6[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisCompletionRoutine;
      v6[-1].Context = Event;
      v6[-1].Control = -32;
      v1 = IofCallDriver(a1->NextDeviceObject, v4);
      if ( v1 == 259 )
        ndisWaitForKernelObject(Event);
      if ( *(int *)&Event[24] < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(RequiredSize) = *(_DWORD *)&Event[24];
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xEu,
            0xFu,
            (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
            (char)a1,
            RequiredSize);
        }
      }
      else
      {
        if ( (a1->DriverHandle->MiniportDriverCharacteristics.Flags & 8) != 0 )
        {
          DWORD1(v21) |= 0x3C00u;
          v7 = 4;
          v8 = 6;
          LODWORD(v24) = 4;
          *((_QWORD *)&v22 + 1) = 0x400000004LL;
          *(_QWORD *)&v23 = 0x400000004LL;
          *((_QWORD *)&v23 + 1) = 0x600000004LL;
        }
        else
        {
          v7 = v24;
          v8 = HIDWORD(v23);
        }
        v9 = a1->BusType == Isa;
        v10 = v21;
        v11 = v22;
        v12 = v23;
        v13 = v24;
        *(_OWORD *)&a1->DeviceCaps.Size = v21;
        *(_OWORD *)&a1->OriginalDeviceCaps.Size = v10;
        *(_OWORD *)a1->DeviceCaps.DeviceState = v11;
        *(_OWORD *)a1->OriginalDeviceCaps.DeviceState = v11;
        *(_OWORD *)&a1->DeviceCaps.DeviceState[4] = v12;
        *(_OWORD *)&a1->OriginalDeviceCaps.DeviceState[4] = v12;
        *(_OWORD *)&a1->DeviceCaps.DeviceWake = v13;
        *(_OWORD *)&a1->OriginalDeviceCaps.DeviceWake = v13;
        if ( v9 )
        {
          if ( v7 && v8 )
LABEL_20:
            a1->PnPFlags |= 1u;
        }
        else
        {
          for ( i = 2LL; i < 7; ++i )
          {
            if ( *((_DWORD *)&v22 + i) )
              goto LABEL_20;
          }
        }
      }
      IoFreeIrp(v4);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2,
          14,
          14,
          (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
          (char)a1);
      NdisWriteErrorLogEntry(a1, 0xC0001389, 0);
      v1 = -1073741670;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(RequiredSize) = v1;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x10u,
      (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
      (char)a1,
      RequiredSize);
  }
  return v1;
}
