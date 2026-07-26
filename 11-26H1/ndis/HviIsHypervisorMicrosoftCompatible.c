/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x1400E88AC
 * Callers:
 *     ?ndisDoesSystemSupportSriov@@YAXXZ @ 0x1400DF8D4 (-ndisDoesSystemSupportSriov@@YAXXZ.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1400E886C (HviIsAnyHypervisorPresent.c)
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
