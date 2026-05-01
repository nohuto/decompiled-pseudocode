/*
 * XREFs of ?IsDashboardManagerEnabled@@YA_NXZ @ 0x1803E51D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char IsDashboardManagerEnabled(void)
{
  return ShellComponentFilter::IsComponentEnabledInProfile(shellComponentFilter, &stru_1807A5150);
}
