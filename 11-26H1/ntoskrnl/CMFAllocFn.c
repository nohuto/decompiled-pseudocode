/*
 * XREFs of CMFAllocFn @ 0x140842C04
 * Callers:
 *     XpressDecodeCreate @ 0x14071F61C (XpressDecodeCreate.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 CMFAllocFn()
{
  return ExAllocatePool2(0x100uLL);
}
