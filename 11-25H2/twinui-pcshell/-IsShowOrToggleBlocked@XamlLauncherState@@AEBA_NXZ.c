/*
 * XREFs of ?IsShowOrToggleBlocked@XamlLauncherState@@AEBA_NXZ @ 0x1804550E0
 * Callers:
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180254A30 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1804568D0 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x1802A1E48 (CortanaHelpers--AllowCortanaAboveLock.c)
 *     ?IsSessionIdle@XamlLauncherState@@AEBA_NXZ @ 0x180455084 (-IsSessionIdle@XamlLauncherState@@AEBA_NXZ.c)
 */

bool __fastcall XamlLauncherState::IsShowOrToggleBlocked(XamlLauncherState *this)
{
  char v1; // bl

  v1 = 0;
  if ( XamlLauncherState::IsSessionIdle(this) )
    return CortanaHelpers::AllowCortanaAboveLock() == 0;
  return v1;
}
