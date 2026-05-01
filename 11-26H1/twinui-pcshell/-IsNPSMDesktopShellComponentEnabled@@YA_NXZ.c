/*
 * XREFs of ?IsNPSMDesktopShellComponentEnabled@@YA_NXZ @ 0x1803E5270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char IsNPSMDesktopShellComponentEnabled(void)
{
  return ShellComponentFilter::IsComponentEnabledInProfile(shellComponentFilter, &stru_1807A50D0);
}
