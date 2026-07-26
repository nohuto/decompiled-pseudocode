/*
 * XREFs of ?ndisGenericWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1400AAF30
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140005C70 (-ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x140009060 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qql @ 0x140023560 (WPP_RECORDER_SF_qql_ea_140023560.c)
 *     ?ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140047EA0 (-ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x140077A80 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 */

void __fastcall ndisGenericWaitWakeCallback(
        __int64 DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        struct _NDIS_MINIPORT_BLOCK *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int Status; // edi
  _DEVICE_POWER_STATE CurrentDevicePowerState; // eax
  struct _GUID *v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+30h] [rbp-28h]
  int v10; // [rsp+38h] [rbp-20h]

  Status = IoStatus->Status;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = IoStatus->Status;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x1Au,
      (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
      (char)Context,
      (char)Context->WaitWakeIrp,
      v10);
  }
  if ( Status < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v9) = Status;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x1Eu,
        (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
        (char)Context,
        v9);
    }
    if ( (byte_14011D042 & 0x40) != 0 )
      McTemplateK0jqxddq_EtwWriteTransfer(
        DeviceObject,
        &WaitWakeIrpFailed,
        &Context->InterfaceGuid,
        (__int64)&Context->InterfaceGuid,
        Context->IfIndex,
        Context->NetLuid.Value,
        Status,
        1,
        0);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        14,
        27,
        (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
        (char)Context);
    if ( (byte_14011D041 & 8) != 0 )
    {
      LODWORD(v9) = 65537;
      LODWORD(v8) = Context->IfIndex;
      McTemplateK0jqxd_EtwWriteTransfer(
        DeviceObject,
        (__int64)&WaitWakeComplete,
        (__int64)&Context->InterfaceGuid,
        (__int64)&Context->InterfaceGuid,
        (__int64)v8,
        Context->NetLuid.Value,
        v9);
    }
    if ( (Context->PnPFlags & 0x800) != 0
      || (CurrentDevicePowerState = Context->CurrentDevicePowerState, CurrentDevicePowerState != PowerDeviceD1)
      && (unsigned int)(CurrentDevicePowerState - 3) > 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4,
          14,
          29,
          (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
          (char)Context);
      if ( byte_14011D043 < 0 )
      {
        LODWORD(v9) = 65537;
        LODWORD(v8) = Context->IfIndex;
        McTemplateK0jqxd_EtwWriteTransfer(
          DeviceObject,
          (__int64)&WakeByMiniport,
          (__int64)&Context->InterfaceGuid,
          (__int64)&Context->InterfaceGuid,
          (__int64)v8,
          Context->NetLuid.Value,
          v9);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4,
          14,
          28,
          (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
          (char)Context);
      if ( (byte_14011D041 & 8) != 0 )
      {
        LODWORD(v9) = 65537;
        LODWORD(v8) = Context->IfIndex;
        McTemplateK0jqxd_EtwWriteTransfer(
          DeviceObject,
          (__int64)&MiniportPoweringUp,
          (__int64)&Context->InterfaceGuid,
          (__int64)&Context->InterfaceGuid,
          (__int64)v8,
          Context->NetLuid.Value,
          v9);
      }
      ndisRequestDevicePowerD0(Context, NdisMEventD0_D3DWake);
    }
  }
  ndisCompleteWaitWake(Context);
}
