/*
 * XREFs of ?IsTaskGroupsComponentEnabled@@YA_NXZ @ 0x1803DC470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char IsTaskGroupsComponentEnabled(void)
{
  return ShellComponentFilter::IsComponentEnabledInProfile(shellComponentFilter, &stru_180779AF0);
}
