/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x140240CB8
 * Callers:
 *     HviGetHypervisorFeatures @ 0x140240C1C (HviGetHypervisorFeatures.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140240C5C (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
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
