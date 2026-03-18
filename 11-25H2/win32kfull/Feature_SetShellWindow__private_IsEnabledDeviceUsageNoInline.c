/*
 * XREFs of Feature_SetShellWindow__private_IsEnabledDeviceUsageNoInline @ 0x14027A1DC
 * Callers:
 *     NtUserSetShellWindowEx @ 0x14024E320 (NtUserSetShellWindowEx.c)
 *     ?xxxGenerateIAMKey@@YAXPEAUtagDESKTOP@@@Z @ 0x140278B68 (-xxxGenerateIAMKey@@YAXPEAUtagDESKTOP@@@Z.c)
 * Callees:
 *     Feature_SetShellWindow__private_IsEnabledFallback @ 0x14027A214 (Feature_SetShellWindow__private_IsEnabledFallback.c)
 */

__int64 Feature_SetShellWindow__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SetShellWindow__private_featureState & 0x10) != 0 )
    return Feature_SetShellWindow__private_featureState & 1;
  else
    return Feature_SetShellWindow__private_IsEnabledFallback(
             (unsigned int)Feature_SetShellWindow__private_featureState,
             3LL);
}
