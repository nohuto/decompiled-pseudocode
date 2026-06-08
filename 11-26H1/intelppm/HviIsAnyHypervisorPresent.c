/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1400042D4
 * Callers:
 *     HviIsHypervisorMicrosoftCompatible @ 0x140005B58 (HviIsHypervisorMicrosoftCompatible.c)
 *     RegisterKernelPlatformStates @ 0x1400398E4 (RegisterKernelPlatformStates.c)
 *     RegisterKernelPepIdleStatesV2 @ 0x140041DEC (RegisterKernelPepIdleStatesV2.c)
 *     InitDriver @ 0x14004A03C (InitDriver.c)
 *     ProcLibGlobalInit @ 0x14004B8C0 (ProcLibGlobalInit.c)
 * Callees:
 *     <none>
 */

bool HviIsAnyHypervisorPresent()
{
  char v1; // r8

  _RAX = 1LL;
  v1 = 0;
  __asm { cpuid }
  if ( (int)_RCX < 0 )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    return (_DWORD)_RAX != 1986945624;
  }
  return v1;
}
