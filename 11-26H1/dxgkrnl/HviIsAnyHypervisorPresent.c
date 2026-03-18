/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x14006817C
 * Callers:
 *     HviIsHypervisorMicrosoftCompatible @ 0x140068140 (HviIsHypervisorMicrosoftCompatible.c)
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
