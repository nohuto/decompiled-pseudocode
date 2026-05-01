/*
 * XREFs of ?IsDashboardManagerEnabled@@YA_NXZ @ 0x1803DC350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char IsDashboardManagerEnabled(void)
{
  return ShellComponentFilter::IsComponentEnabledInProfile(shellComponentFilter, &stru_180779A20);
}
