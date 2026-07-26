/*
 * XREFs of ?ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400063A0
 * Callers:
 *     ?ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140006020 (-ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisWnfPdcCallback @ 0x140066C10 (ndisWnfPdcCallback.c)
 * Callees:
 *     ?ndisClearIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140006400 (-ndisClearIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400C6A00 (-ndisSetIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisNicAutoPowerSaverControlIdleTimer(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _DEVICE_POWER_STATE DeviceWake; // eax

  if ( a1->AoAc )
  {
    if ( (a1->PnPFlags & 0x60) == 0x60 )
    {
      DeviceWake = a1->DeviceCaps.DeviceWake;
      if ( (DeviceWake == PowerDeviceD1 || (unsigned int)(DeviceWake - 3) <= 1)
        && (a1->PMHardwareCapabilities.Flags & 4) != 0
        && a1->SelectiveSuspend )
      {
        if ( ndisConnectedStandby )
          ndisSetIdleTimer(a1);
        else
          ndisClearIdleTimer(a1);
      }
    }
  }
}
