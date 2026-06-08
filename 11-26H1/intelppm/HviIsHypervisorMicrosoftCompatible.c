/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x140005B58
 * Callers:
 *     HviGetHypervisorFeatures @ 0x140005B18 (HviGetHypervisorFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x140010184 (HviGetEnlightenmentInformation.c)
 *     ProcLibGlobalInit @ 0x14004B8C0 (ProcLibGlobalInit.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1400042D4 (HviIsAnyHypervisorPresent.c)
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
