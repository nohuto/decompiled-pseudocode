/*
 * XREFs of ?ndisNDKCleanup@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016A580
 * Callers:
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14017E510 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140071920 (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisNDKCleanup(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_NDK_BLOCK *NDKBlock; // rax

  NDKBlock = ndisGetNDKBlock(a1);
  ExFreePoolWithTag(NDKBlock, 0);
}
