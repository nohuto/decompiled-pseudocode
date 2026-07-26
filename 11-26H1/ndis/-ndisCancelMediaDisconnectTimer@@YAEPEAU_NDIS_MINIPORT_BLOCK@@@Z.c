/*
 * XREFs of ?ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140006F70
 * Callers:
 *     ?ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140006FD0 (-ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x14004EA90 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x140084370 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z @ 0x14015C4B0 (-ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14017E510 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 */

BOOLEAN __fastcall ndisCancelMediaDisconnectTimer(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int PnPFlags; // eax
  BOOLEAN result; // al
  unsigned __int8 v4; // di

  PnPFlags = a1->PnPFlags;
  if ( (PnPFlags & 8) == 0 )
    return 1;
  a1->PnPFlags = PnPFlags & 0xFFFFFDF7 | 0x200;
  result = KeCancelTimer(&a1->MediaDisconnectTimer.Timer);
  v4 = result;
  if ( result )
  {
    ndisDereferenceMiniport(a1, MPREF_PM_D3D);
    return v4;
  }
  return result;
}
