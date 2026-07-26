/*
 * XREFs of ?ndisPowerSuspendRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140005850
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x140005820 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140007140 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_qZ @ 0x14000D3F0 (WPP_RECORDER_SF_qZ.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x14004CB00 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_dq @ 0x1400687E0 (WPP_RECORDER_SF_dq_ea_1400687E0.c)
 *     ?NdisUnexpectedSsError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x14008E630 (-NdisUnexpectedSsError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 */

void __fastcall ndisPowerSuspendRequestComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        struct _NDIS_MINIPORT_BLOCK *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  KIRQL v7; // si
  bool v8; // zf
  unsigned int v9; // ecx
  int v10; // edx
  __int64 v11; // rcx
  int v12; // edx
  KIRQL v13; // al
  KIRQL v14; // bl

  SelectiveSuspend = Context->SelectiveSuspend;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      21,
      (struct _GUID *)&WPP_63e371e5a248373aa5c809d99c379eef_Traceguids,
      (char)Context,
      IoStatus->Status);
  ndisLogMiniportEvent(Context, NdisMEventDx_SSComplete);
  if ( IoStatus->Status >= 0 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
    *((_DWORD *)SelectiveSuspend + 126) = *((_DWORD *)SelectiveSuspend + 126) & 0xFFFFFFE7 | 0x10;
    KeClearEvent((PRKEVENT)((char *)SelectiveSuspend + 248));
    KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 176), 0, 0);
    ++*((_DWORD *)SelectiveSuspend + 161);
    v8 = *((_DWORD *)SelectiveSuspend + 157) == 0;
    *((_QWORD *)SelectiveSuspend + 81) = MEMORY[0xFFFFF78000000014];
    if ( !v8 )
    {
      v9 = *((_DWORD *)SelectiveSuspend + 157);
      if ( v9 <= 0xF )
        goto LABEL_8;
      if ( v9 - 33 <= 0x20 )
      {
        v9 -= 17;
LABEL_8:
        if ( v9 <= 0x30 )
          *((_QWORD *)SelectiveSuspend + 2 * (int)v9 + 93) += (MEMORY[0xFFFFF78000000014]
                                                             - *((_QWORD *)SelectiveSuspend + 82))
                                                            / 10000LL;
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v7);
    NDIS_COUNT_POWER_TRANSITION(Context, *((_DWORD *)SelectiveSuspend + 174));
    if ( (byte_14011D041 & 8) != 0 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _DWORD))McTemplateK0jqxqq_EtwWriteTransfer)(
        v11,
        &DevicePowerStateChange,
        &Context->InterfaceGuid,
        &Context->InterfaceGuid,
        Context->IfIndex,
        (_NET_LUID_LH)Context->NetLuid.Value,
        1,
        *((_DWORD *)SelectiveSuspend + 174));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v10,
        9,
        22,
        (struct _GUID *)&WPP_63e371e5a248373aa5c809d99c379eef_Traceguids,
        (char)Context,
        (__int64)Context->pAdapterInstanceName);
    return;
  }
  NdisUnexpectedSsError(Context, 5u, IoStatus->Status);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_dq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      15,
      23,
      (struct _GUID *)&WPP_63e371e5a248373aa5c809d99c379eef_Traceguids,
      IoStatus->Status,
      (char)Context);
  }
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  *((_DWORD *)SelectiveSuspend + 126) &= ~8u;
  v14 = v13;
  KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 176), 0, 0);
  KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v14);
}
