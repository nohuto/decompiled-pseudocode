/*
 * XREFs of ?IsAnyOOBE@@YA_NXZ @ 0x1800F5AB0
 * Callers:
 *     ?UpdateOobeRunningState@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F57B0 (-UpdateOobeRunningState@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18024CCAC (-SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18029F1D8 (-UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?CanShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1806394AC (-CanShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ?IsHolographicOOBE@@YA_NXZ @ 0x1800F40F0 (-IsHolographicOOBE@@YA_NXZ.c)
 *     ?IsUserOOBE@@YA_NXZ @ 0x1800F5B04 (-IsUserOOBE@@YA_NXZ.c)
 */

char IsAnyOOBE(void)
{
  char v0; // bl
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v2 = 0;
  if ( IsUserOOBE() || v2 || (unsigned int)OOBEComplete(&v2) && !v2 || IsHolographicOOBE() )
    return 1;
  return v0;
}
