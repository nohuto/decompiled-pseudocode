/*
 * XREFs of ?ndisVerifierFreePacketPool@@YAXPEAX@Z @ 0x1400C93F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisFreePacketPoolInternal@@YAXPEAXE@Z @ 0x140072C10 (-ndisFreePacketPoolInternal@@YAXPEAXE@Z.c)
 */

void __fastcall ndisVerifierFreePacketPool(struct _NDIS_PKT_POOL *a1)
{
  ndisFreePacketPoolInternal(a1);
}
