/*
 * XREFs of HalRegisterDynamicProcessor @ 0x14057EEE0
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407B9978 (KiStartDynamicProcessor.c)
 * Callees:
 *     HalpInterruptRegisterDynamicProcessor @ 0x14057CB18 (HalpInterruptRegisterDynamicProcessor.c)
 */

__int64 HalRegisterDynamicProcessor()
{
  return HalpInterruptRegisterDynamicProcessor();
}
