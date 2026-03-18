/*
 * XREFs of ZwMapUserPhysicalPagesScatter @ 0x140723450
 * Callers:
 *     DifZwMapUserPhysicalPagesScatterWrapper @ 0x1406A9E90 (DifZwMapUserPhysicalPagesScatterWrapper.c)
 * Callees:
 *     <none>
 */

__int64 ZwMapUserPhysicalPagesScatter()
{
  _disable();
  __readeflags();
  return KiServiceInternal();
}
