/*
 * XREFs of HalpInterruptDeferredRecoveryService @ 0x140594410
 * Callers:
 *     <none>
 * Callees:
 *     WheaDeferredRecoveryService @ 0x1406D6CC0 (WheaDeferredRecoveryService.c)
 */

char HalpInterruptDeferredRecoveryService()
{
  WheaDeferredRecoveryService();
  return 1;
}
