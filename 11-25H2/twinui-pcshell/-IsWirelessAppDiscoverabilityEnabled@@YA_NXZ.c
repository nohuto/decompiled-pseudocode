/*
 * XREFs of ?IsWirelessAppDiscoverabilityEnabled@@YA_NXZ @ 0x1803DC4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char IsWirelessAppDiscoverabilityEnabled(void)
{
  return ShellComponentFilter::IsComponentEnabledInProfile(shellComponentFilter, &stru_180779C90);
}
