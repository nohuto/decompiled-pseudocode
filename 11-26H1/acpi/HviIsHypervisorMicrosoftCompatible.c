/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x140053798
 * Callers:
 *     HviGetHypervisorFeatures @ 0x140053758 (HviGetHypervisorFeatures.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140044F90 (HviIsAnyHypervisorPresent.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  if ( HviIsAnyHypervisorPresent() )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
  }
  else
  {
    LODWORD(_RAX) = 0;
  }
  return (_DWORD)_RAX == 824407624;
}
