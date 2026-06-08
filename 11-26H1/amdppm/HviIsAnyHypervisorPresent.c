/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x14000E4B4
 * Callers:
 *     HviIsHypervisorMicrosoftCompatible @ 0x14000E4F4 (HviIsHypervisorMicrosoftCompatible.c)
 *     RegisterKernelPepIdleStatesV2 @ 0x1400360D8 (RegisterKernelPepIdleStatesV2.c)
 *     RegisterKernelPlatformStates @ 0x140036AE4 (RegisterKernelPlatformStates.c)
 *     ProcLibGlobalInit @ 0x140045428 (ProcLibGlobalInit.c)
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
