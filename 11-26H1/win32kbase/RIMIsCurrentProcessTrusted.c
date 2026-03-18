/*
 * XREFs of RIMIsCurrentProcessTrusted @ 0x1400D7D30
 * Callers:
 *     RIMCreateDev @ 0x1400916DC (RIMCreateDev.c)
 *     rimCheckForRegistrationConflicts @ 0x1400D7DD4 (rimCheckForRegistrationConflicts.c)
 * Callees:
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400D7D60 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     CheckDwmProcessSecurityIdentifier @ 0x140119760 (CheckDwmProcessSecurityIdentifier.c)
 */

__int64 RIMIsCurrentProcessTrusted()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( (unsigned int)IsCurrentProcessDwm() || (int)CheckDwmProcessSecurityIdentifier() >= 0 )
    return 1;
  return v0;
}
