/*
 * XREFs of HalpInterruptDeferredRecoveryService @ 0x140596B90
 * Callers:
 *     <none>
 * Callees:
 *     WheaDeferredRecoveryService @ 0x1406DADA0 (WheaDeferredRecoveryService.c)
 */

char HalpInterruptDeferredRecoveryService()
{
  WheaDeferredRecoveryService();
  return 1;
}
