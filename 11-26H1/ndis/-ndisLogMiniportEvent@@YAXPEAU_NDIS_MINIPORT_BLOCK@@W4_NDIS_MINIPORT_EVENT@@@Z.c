/*
 * XREFs of ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140007140
 * Callers:
 *     NdisWdfMiniportSetPower @ 0x140005240 (NdisWdfMiniportSetPower.c)
 *     ?ndisPowerSuspendRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140005850 (-ndisPowerSuspendRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOC.c)
 *     ?ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140006020 (-ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x140006630 (-ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140006FD0 (-ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?ndisCancelIdleRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x140045020 (-ndisCancelIdleRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 *     ?ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140047EA0 (-ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     NdisMIdleNotificationConfirm @ 0x14006D9C0 (NdisMIdleNotificationConfirm.c)
 *     NdisMIdleNotificationCompleteEx @ 0x14006E2D0 (NdisMIdleNotificationCompleteEx.c)
 *     ?NdisMRemoveMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x14007B420 (-NdisMRemoveMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x140081C20 (-ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z4W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140082530 (-ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_.c)
 *     ?ndisSetDevicePowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140082880 (-ndisSetDevicePowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     NdisLWMUninitializeNetworkInterface @ 0x140095180 (NdisLWMUninitializeNetworkInterface.c)
 *     ?ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A9A3C (-ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPIrpCancelRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400A9D40 (-ndisPnPIrpCancelRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpCancelStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400A9E40 (-ndisPnPIrpCancelStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpQueryRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400AA06C (-ndisPnPIrpQueryRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpQueryStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400AA15C (-ndisPnPIrpQueryStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400AA224 (-ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisSetPowerResumeComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1400C6AD0 (-ndisSetPowerResumeComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?ndisWdfPreReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140141A74 (-ndisWdfPreReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x14016E220 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x14017AAB0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14017E510 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140182D00 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x140182FE0 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140185800 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x140006B10 (WPP_RECORDER_SF_Lq.c)
 *     ?ndisRecordEvent@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@GPEAX@Z @ 0x140007240 (-ndisRecordEvent@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@GPEAX@Z.c)
 *     McTemplateK0jqxzq_EtwWriteTransfer @ 0x140007650 (McTemplateK0jqxzq_EtwWriteTransfer.c)
 */

void __fastcall ndisLogMiniportEvent(struct _NDIS_MINIPORT_BLOCK *a1, enum _NDIS_MINIPORT_EVENT a2)
{
  void *v4; // rdx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x98u,
      (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
      a2,
      a1);
  if ( (unsigned __int16)(a2 - 70) <= 6u )
  {
    if ( (byte_14011D045 & 8) == 0 )
      goto LABEL_7;
    v4 = &MiniportFatalError;
    goto LABEL_6;
  }
  if ( (byte_14011D045 & 4) != 0 )
  {
    v4 = &MiniportEvent;
LABEL_6:
    McTemplateK0jqxzq_EtwWriteTransfer(
      (_DWORD)a1,
      (_DWORD)v4,
      (_DWORD)a1 + 4008,
      (_DWORD)a1 + 4008,
      a1->IfIndex,
      a1->NetLuid.Value,
      (__int64)a1->pAdapterInstanceName->Buffer,
      a2);
  }
LABEL_7:
  ndisRecordEvent(a1->PnpEventLog, a2, 0LL);
}
