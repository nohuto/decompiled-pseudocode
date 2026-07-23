/*
 * XREFs of KiGetInterruptObjectFromVector @ 0x14030EA58
 * Callers:
 *     KiInterruptDispatchCommon @ 0x14030DED8 (KiInterruptDispatchCommon.c)
 *     KeQueryWakeSource @ 0x1405E756C (KeQueryWakeSource.c)
 * Callees:
 *     <none>
 */

void *__fastcall KiGetInterruptObjectFromVector(unsigned int a1)
{
  void *result; // rax

  result = 0LL;
  if ( a1 <= 0xFF )
    return KeGetCurrentPrcb()->InterruptObject[a1];
  return result;
}
