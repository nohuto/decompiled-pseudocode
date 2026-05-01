/*
 * XREFs of ?IsCortanaVisible@XamlLauncherState@@UEAA_NXZ @ 0x180181AF0
 * Callers:
 *     ?IsCortanaShowing@XamlLauncherState@@UEAAJPEAH@Z @ 0x180181A80 (-IsCortanaShowing@XamlLauncherState@@UEAAJPEAH@Z.c)
 *     ?DoesCortanaHaveForeground@XamlLauncherState@@UEAA_NXZ @ 0x180181AB0 (-DoesCortanaHaveForeground@XamlLauncherState@@UEAA_NXZ.c)
 *     ?OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180248600 (-OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Inter.c)
 * Callees:
 *     ?IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x18046197C (-IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 */

char __fastcall XamlLauncherState::IsCortanaVisible(XamlLauncherState *this)
{
  bool IsSearchDisabledByPolicy; // al
  char v3; // dl
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  bool v8; // zf
  int v9; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx

  IsSearchDisabledByPolicy = XamlLauncherState::IsSearchDisabledByPolicy((XamlLauncherState *)((char *)this - 24));
  v3 = 0;
  if ( !IsSearchDisabledByPolicy )
  {
    v4 = *((_DWORD *)this + 10);
    if ( v4 <= 10 )
    {
      if ( v4 != 10 )
      {
        v11 = v4 - 4;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 2;
            if ( v13 )
            {
              v9 = v13 - 1;
              v8 = v9 == 0;
              goto LABEL_7;
            }
          }
        }
      }
    }
    else
    {
      v5 = v4 - 12;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            v9 = v7 - 7;
            v8 = v9 == 0;
LABEL_7:
            if ( !v8 && v9 != 1 )
              return v3;
          }
        }
      }
    }
    return 1;
  }
  return 0;
}
