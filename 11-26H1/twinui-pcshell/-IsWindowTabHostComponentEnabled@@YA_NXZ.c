/*
 * XREFs of ?IsWindowTabHostComponentEnabled@@YA_NXZ @ 0x1803E52F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWindowTabHostEnabledOnSKU@@YA_NXZ @ 0x18014B1A4 (-IsWindowTabHostEnabledOnSKU@@YA_NXZ.c)
 *     ?IsComponentEnabledInProfile@ShellComponentFilter@@QEAA_NAEBU_GUID@@@Z @ 0x1801B85A8 (-IsComponentEnabledInProfile@ShellComponentFilter@@QEAA_NAEBU_GUID@@@Z.c)
 */

bool IsWindowTabHostComponentEnabled(void)
{
  char v0; // bl

  v0 = 0;
  if ( IsWindowTabHostEnabledOnSKU() )
    return ShellComponentFilter::IsComponentEnabledInProfile(shellComponentFilter, &stru_1807A52A0) != 0;
  return v0;
}
