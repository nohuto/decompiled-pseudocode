/*
 * XREFs of ?ndisSetPdcTaskClientExpiryTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400B9098
 * Callers:
 *     ?ndisPMPDCTaskClient@@YAXPEAX@Z @ 0x1400B6FA0 (-ndisPMPDCTaskClient@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisPowerSaveClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400452E0 (-ndisPowerSaveClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 */

void __fastcall ndisSetPdcTaskClientExpiryTimer(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( (unsigned __int8)ndisReferenceMiniport(a1, 0x13u) )
  {
    if ( KeSetCoalescableTimer(
           &a1->PdcTaskClientDisableTimer.Timer,
           (LARGE_INTEGER)-300000000LL,
           0,
           0,
           &a1->PdcTaskClientDisableTimer.Dpc) )
    {
      ndisDereferenceMiniport(a1, 0x13u);
    }
  }
  else
  {
    PdcTaskClientRequest(a1->PdcHandle);
    ndisPowerSaveClearStop((__int64)a1, 12LL);
    _InterlockedExchange(&a1->PdcTaskClientMode, 0);
  }
}
