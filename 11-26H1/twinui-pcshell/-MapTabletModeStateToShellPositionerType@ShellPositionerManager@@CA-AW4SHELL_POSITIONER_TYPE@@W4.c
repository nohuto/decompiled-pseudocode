/*
 * XREFs of ?MapTabletModeStateToShellPositionerType@ShellPositionerManager@@CA?AW4SHELL_POSITIONER_TYPE@@W4_TABLETMODESTATE@@H@Z @ 0x1804EB3D0
 * Callers:
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x1800614C8 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?OnGamingPostureChanged@ShellPositionerManager@@AEAAJH@Z @ 0x1804EB418 (-OnGamingPostureChanged@ShellPositionerManager@@AEAAJH@Z.c)
 *     ?TabletModeChanged@ShellPositionerManager@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x1804ECEF0 (-TabletModeChanged@ShellPositionerManager@@UEAAJW4_TABLETMODESTATE@@@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802E7978 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 */

__int64 __fastcall ShellPositionerManager::MapTabletModeStateToShellPositionerType(int a1, int a2)
{
  char IsEnabled; // al
  unsigned int v5; // r8d

  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl);
  v5 = 0;
  if ( IsEnabled && a2 )
    return 2LL;
  LOBYTE(v5) = a1 == 1;
  return v5;
}
