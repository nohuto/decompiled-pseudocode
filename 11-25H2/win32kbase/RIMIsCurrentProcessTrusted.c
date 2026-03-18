/*
 * XREFs of RIMIsCurrentProcessTrusted @ 0x1400CD380
 * Callers:
 *     rimCheckForRegistrationConflicts @ 0x1400CD204 (rimCheckForRegistrationConflicts.c)
 *     RIMCreateDev @ 0x1401D4A5C (RIMCreateDev.c)
 * Callees:
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CD3B0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     CheckDwmProcessSecurityIdentifier @ 0x140154050 (CheckDwmProcessSecurityIdentifier.c)
 */

__int64 RIMIsCurrentProcessTrusted()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( (unsigned int)IsCurrentProcessDwm() || (int)CheckDwmProcessSecurityIdentifier() >= 0 )
    return 1;
  return v0;
}
