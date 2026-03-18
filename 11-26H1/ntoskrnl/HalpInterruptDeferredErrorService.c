/*
 * XREFs of HalpInterruptDeferredErrorService @ 0x1405943F0
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmciHandler @ 0x14052080C (HalpCmciHandler.c)
 */

char HalpInterruptDeferredErrorService()
{
  HalpCmciHandler();
  return 1;
}
