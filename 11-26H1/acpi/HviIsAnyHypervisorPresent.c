/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x140044F90
 * Callers:
 *     HviIsHypervisorMicrosoftCompatible @ 0x140053798 (HviIsHypervisorMicrosoftCompatible.c)
 *     AcpiRootIsFeatureSupported @ 0x1400690A0 (AcpiRootIsFeatureSupported.c)
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
