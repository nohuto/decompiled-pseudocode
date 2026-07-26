/*
 * XREFs of ?ndisPnPIrpQueryCapabilities@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x140060F10
 * Callers:
 *     ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x14000A2D0 (-ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisPnPIrpQueryCapabilities(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  struct _NDIS_MINIPORT_BLOCK *v7; // rbx
  unsigned int *p_PnPFlags; // rdi
  unsigned int *p_MiniportAttributes; // rsi
  _IO_STACK_LOCATION *v10; // rax
  int v11; // ebp
  unsigned int *v12; // rdx
  char v14; // [rsp+28h] [rbp-20h]

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      43,
      (struct _GUID *)&WPP_a0375633690b3eae5e161e1c8b2d1e08_Traceguids,
      v14);
  }
  p_PnPFlags = &v7->PnPFlags;
  p_MiniportAttributes = &v7->MiniportAttributes;
  if ( (v7->PnPFlags & 0x2000) == 0 )
  {
    if ( (*p_MiniportAttributes & 0x80u) == 0 )
      goto LABEL_5;
    p_PnPFlags = &v7->PnPFlags;
  }
  *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) |= 0x200u;
LABEL_5:
  v10 = a3->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v10[-1].MajorFunction = *(_OWORD *)&v10->MajorFunction;
  *(_OWORD *)&v10[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v10->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)&v10[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&v10->Parameters.ReadWriteConfig.Length;
  v10[-1].FileObject = v10->FileObject;
  v10[-1].Control = 0;
  v11 = IoSynchronousCallDriver(v7->NextDeviceObject, a3);
  if ( v11 >= 0 )
  {
    v12 = &v7->MiniportAttributes;
    if ( v7->BusType == Vmcs && (*p_MiniportAttributes & 0x80u) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v12,
          13,
          44,
          (struct _GUID *)&WPP_a0375633690b3eae5e161e1c8b2d1e08_Traceguids,
          (char)v7);
        v12 = &v7->MiniportAttributes;
      }
      *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) |= 0x200u;
    }
    if ( (*p_PnPFlags & 0x2000) == 0 && (*v12 & 0x80u) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v12,
          13,
          45,
          (struct _GUID *)&WPP_a0375633690b3eae5e161e1c8b2d1e08_Traceguids,
          (char)v7);
      }
      *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) &= ~0x200u;
    }
    if ( (v7->DriverHandle->Flags & 0x20) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v12,
          13,
          46,
          (struct _GUID *)&WPP_a0375633690b3eae5e161e1c8b2d1e08_Traceguids,
          (char)v7);
      }
      *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) &= ~0x10u;
      *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) &= ~8u;
    }
  }
  *a5 = 0;
  return (unsigned int)v11;
}
