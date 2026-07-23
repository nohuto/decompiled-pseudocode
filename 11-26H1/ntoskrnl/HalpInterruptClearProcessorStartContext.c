/*
 * XREFs of HalpInterruptClearProcessorStartContext @ 0x14057EC80
 * Callers:
 *     HalpInterruptStartProcessor @ 0x140BF0190 (HalpInterruptStartProcessor.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *HalpInterruptClearProcessorStartContext()
{
  return memset_0((char *)HalpInterruptGlobalStartupBlock + 128, 0, 0x600uLL);
}
