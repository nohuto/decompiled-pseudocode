/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x140068140
 * Callers:
 *     SmmQueryRegistry @ 0x14041D188 (SmmQueryRegistry.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x14006817C (HviIsAnyHypervisorPresent.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  if ( (unsigned __int8)HviIsAnyHypervisorPresent() )
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
