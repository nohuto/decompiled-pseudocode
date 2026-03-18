/*
 * XREFs of KiConfigureDynamicProcessor @ 0x140BF5830
 * Callers:
 *     KiInitDynamicProcessorIpi @ 0x1405F0970 (KiInitDynamicProcessorIpi.c)
 * Callees:
 *     KiEnableXSave @ 0x140BE9020 (KiEnableXSave.c)
 */

void __noreturn KiConfigureDynamicProcessor()
{
  KiEnableXSave(0LL);
}
