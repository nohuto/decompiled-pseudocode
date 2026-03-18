/*
 * XREFs of TtmpPowerRequestHashDeallocator @ 0x14075B1D8
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x14075AE78 (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall TtmpPowerRequestHashDeallocator(void *a1)
{
  ExFreePoolWithTag(a1, 0x52507454u);
}
