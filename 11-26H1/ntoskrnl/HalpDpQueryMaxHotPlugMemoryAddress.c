/*
 * XREFs of HalpDpQueryMaxHotPlugMemoryAddress @ 0x14057EEF8
 * Callers:
 *     HaliQuerySystemInformation @ 0x140BED8E0 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *HalpDpQueryMaxHotPlugMemoryAddress()
{
  return HalpPmuArbiter.ApcState.ApcListHead[0].Blink;
}
