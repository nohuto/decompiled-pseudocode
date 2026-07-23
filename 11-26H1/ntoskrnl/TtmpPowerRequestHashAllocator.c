/*
 * XREFs of TtmpPowerRequestHashAllocator @ 0x1407ECF30
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x1407ECC14 (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 TtmpPowerRequestHashAllocator()
{
  return ExAllocatePool2(0x40uLL);
}
