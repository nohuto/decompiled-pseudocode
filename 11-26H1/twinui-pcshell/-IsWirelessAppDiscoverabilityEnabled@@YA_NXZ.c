/*
 * XREFs of ?IsWirelessAppDiscoverabilityEnabled@@YA_NXZ @ 0x1803E5330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char IsWirelessAppDiscoverabilityEnabled(void)
{
  return ShellComponentFilter::IsComponentEnabledInProfile(shellComponentFilter, &stru_1807A53B0);
}
