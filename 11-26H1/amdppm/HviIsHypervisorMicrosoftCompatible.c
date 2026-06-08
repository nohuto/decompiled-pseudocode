/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x14000E4F4
 * Callers:
 *     HviGetEnlightenmentInformation @ 0x14000E434 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x14000E474 (HviGetHypervisorFeatures.c)
 *     ProcLibGlobalInit @ 0x140045428 (ProcLibGlobalInit.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x14000E4B4 (HviIsAnyHypervisorPresent.c)
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
