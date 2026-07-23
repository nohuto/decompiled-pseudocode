/*
 * XREFs of HalRegisterDynamicProcessor @ 0x140581400
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407BC9D8 (KiStartDynamicProcessor.c)
 * Callees:
 *     HalpInterruptRegisterDynamicProcessor @ 0x14057F044 (HalpInterruptRegisterDynamicProcessor.c)
 */

__int64 HalRegisterDynamicProcessor()
{
  return HalpInterruptRegisterDynamicProcessor();
}
