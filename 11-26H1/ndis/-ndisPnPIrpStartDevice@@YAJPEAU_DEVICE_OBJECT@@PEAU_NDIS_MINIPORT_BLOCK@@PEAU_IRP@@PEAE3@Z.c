/*
 * XREFs of ?ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x140006630
 * Callers:
 *     ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x14000A2D0 (-ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1400053C0 (-ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@J@Z @ 0x1400067C0 (-NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@.c)
 *     ?ndisMInvokeStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1400068E0 (-ndisMInvokeStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140007140 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_qZ @ 0x14000D3F0 (WPP_RECORDER_SF_qZ.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisScheduleStartDeviceWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1400AA3E8 (-ndisScheduleStartDeviceWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 */

__int64 __fastcall ndisPnPIrpStartDevice(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  unsigned int v8; // esi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int started; // ebx
  _IO_STACK_LOCATION *v12; // rax
  int v13; // eax
  int v14; // edx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      9,
      31,
      (struct _GUID *)&WPP_a0375633690b3eae5e161e1c8b2d1e08_Traceguids,
      (char)a2,
      (__int64)a2->pAdapterInstanceName);
  ndisLogMiniportEvent(a2, NdisMEvent_DeviceStart);
  v8 = 4;
  a2->PnPFlags = a2->PnPFlags & 0xFFFEFFEF | 0x10000;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( (unsigned int)ndisMInvokeStartDevice(a2, a3) )
  {
    started = -1073741823;
    goto LABEL_11;
  }
  v8 = 9;
  started = IoSynchronousCallDriver(a2->NextDeviceObject, a3);
  if ( started < 0 )
  {
LABEL_8:
    if ( started == 259 )
      goto LABEL_9;
LABEL_11:
    a3->IoStatus.Status = started;
    goto LABEL_9;
  }
  if ( a2->MajorNdisVersion <= 6u && (a2->MajorNdisVersion != 6 || a2->MinorNdisVersion < 0x1Eu) || ndisStartDeviceSync )
  {
    v8 = 4;
    started = ndisStartDeviceSynchronous(a2, a3);
    goto LABEL_8;
  }
  v12 = a3->Tail.Overlay.CurrentStackLocation;
  *a4 = 0;
  started = 259;
  v8 = 4;
  v12->Control |= 1u;
  v13 = ndisScheduleStartDeviceWorkItem(a2, a3);
  if ( v13 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v14,
        13,
        32,
        (struct _GUID *)&WPP_a0375633690b3eae5e161e1c8b2d1e08_Traceguids,
        (char)a2,
        v13);
    }
    a3->IoStatus.Status = -1073741823;
    IofCompleteRequest(a3, 0);
  }
LABEL_9:
  NdisTraceLoggingDeviceStarted(a2, v8, (unsigned int)started);
  *a5 = 0;
  return (unsigned int)started;
}
