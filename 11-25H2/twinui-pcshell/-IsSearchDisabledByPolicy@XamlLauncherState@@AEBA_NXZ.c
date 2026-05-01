/*
 * XREFs of ?IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x180455028
 * Callers:
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180180C10 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 *     ?IsCortanaVisible@XamlLauncherState@@UEAA_NXZ @ 0x18018BDC0 (-IsCortanaVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?IsFindInStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x180253DA0 (-IsFindInStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?IsTaskbarSearchVisible@XamlLauncherState@@UEAA_NXZ @ 0x180253EA0 (-IsTaskbarSearchVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?OnCortanaLaunchResult@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x180254150 (-OnCortanaLaunchResult@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@In.c)
 *     ?OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1802544E0 (-OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@.c)
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180254A30 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180254FE0 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?BeginCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ @ 0x18045426C (-BeginCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ.c)
 *     ?Hide@XamlLauncherState@@UEAAJXZ @ 0x180454E60 (-Hide@XamlLauncherState@@UEAAJXZ.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1804568D0 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?IsFullscreenCXHRunning@@YA_NXZ @ 0x18017FD48 (-IsFullscreenCXHRunning@@YA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57784674@@@details@wil@@QEAA_NXZ @ 0x180450E70 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_57784674@@@details@wil@@QEAA_NXZ.c)
 */

char __fastcall XamlLauncherState::IsSearchDisabledByPolicy(XamlLauncherState *this)
{
  char v2; // bl

  v2 = 0;
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_57784674>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_57784674>::GetImpl'::`2'::impl)
    && *((_BYTE *)this + 1057)
    || *((_BYTE *)this + 1058)
    || *((_BYTE *)this + 1065)
    || IsFullscreenCXHRunning() )
  {
    return 1;
  }
  return v2;
}
