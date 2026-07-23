/*
 * XREFs of HalpInterruptDeferredErrorService @ 0x140596B70
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmciHandler @ 0x140522EB0 (HalpCmciHandler.c)
 */

char HalpInterruptDeferredErrorService()
{
  HalpCmciHandler();
  return 1;
}
