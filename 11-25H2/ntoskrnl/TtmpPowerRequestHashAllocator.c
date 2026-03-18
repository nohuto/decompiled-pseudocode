/*
 * XREFs of TtmpPowerRequestHashAllocator @ 0x14075B1B4
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x14075AE78 (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 TtmpPowerRequestHashAllocator()
{
  return ExAllocatePool2(0x40uLL);
}
