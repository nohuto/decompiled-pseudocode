/*
 * XREFs of HalpInterruptRebootService @ 0x140594430
 * Callers:
 *     HalpNmiReboot @ 0x140593E10 (HalpNmiReboot.c)
 *     HalpPreprocessNmi @ 0x140593F30 (HalpPreprocessNmi.c)
 * Callees:
 *     HalpInterruptResetThisProcessor @ 0x14057CBE0 (HalpInterruptResetThisProcessor.c)
 */

void __noreturn HalpInterruptRebootService()
{
  if ( __readmsr(0xC0000101) < 0xFFFF800000000000uLL )
    __writemsr(0xC0000101, __readmsr(0xC0000102));
  HalpInterruptResetThisProcessor();
}
