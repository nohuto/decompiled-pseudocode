/*
 * XREFs of ?IsNPSMDesktopShellComponentEnabled@@YA_NXZ @ 0x1803DC3F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char IsNPSMDesktopShellComponentEnabled(void)
{
  return ShellComponentFilter::IsComponentEnabledInProfile(shellComponentFilter, &stru_1807799C0);
}
