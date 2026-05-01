/*
 * XREFs of ?IsUserOOBEOrCredentialReset@@YA_NXZ @ 0x1800F5784
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180244780 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x1803C6000 (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?IsUserOOBE@@YA_NXZ @ 0x1800F5B04 (-IsUserOOBE@@YA_NXZ.c)
 *     ?IsCredentialReset@@YA_NXZ @ 0x1802A8FB4 (-IsCredentialReset@@YA_NXZ.c)
 */

char IsUserOOBEOrCredentialReset(void)
{
  char v0; // bl

  v0 = 0;
  if ( IsUserOOBE() || IsCredentialReset() )
    return 1;
  return v0;
}
