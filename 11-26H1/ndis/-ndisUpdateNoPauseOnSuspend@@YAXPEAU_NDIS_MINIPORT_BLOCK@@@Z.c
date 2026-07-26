/*
 * XREFs of ?ndisUpdateNoPauseOnSuspend@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140054B70
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x140080DC0 (NdisMSetMiniportAttributes.c)
 *     ?ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140158830 (-ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     NdisNblTrackerRegisterComponent @ 0x140054300 (NdisNblTrackerRegisterComponent.c)
 *     NdisNblTrackerDeregisterComponent @ 0x140054C00 (NdisNblTrackerDeregisterComponent.c)
 */

void __fastcall ndisUpdateNoPauseOnSuspend(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( (a1->InfoFlags & 0x80000000) != 0
    && (a1->MinimumNdisMajorVersion > 6u || a1->MinimumNdisMajorVersion == 6 && a1->MinimumNdisMinorVersion >= 0x1Eu)
    && ndisNoPauseOnSuspend )
  {
    a1->FilterPnPFlags |= 0x80u;
    if ( !a1->LowPowerRcvReturnNblTracker )
      a1->LowPowerRcvReturnNblTracker = (NDIS_NBL_TRACKER_HANDLE__ *)NdisNblTrackerRegisterComponent(
                                                                       3,
                                                                       (__int64)a1,
                                                                       (__int64)a1->pAdapterInstanceName);
  }
  else
  {
    a1->FilterPnPFlags &= ~0x80u;
    NdisNblTrackerDeregisterComponent(a1->LowPowerRcvReturnNblTracker);
    a1->LowPowerRcvReturnNblTracker = 0LL;
  }
}
