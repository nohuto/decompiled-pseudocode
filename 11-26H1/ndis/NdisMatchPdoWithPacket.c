/*
 * XREFs of NdisMatchPdoWithPacket @ 0x1400DBAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1400588A0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 */

bool __fastcall NdisMatchPdoWithPacket(struct _NDIS_PACKET *a1)
{
  __int64 v1; // r10
  struct _NDIS_STACK_RESERVED *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  NDIS_STACK_RESERVED_FROM_PACKET(a1, &v3);
  return v1 == *(_QWORD *)(*(_QWORD *)v3 + 3832LL);
}
