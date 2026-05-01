/*
 * XREFs of ?IsWindowTabHostComponentEnabled@@YA_NXZ @ 0x1803DC490
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWindowTabHostEnabledOnSKU@@YA_NXZ @ 0x18015915C (-IsWindowTabHostEnabledOnSKU@@YA_NXZ.c)
 *     ?IsComponentEnabledInProfile@ShellComponentFilter@@QEAA_NAEBU_GUID@@@Z @ 0x180232DDC (-IsComponentEnabledInProfile@ShellComponentFilter@@QEAA_NAEBU_GUID@@@Z.c)
 */

bool IsWindowTabHostComponentEnabled(void)
{
  char v0; // bl

  v0 = 0;
  if ( IsWindowTabHostEnabledOnSKU() )
    return ShellComponentFilter::IsComponentEnabledInProfile(shellComponentFilter, &stru_180779B80) != 0;
  return v0;
}
