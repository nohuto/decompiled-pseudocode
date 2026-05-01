/*
 * XREFs of ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x1800BB8A8
 * Callers:
 *     ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800BA420 (-RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@HotkeyHandler@@QEAAJPEAUIPriviledgedPositioner@@PEAUISnapAssistController@@PEAUIImmersiveMonitorManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUITabletModeController@@@Z @ 0x1800BB954 (-RuntimeClassInitialize@HotkeyHandler@@QEAAJPEAUIPriviledgedPositioner@@PEAUISnapAssistControlle.c)
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801529A0 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180250190 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?LoadShellLauncherConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1804DEA24 (-LoadShellLauncherConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguration.c)
 * Callees:
 *     ??R_lambda_c1655bd484619e6421d1036a1924c2d8_@@QEBA@AEA_N@Z @ 0x1801C7500 (--R_lambda_c1655bd484619e6421d1036a1924c2d8_@@QEBA@AEA_N@Z.c)
 */

char __fastcall IsShellLauncherEnabledForCurrentUser(__int64 a1)
{
  char v1; // bl
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v3 = 0;
  if ( (int)_lambda_c1655bd484619e6421d1036a1924c2d8_::operator()(a1, &v3) >= 0 )
    return v3 != 0;
  return v1;
}
