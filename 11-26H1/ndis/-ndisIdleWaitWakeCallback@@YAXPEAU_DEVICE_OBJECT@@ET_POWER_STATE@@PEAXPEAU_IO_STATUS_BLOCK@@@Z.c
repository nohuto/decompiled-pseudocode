/*
 * XREFs of ?ndisIdleWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140005B00
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140005C70 (-ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x1400070C0 (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 *     McTemplateK0jqx_EtwWriteTransfer @ 0x140007740 (McTemplateK0jqx_EtwWriteTransfer.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x140008430 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     WPP_RECORDER_SF_qZ @ 0x14000D3F0 (WPP_RECORDER_SF_qZ.c)
 *     WPP_RECORDER_SF_dq @ 0x1400687E0 (WPP_RECORDER_SF_dq_ea_1400687E0.c)
 *     ?NdisUnexpectedSsError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x14008E630 (-NdisUnexpectedSsError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 */

void __fastcall ndisIdleWaitWakeCallback(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        char *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 v6; // rbx
  int Status; // r8d
  KIRQL v8; // si
  __int64 v9; // rdx
  int v10; // edx
  __int64 v11; // rcx
  int v12; // edx

  v6 = *((_QWORD *)Context + 556);
  Status = IoStatus->Status;
  if ( IoStatus->Status < 0 )
  {
    if ( Status != -1073741536 )
    {
      NdisUnexpectedSsError((struct _NDIS_MINIPORT_BLOCK *)Context, 6u, Status);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 2;
        WPP_RECORDER_SF_dq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v12,
          15,
          25,
          (struct _GUID *)&WPP_63e371e5a248373aa5c809d99c379eef_Traceguids,
          IoStatus->Status,
          (char)Context);
      }
    }
  }
  else
  {
    v8 = KeAcquireSpinLockRaiseToDpc(*((PKSPIN_LOCK *)Context + 556));
    if ( (*(_DWORD *)(v6 + 504) & 0xC4) == 4 )
    {
      v9 = *(_DWORD *)(v6 + 504) | 0x40u;
      *(_DWORD *)(v6 + 504) = v9;
      LOBYTE(v9) = 1;
      ndisSelectiveSuspendSetResumeBusyReason(v6, v9, 65LL, 0LL);
      if ( (byte_14011D043 & 4) != 0 )
        McTemplateK0jqx_EtwWriteTransfer(
          v11,
          &DeviceWaitWakeComplete,
          Context + 4008,
          Context + 4008,
          *((_DWORD *)Context + 1014),
          *((_QWORD *)Context + 503));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v10,
          9,
          24,
          (struct _GUID *)&WPP_63e371e5a248373aa5c809d99c379eef_Traceguids,
          (char)Context,
          *((_QWORD *)Context + 482));
      ndisScheduleWorkItemInternal((struct _NDIS_WORK_ITEM *)(v6 + 376));
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v6, v8);
  }
  ndisCompleteWaitWake((struct _NDIS_MINIPORT_BLOCK *)Context);
}
