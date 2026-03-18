/*
 * XREFs of KiInitializeProcessorStateInitializationParameters @ 0x1405EB680
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407B9978 (KiStartDynamicProcessor.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void *__fastcall KiInitializeProcessorStateInitializationParameters(void *a1)
{
  return memset_0(a1, 0, 0xE8uLL);
}
