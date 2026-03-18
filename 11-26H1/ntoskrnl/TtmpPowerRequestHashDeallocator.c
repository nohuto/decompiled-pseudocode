/*
 * XREFs of TtmpPowerRequestHashDeallocator @ 0x1407E73FC
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x1407E70BC (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall TtmpPowerRequestHashDeallocator(void *a1)
{
  ExFreePoolWithTag(a1, 0x52507454u);
}
