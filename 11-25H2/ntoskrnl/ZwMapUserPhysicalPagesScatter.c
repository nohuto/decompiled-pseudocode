/*
 * XREFs of ZwMapUserPhysicalPagesScatter @ 0x14069B1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwMapUserPhysicalPagesScatter()
{
  _disable();
  __readeflags();
  return KiServiceInternal();
}
