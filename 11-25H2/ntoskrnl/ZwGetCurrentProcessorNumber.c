/*
 * XREFs of ZwGetCurrentProcessorNumber @ 0x14069D0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG ZwGetCurrentProcessorNumber(void)
{
  __int64 v0; // rcx

  _disable();
  __readeflags();
  return KiServiceInternal(v0);
}
