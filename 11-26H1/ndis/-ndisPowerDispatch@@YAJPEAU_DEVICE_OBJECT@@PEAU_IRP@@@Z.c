/*
 * XREFs of ?ndisPowerDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x14005BDC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14005C140 (-ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueuePowerIrp@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14005C260 (-ndisQueuePowerIrp@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140177D10 (-ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisPowerDispatch(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  void *DeviceExtension; // rbx
  char v3; // si
  struct _IRP *v4; // rdi
  _DEVICE_OBJECT *v5; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  int MinorFunction; // ecx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  unsigned int Power; // eax
  int v12; // edx
  unsigned int v13; // esi
  _IO_STACK_LOCATION *v15; // rax
  _IO_STACK_LOCATION *v16; // rax
  _IO_STACK_LOCATION *v17; // rax
  char v18[8]; // [rsp+30h] [rbp-28h]

  DeviceExtension = a1->DeviceExtension;
  v3 = (char)a1;
  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x6Cu,
      (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
      (char)DeviceExtension,
      a2);
  if ( *(_BYTE *)DeviceExtension == 17 )
  {
    v5 = (_DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 480);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        14,
        110,
        (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
        (char)DeviceExtension);
    }
    CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
    MinorFunction = CurrentStackLocation->MinorFunction;
    if ( MinorFunction == 2 )
    {
      if ( !KeGetCurrentIrql() )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v12,
            14,
            114,
            (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
            (char)DeviceExtension);
        }
        Power = ndisSetPower(v4, CurrentStackLocation, (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
        goto LABEL_18;
      }
      goto LABEL_25;
    }
    v8 = CurrentStackLocation->MinorFunction;
    if ( CurrentStackLocation->MinorFunction )
    {
      v9 = MinorFunction - 1;
      if ( MinorFunction == 1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v9,
            14,
            111,
            (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
            (char)DeviceExtension);
        }
        v17 = v4->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&v17[-1].MajorFunction = *(_OWORD *)&v17->MajorFunction;
        *(_OWORD *)&v17[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v17->Parameters.NotifyDirectoryEx.CompletionFilter;
        *(_OWORD *)&v17[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&v17->Parameters.ReadWriteConfig.Length;
        v17[-1].FileObject = v17->FileObject;
        v17[-1].Control = 0;
        v13 = IoSynchronousCallDriver(v5, v4);
        v4->IoStatus.Status = v13;
        IofCompleteRequest(v4, 0);
      }
      else
      {
        if ( MinorFunction == 3 )
        {
          if ( !KeGetCurrentIrql() )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v10) = 4;
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v10,
                14,
                113,
                (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
                (char)DeviceExtension);
            }
            Power = ndisQueryPower(v4, CurrentStackLocation, (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
LABEL_18:
            v13 = Power;
            goto LABEL_19;
          }
LABEL_25:
          ndisQueuePowerIrp((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, v4);
          v13 = 259;
          goto LABEL_19;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v18 = CurrentStackLocation->MinorFunction;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xEu,
            0x73u,
            (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
            (char)DeviceExtension,
            *(_QWORD *)v18);
        }
        ++v4->CurrentLocation;
        ++v4->Tail.Overlay.CurrentStackLocation;
        v13 = IofCallDriver(v5, v4);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v8,
          14,
          112,
          (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
          (char)DeviceExtension);
      }
      CurrentStackLocation->Parameters.Read.Length = *((_DWORD *)DeviceExtension + 333);
      v15 = v4->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v15[-1].MajorFunction = *(_OWORD *)&v15->MajorFunction;
      *(_OWORD *)&v15[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v15->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)&v15[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&v15->Parameters.ReadWriteConfig.Length;
      v15[-1].FileObject = v15->FileObject;
      v15[-1].Control = 0;
      v16 = v4->Tail.Overlay.CurrentStackLocation;
      v16[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisWaitWakeIoCompletion;
      v16[-1].Context = DeviceExtension;
      v16[-1].Control = -32;
      v13 = IofCallDriver(v5, v4);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x6Du,
        (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
        v3,
        v4);
    v13 = -1073741808;
    v4->IoStatus.Status = -1073741808;
    IofCompleteRequest(v4, 0);
  }
LABEL_19:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v18 = v13;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x74u,
      (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
      (char)DeviceExtension,
      *(_QWORD *)v18);
  }
  return v13;
}
