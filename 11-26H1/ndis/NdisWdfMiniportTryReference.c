/*
 * XREFs of NdisWdfMiniportTryReference @ 0x14007C280
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 */

__int64 __fastcall NdisWdfMiniportTryReference(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( (a1->Flags & 0x80u) == 0 )
    NT_ASSERT("(MINIPORT_TEST_FLAG(miniport, 0x00000080))");
  return ndisReferenceMiniport(a1, 0x6Du);
}
