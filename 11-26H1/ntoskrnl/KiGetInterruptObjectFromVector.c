/*
 * XREFs of KiGetInterruptObjectFromVector @ 0x1402C3D98
 * Callers:
 *     KiInterruptDispatchCommon @ 0x1402C3218 (KiInterruptDispatchCommon.c)
 *     KeQueryWakeSource @ 0x1405E4BFC (KeQueryWakeSource.c)
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
