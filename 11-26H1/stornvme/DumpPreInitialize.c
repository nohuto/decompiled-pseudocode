/*
 * XREFs of DumpPreInitialize @ 0x1400121A0
 * Callers:
 *     <none>
 * Callees:
 *     StorNVMeInitializeVelocity @ 0x14003212C (StorNVMeInitializeVelocity.c)
 */

__int64 DumpPreInitialize()
{
  g_DumpPreInitializeInvoked = 1;
  return StorNVMeInitializeVelocity();
}
