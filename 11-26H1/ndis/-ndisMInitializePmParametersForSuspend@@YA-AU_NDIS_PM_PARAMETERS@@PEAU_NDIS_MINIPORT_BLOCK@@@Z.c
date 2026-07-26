/*
 * XREFs of ?ndisMInitializePmParametersForSuspend@@YA?AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006D430
 * Callers:
 *     ?ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x14006D230 (-ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 * Callees:
 *     ?ndisAoAcIsDataPathPdcActivatorPresent@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140091298 (-ndisAoAcIsDataPathPdcActivatorPresent@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAddWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140142B34 (-ndisAddWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

struct _NDIS_PM_PARAMETERS *__fastcall ndisMInitializePmParametersForSuspend(
        struct _NDIS_PM_PARAMETERS *__return_ptr retstr,
        struct _NDIS_MINIPORT_BLOCK *a2)
{
  unsigned int v2; // esi
  _DEVICE_POWER_STATE DeviceWake; // eax
  unsigned int v6; // eax
  _DEVICE_POWER_STATE v7; // eax
  unsigned int MediaSpecificWakeUpEvents; // eax

  v2 = a2->PMCurrentParameters.EnabledWoLPacketPatterns & 1;
  *(_OWORD *)&retstr->Header.Type = 0LL;
  retstr->MediaSpecificWakeUpEvents = 0;
  if ( !a2->AoAc || (a2->PnPFlags & 0x60) != 0x60 )
    goto LABEL_17;
  DeviceWake = a2->DeviceCaps.DeviceWake;
  if ( DeviceWake != PowerDeviceD1 && (unsigned int)(DeviceWake - 3) > 1 || (a2->PMHardwareCapabilities.Flags & 4) == 0 )
  {
    v7 = a2->DeviceCaps.DeviceWake;
    if ( (v7 == PowerDeviceD1 || (unsigned int)(v7 - 3) <= 1)
      && (a2->PMHardwareCapabilities.Flags & 2) != 0
      && (ndisLowPowerEpoch || ndisConnectedStandby) )
    {
      MediaSpecificWakeUpEvents = a2->PMCurrentParameters.MediaSpecificWakeUpEvents;
      *(_OWORD *)&retstr->Header.Type = *(_OWORD *)&a2->PMCurrentParameters.Header.Type;
      retstr->MediaSpecificWakeUpEvents = MediaSpecificWakeUpEvents;
      if ( ndisAoAcIsDataPathPdcActivatorPresent(a2) && v2 )
        goto LABEL_16;
      return retstr;
    }
LABEL_17:
    retstr->Header = (_NDIS_OBJECT_HEADER)1311360;
    retstr->WakeUpFlags = 16;
    return retstr;
  }
  v6 = a2->PMCurrentParameters.MediaSpecificWakeUpEvents;
  *(_OWORD *)&retstr->Header.Type = *(_OWORD *)&a2->PMCurrentParameters.Header.Type;
  retstr->MediaSpecificWakeUpEvents = v6;
  retstr->WakeUpFlags |= 0x20u;
  if ( ndisAoAcIsDataPathPdcActivatorPresent(a2) && v2 )
LABEL_16:
    ndisAddWoLDirectedMAC(a2);
  return retstr;
}
