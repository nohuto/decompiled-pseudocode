/*
 * XREFs of CMFAllocFn @ 0x140848094
 * Callers:
 *     XpressDecodeCreate @ 0x14072423C (XpressDecodeCreate.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 CMFAllocFn()
{
  return ExAllocatePool2(0x100uLL);
}
