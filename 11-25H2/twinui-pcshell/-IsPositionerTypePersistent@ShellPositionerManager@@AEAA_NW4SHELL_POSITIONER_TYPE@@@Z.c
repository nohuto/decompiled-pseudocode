/*
 * XREFs of ?IsPositionerTypePersistent@ShellPositionerManager@@AEAA_NW4SHELL_POSITIONER_TYPE@@@Z @ 0x18012D378
 * Callers:
 *     ?UpdatePositionerPriorityForActivation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@@Z @ 0x18012D1C8 (-UpdatePositionerPriorityForActivation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority.c)
 *     ?UpdatePositionerPriorityForFrameworkViewType@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1804DAAA8 (-UpdatePositionerPriorityForFrameworkViewType@ShellPositionerManager@@AEAAJPEAUIShellPositionerP.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802ED918 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 */

bool __fastcall ShellPositionerManager::IsPositionerTypePersistent(__int64 a1, unsigned int a2)
{
  bool v3; // cf
  bool v4; // zf

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl) )
  {
    v3 = a2 < 2;
    v4 = a2 == 2;
  }
  else
  {
    v3 = a2 == 0;
    v4 = a2 == 1;
  }
  return v3 || v4;
}
