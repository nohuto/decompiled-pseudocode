/*
 * XREFs of HalpDpInitDiscard @ 0x140CB50AC
 * Callers:
 *     HalpDpInitSystem @ 0x140BF10C0 (HalpDpInitSystem.c)
 * Callees:
 *     HalpGetHotPlugMemoryInfo @ 0x140CB46F4 (HalpGetHotPlugMemoryInfo.c)
 */

struct _LIST_ENTRY *__fastcall HalpDpInitDiscard(__int64 a1)
{
  struct _LIST_ENTRY *result; // rax

  HalpGetHotPlugMemoryInfo(a1);
  result = HalpPmuArbiter.ApcState.ApcListHead[0].Blink;
  if ( HalpPmuArbiter.ApcState.ApcListHead[0].Blink > (struct _LIST_ENTRY *)HalpMaximumPhysicalMemoryAddress )
    HalpMaximumPhysicalMemoryAddress = (__int64)HalpPmuArbiter.ApcState.ApcListHead[0].Blink;
  return result;
}
