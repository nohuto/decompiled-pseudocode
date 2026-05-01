/*
 * XREFs of IsUserAssignedAccessSingleApp @ 0x1800EC120
 * Callers:
 *     ?UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800EB3EC (-UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180250190 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802A5C3C (-UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?OnTargetedMessage@SearchAppDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1803C16EC (-OnTargetedMessage@SearchAppDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z @ 0x1803CA8B0 (-OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z.c)
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1803CAC6C (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     GetSidStringFromToken @ 0x1800EC1A8 (GetSidStringFromToken.c)
 *     GetAssignedAccessTypeForUser_0 @ 0x1800EC71C (GetAssignedAccessTypeForUser_0.c)
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
