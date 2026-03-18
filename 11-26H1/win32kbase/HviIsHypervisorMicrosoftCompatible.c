/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x14024A6FC
 * Callers:
 *     HviGetHypervisorFeatures @ 0x14024A67C (HviGetHypervisorFeatures.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x14024A6BC (HviIsAnyHypervisorPresent.c)
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
