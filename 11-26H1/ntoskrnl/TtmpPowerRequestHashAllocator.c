/*
 * XREFs of TtmpPowerRequestHashAllocator @ 0x1407E73D8
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x1407E70BC (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 TtmpPowerRequestHashAllocator()
{
  return ExAllocatePool2(0x40uLL);
}
