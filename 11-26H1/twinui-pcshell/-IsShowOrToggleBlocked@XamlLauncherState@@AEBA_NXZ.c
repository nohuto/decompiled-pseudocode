/*
 * XREFs of ?IsShowOrToggleBlocked@XamlLauncherState@@AEBA_NXZ @ 0x180461A34
 * Callers:
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180249110 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1804630F0 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x18029A08C (CortanaHelpers--AllowCortanaAboveLock.c)
 *     ?IsSessionIdle@XamlLauncherState@@AEBA_NXZ @ 0x1804619D8 (-IsSessionIdle@XamlLauncherState@@AEBA_NXZ.c)
 */

bool __fastcall XamlLauncherState::IsShowOrToggleBlocked(XamlLauncherState *this)
{
  char v1; // bl

  v1 = 0;
  if ( XamlLauncherState::IsSessionIdle(this) )
    return CortanaHelpers::AllowCortanaAboveLock() == 0;
  return v1;
}
