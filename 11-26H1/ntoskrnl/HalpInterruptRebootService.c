/*
 * XREFs of HalpInterruptRebootService @ 0x140596BB0
 * Callers:
 *     HalpNmiReboot @ 0x140596590 (HalpNmiReboot.c)
 *     HalpPreprocessNmi @ 0x1405966B0 (HalpPreprocessNmi.c)
 * Callees:
 *     HalpInterruptResetThisProcessor @ 0x14057F100 (HalpInterruptResetThisProcessor.c)
 */

void __noreturn HalpInterruptRebootService()
{
  if ( __readmsr(0xC0000101) < 0xFFFF800000000000uLL )
    __writemsr(0xC0000101, __readmsr(0xC0000102));
  HalpInterruptResetThisProcessor();
}
