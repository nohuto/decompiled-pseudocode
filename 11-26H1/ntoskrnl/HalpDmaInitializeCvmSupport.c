/*
 * XREFs of HalpDmaInitializeCvmSupport @ 0x140CB0B80
 * Callers:
 *     HalpDmaInit @ 0x140CB0700 (HalpDmaInit.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1406DC944 (HviIsHypervisorMicrosoftCompatible.c)
 *     HalpDmaCvmQueryRegistryKeys @ 0x140CB0590 (HalpDmaCvmQueryRegistryKeys.c)
 */

__int64 HalpDmaInitializeCvmSupport()
{
  __int64 v20; // rax

  HalpDmaCvmQueryRegistryKeys();
  if ( HviIsHypervisorMicrosoftCompatible() )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    if ( (__PAIR64__(_RBX, _RAX) & 0x40000000000000LL) != 0 )
    {
      _RAX = 1073741836LL;
      __asm { cpuid }
      if ( (unsigned int)(_RBX & 0xF) - 2 <= 1 )
      {
        HalpDmaCvmConfiguration = 1;
        if ( !HviIsHypervisorMicrosoftCompatible() )
          goto LABEL_8;
        _RAX = 1073741827LL;
        __asm { cpuid }
        if ( (__PAIR64__(_RBX, _RAX) & 0x40000000000000LL) == 0 )
          goto LABEL_8;
        _RAX = 1073741836LL;
        __asm { cpuid }
        if ( (_RBX & 0x20) != 0 )
          v20 = 1LL << (((unsigned int)_RBX >> 6) & 0x3F);
        else
LABEL_8:
          v20 = 0LL;
        qword_140FBA988 = v20;
      }
    }
  }
  if ( !HalpDmaCvmConfiguration && byte_140FBA981 )
  {
    HalpDmaCvmConfiguration = 1;
    qword_140FBA988 = 0LL;
  }
  return 0LL;
}
