/*
 * XREFs of ?ndisReturnPacketsForTranslation@@YAXPEAXPEAU_NDIS_PACKET@@@Z @ 0x1400DE328
 * Callers:
 *     NdisReturnPackets @ 0x1400A3020 (NdisReturnPackets.c)
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1400588A0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ndisReturnPacketToNetBufferList @ 0x14008F390 (ndisReturnPacketToNetBufferList.c)
 */

void __fastcall ndisReturnPacketsForTranslation(void *a1, struct _NDIS_PACKET *a2)
{
  __int64 v3; // r11
  struct _NDIS_STACK_RESERVED *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  NDIS_STACK_RESERVED_FROM_PACKET(a2, &v4);
  *(_QWORD *)v4 = 0LL;
  --*(_DWORD *)&a2[-1].ProtocolReserved[4];
  if ( (*(_DWORD *)(v3 + 120) & 0x8000) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 1828));
  ndisReturnPacketToNetBufferList((struct _NDIS_FILTER_BLOCK *)v3, a2);
}
