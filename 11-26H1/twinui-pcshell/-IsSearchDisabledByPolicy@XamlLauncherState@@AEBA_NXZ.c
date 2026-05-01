/*
 * XREFs of ?IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x18046197C
 * Callers:
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180076AC0 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 *     ?IsCortanaVisible@XamlLauncherState@@UEAA_NXZ @ 0x180181AF0 (-IsCortanaVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?IsFindInStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x180248470 (-IsFindInStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?IsTaskbarSearchVisible@XamlLauncherState@@UEAA_NXZ @ 0x180248570 (-IsTaskbarSearchVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?OnCortanaLaunchResult@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x180248830 (-OnCortanaLaunchResult@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@In.c)
 *     ?OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180248BD0 (-OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@.c)
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180249110 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180249650 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?BeginCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ @ 0x1804610AC (-BeginCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ.c)
 *     ?Hide@XamlLauncherState@@UEAAJXZ @ 0x180461780 (-Hide@XamlLauncherState@@UEAAJXZ.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1804630F0 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?IsFullscreenCXHRunning@@YA_NXZ @ 0x180172D1C (-IsFullscreenCXHRunning@@YA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57784674@@@details@wil@@QEAA_NXZ @ 0x18045D9C8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_57784674@@@details@wil@@QEAA_NXZ.c)
 */

char __fastcall XamlLauncherState::IsSearchDisabledByPolicy(XamlLauncherState *this)
{
  char v2; // bl

  v2 = 0;
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_57784674>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_57784674>::GetImpl'::`2'::impl)
    && *((_BYTE *)this + 1057)
    || *((_BYTE *)this + 1058)
    || *((_BYTE *)this + 1064)
    || IsFullscreenCXHRunning() )
  {
    return 1;
  }
  return v2;
}
