/*
 * XREFs of ?IsStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x1801B00E0
 * Callers:
 *     ?OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180248600 (-OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Inter.c)
 *     ?OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180248BD0 (-OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@.c)
 *     ?ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@@@Z @ 0x180249378 (-ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@.c)
 *     ?DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180461220 (-DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall XamlLauncherState::IsStartVisible(XamlLauncherState *this)
{
  char v1; // r8

  v1 = 0;
  if ( *((_DWORD *)this + 10) == 5
    || *((_DWORD *)this + 10) == 9
    || *((_DWORD *)this + 10) == 11
    || *((_DWORD *)this + 10) == 12
    || *((_DWORD *)this + 10) == 13
    || *((_DWORD *)this + 10) == 14
    || *((_DWORD *)this + 10) == 16
    || *((_DWORD *)this + 10) == 17
    || *((_DWORD *)this + 10) == 22 )
  {
    return 1;
  }
  return v1;
}
