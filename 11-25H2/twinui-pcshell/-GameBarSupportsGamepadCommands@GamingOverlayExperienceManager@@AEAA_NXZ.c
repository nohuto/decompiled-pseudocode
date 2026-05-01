/*
 * XREFs of ?GameBarSupportsGamepadCommands@GamingOverlayExperienceManager@@AEAA_NXZ @ 0x1803446E8
 * Callers:
 *     ?OnMessage@GamingOverlayExperienceManager@@UEAAJI_K_J@Z @ 0x18034B060 (-OnMessage@GamingOverlayExperienceManager@@UEAAJI_K_J@Z.c)
 *     GamingOverlayExperienceManager::SendGamepadCommand$_ResumeCoro$1 @ 0x18034EAD0 (GamingOverlayExperienceManager--SendGamepadCommand$_ResumeCoro$1.c)
 * Callees:
 *     ?QueryGameBarMajorMinorVersion@GamingOverlayExperienceManager@@AEAA?AU?$pair@GG@std@@XZ @ 0x18034D10C (-QueryGameBarMajorMinorVersion@GamingOverlayExperienceManager@@AEAA-AU-$pair@GG@std@@XZ.c)
 */

char __fastcall GamingOverlayExperienceManager::GameBarSupportsGamepadCommands(GamingOverlayExperienceManager *this)
{
  char v1; // bl
  unsigned __int16 v4; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int16 v5; // [rsp+32h] [rbp+Ah]

  v1 = 0;
  if ( *((_BYTE *)this + 961) )
    return 1;
  GamingOverlayExperienceManager::QueryGameBarMajorMinorVersion(this, &v4);
  if ( v4 > 5u || v4 == 5 && v5 >= 0x258u )
  {
    v1 = 1;
    *((_BYTE *)this + 961) = 1;
  }
  return v1;
}
