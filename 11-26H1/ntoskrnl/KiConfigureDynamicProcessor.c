/*
 * XREFs of KiConfigureDynamicProcessor @ 0x140BFB830
 * Callers:
 *     KiInitDynamicProcessorIpi @ 0x1405F32E0 (KiInitDynamicProcessorIpi.c)
 * Callees:
 *     KiEnableXSave @ 0x140BEF020 (KiEnableXSave.c)
 */

void __noreturn KiConfigureDynamicProcessor()
{
  KiEnableXSave(0LL);
}
