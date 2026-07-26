/*
 * XREFs of ?ndisWdfPreReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140141A74
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x140005350 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140007140 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400220A0 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisPnPRemoveDeviceEx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140068C70 (-ndisPnPRemoveDeviceEx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400824B0 (-ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x14008F6C0 (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ?ndisWakeUpDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B9364 (-ndisWakeUpDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400E7FA8 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisWdfPreReleaseHardware(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v1; // edi
  unsigned int InterlockedFlags; // eax
  unsigned int v4; // ett
  bool v5; // zf

  v1 = 0;
  ndisLogMiniportEvent(a1, NdisMEvent_DeviceRemove);
  _m_prefetchw(&a1->InterlockedFlags);
  InterlockedFlags = a1->InterlockedFlags;
  do
  {
    v4 = InterlockedFlags;
    InterlockedFlags = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&a1->InterlockedFlags,
                         InterlockedFlags,
                         InterlockedFlags);
  }
  while ( v4 != InterlockedFlags );
  if ( (InterlockedFlags & 0x200) == 0 )
  {
    NdisTraceLoggingDeviceRemoved();
    ndisPowerSaveStop(a1, 2u);
    ndisWaitForKernelObject(&a1->PowerD0CompleteEvent);
    if ( (a1->PnPFlags & 0x100) == 0 && a1->CurrentDevicePowerState > PowerDeviceD0 )
      v1 = ndisWakeUpDevice(a1);
    ndisReferenceMiniportNoCheck(a1, 0x1Eu);
  }
  if ( !a1->Ref.ReferenceCount )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v5 = a1->PnPDeviceState == NdisPnPDeviceRemoved;
  a1->OldPnPDeviceState = NdisPnPDeviceStarted;
  if ( !v5 )
    ndisPnPRemoveDeviceEx(a1);
  return v1;
}
