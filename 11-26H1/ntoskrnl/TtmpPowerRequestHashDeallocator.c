/*
 * XREFs of TtmpPowerRequestHashDeallocator @ 0x1407ECF54
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x1407ECC14 (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall TtmpPowerRequestHashDeallocator(void *a1)
{
  ExFreePoolWithTag(a1, 0x52507454u);
}
