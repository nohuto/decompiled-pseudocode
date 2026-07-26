/*
 * XREFs of ?ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140081550
 * Callers:
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140051420 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140159D50 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140169CA0 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisMDoesMiniportNeedCoNdisNdProxy(struct _NDIS_MINIPORT_BLOCK *a1)
{
  return (a1->Flags & 0x20000) != 0 && !ndisMediaTypeCl[a1->MediaType] && (a1->MiniportAttributes & 0x400) == 0;
}
