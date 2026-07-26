/*
 * XREFs of NdisWdfMiniportSetPower @ 0x140005240
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x140004C70 (-ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140007140 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1400834E0 (-ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 *     ?ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x140087E90 (-ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 */

void __fastcall NdisWdfMiniportSetPower(struct _NDIS_MINIPORT_BLOCK *a1, __int32 a2, enum _DEVICE_POWER_STATE a3)
{
  enum _NDIS_MINIPORT_EVENT v6; // dx

  if ( a2 == 6 )
    goto LABEL_7;
  if ( a2 )
  {
    if ( a2 != 2 && a2 != 3 && (unsigned int)(a2 - 4) >= 2 )
    {
LABEL_10:
      if ( (unsigned int)(a2 - 2) <= 4 )
        ndisWdfNotifySystemPower(a1, (enum POWER_ACTION)a2, a3);
      goto LABEL_5;
    }
LABEL_7:
    if ( a3 != PowerDeviceD3 )
    {
      if ( a3 == PowerDeviceD0 )
      {
        v6 = NdisMEventD0_Sx;
        goto LABEL_9;
      }
      if ( (unsigned int)(a3 - 2) >= 2 )
        goto LABEL_10;
    }
    v6 = NdisMEventDx_Sx;
LABEL_9:
    ndisLogMiniportEvent(a1, v6);
    goto LABEL_10;
  }
  if ( a3 == PowerDeviceD3 )
    goto LABEL_4;
  if ( a3 == PowerDeviceD0 )
  {
    ndisLogMiniportEvent(a1, NdisMEventD0_S0Idle);
    ndisWdfNotifyDevicePower(a1, a2, NdisDeviceStateD0);
    return;
  }
  if ( (unsigned int)(a3 - 2) < 2 )
LABEL_4:
    ndisLogMiniportEvent(a1, NdisMEventDx_S0Idle);
LABEL_5:
  ndisWdfNotifyDevicePower(a1, a2, (enum _NDIS_DEVICE_POWER_STATE)a3);
  if ( a3 == PowerDeviceD0 && (unsigned int)(a2 - 2) <= 1 )
  {
    if ( a1->SelectiveSuspend )
      ndisSelectiveSuspendClearStop(a1, 6LL);
  }
}
