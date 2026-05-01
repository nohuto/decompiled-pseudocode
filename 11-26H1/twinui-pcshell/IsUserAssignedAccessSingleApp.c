/*
 * XREFs of IsUserAssignedAccessSingleApp @ 0x1800F63DC
 * Callers:
 *     ?UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F50B8 (-UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180244780 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18029F1D8 (-UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?OnTargetedMessage@SearchAppDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1803CA87C (-OnTargetedMessage@SearchAppDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z @ 0x1803D4330 (-OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z.c)
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1803D46EC (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     GetSidStringFromToken @ 0x1800F6470 (GetSidStringFromToken.c)
 *     GetAssignedAccessTypeForUser_0 @ 0x1800F6824 (GetAssignedAccessTypeForUser_0.c)
 */

__int64 __fastcall IsUserAssignedAccessSingleApp(void *a1)
{
  HLOCAL hMem[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(hMem, 0, 24);
  if ( (int)GetSidStringFromToken(a1, (LPWSTR *)hMem) < 0 )
  {
    if ( hMem[0] )
      LocalFree(hMem[0]);
    return 0LL;
  }
  else
  {
    GetAssignedAccessTypeForUser_0((unsigned __int16 *)hMem[0]);
    if ( hMem[0] )
      LocalFree(hMem[0]);
    return 0LL;
  }
}
