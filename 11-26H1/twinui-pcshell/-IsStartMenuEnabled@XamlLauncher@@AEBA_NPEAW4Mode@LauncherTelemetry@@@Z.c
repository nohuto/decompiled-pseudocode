/*
 * XREFs of ?IsStartMenuEnabled@XamlLauncher@@AEBA_NPEAW4Mode@LauncherTelemetry@@@Z @ 0x1801CEAA4
 * Callers:
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x1801CE8E0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 *     ?InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x180243790 (-InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experi.c)
 *     ?Show@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z @ 0x180245690 (-Show@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Prelaunch@XamlLauncher@@UEAAJXZ @ 0x18045C810 (-Prelaunch@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?IsStartMenuSuppressedByShellConfigRegistry@@YA_NXZ @ 0x18045B710 (-IsStartMenuSuppressedByShellConfigRegistry@@YA_NXZ.c)
 */

bool __fastcall XamlLauncher::IsStartMenuEnabled(XamlLauncher *this, enum LauncherTelemetry::Mode *a2)
{
  bool result; // al
  char v5; // cl

  if ( IsStartMenuSuppressedByShellConfigRegistry() )
  {
    if ( a2 )
      *(_DWORD *)a2 = 25;
    return 0;
  }
  else
  {
    v5 = *((_BYTE *)this + 352);
    if ( v5 || *((_BYTE *)this + 354) || (result = 1, *((_BYTE *)this + 355)) )
      result = 0;
    if ( a2 )
    {
      if ( v5 )
      {
        *(_DWORD *)a2 = 3;
      }
      else if ( *((_BYTE *)this + 354) )
      {
        *(_DWORD *)a2 = 21;
      }
      else
      {
        *(_DWORD *)a2 = *((_BYTE *)this + 355) != 0 ? 0x18 : 0;
      }
    }
  }
  return result;
}
