/*
 * XREFs of HalpDpQueryMaxHotPlugMemoryAddress @ 0x140581418
 * Callers:
 *     HaliQuerySystemInformation @ 0x140BF38E0 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *HalpDpQueryMaxHotPlugMemoryAddress()
{
  return HalpPmuArbiter.ApcState.ApcListHead[0].Blink;
}
