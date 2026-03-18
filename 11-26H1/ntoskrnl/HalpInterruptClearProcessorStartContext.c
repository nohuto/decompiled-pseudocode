/*
 * XREFs of HalpInterruptClearProcessorStartContext @ 0x14057C750
 * Callers:
 *     HalpInterruptStartProcessor @ 0x140BEA190 (HalpInterruptStartProcessor.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void *HalpInterruptClearProcessorStartContext()
{
  return memset_0((char *)HalpInterruptGlobalStartupBlock + 128, 0, 0x600uLL);
}
