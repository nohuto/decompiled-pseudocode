/*
 * XREFs of ?ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140034420
 * Callers:
 *     ?ndisPostSetOpenPacketFilter@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x140033E60 (-ndisPostSetOpenPacketFilter@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?XRemoveBindingFromLists@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140034160 (-XRemoveBindingFromLists@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisSetOpenPacketFilter@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x140034460 (-ndisSetOpenPacketFilter@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetRestorePacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400C25A8 (-ndisSetRestorePacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     NdisOpenAdapterEx @ 0x1401758D0 (NdisOpenAdapterEx.c)
 *     ?ndisDeQueueOpenOnMiniport@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140179BD0 (-ndisDeQueueOpenOnMiniport@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14017F330 (-ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140181D90 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisUpdateCheckForLoopbackFlag(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _X_FILTER *EthDB; // rax

  EthDB = a1->EthDB;
  if ( EthDB && EthDB->SingleActiveOpen || !a1->LoopbackOpens || a1->NumOpens <= 1u )
    _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFFFFBFFF);
  else
    _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x4000u);
}
