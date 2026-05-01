/*
 * XREFs of ?IsUserOOBEOrCredentialReset@@YA_NXZ @ 0x1800EB774
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180250190 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x1803BCF74 (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?IsUserOOBE@@YA_NXZ @ 0x1800EBAF4 (-IsUserOOBE@@YA_NXZ.c)
 *     ?IsCredentialReset@@YA_NXZ @ 0x1802B0E20 (-IsCredentialReset@@YA_NXZ.c)
 */

char IsUserOOBEOrCredentialReset(void)
{
  char v0; // bl

  v0 = 0;
  if ( IsUserOOBE() || IsCredentialReset() )
    return 1;
  return v0;
}
