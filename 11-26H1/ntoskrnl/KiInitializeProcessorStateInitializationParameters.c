/*
 * XREFs of KiInitializeProcessorStateInitializationParameters @ 0x1405EDFF0
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407BC9D8 (KiStartDynamicProcessor.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *__fastcall KiInitializeProcessorStateInitializationParameters(void *a1)
{
  return memset_0(a1, 0, 0xE8uLL);
}
