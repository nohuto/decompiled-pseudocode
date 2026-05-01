/*
 * XREFs of ?IsLegacyNexusEnabled@NexusPolicyManager@@QEBA_NXZ @ 0x18035ACB8
 * Callers:
 *     GamingOverlayExperienceManager::GameBarFseWarmLaunch$_ResumeCoro$1 @ 0x1803443B0 (GamingOverlayExperienceManager--GameBarFseWarmLaunch$_ResumeCoro$1.c)
 *     GamingOverlayExperienceManager::SendGamepadCommand$_ResumeCoro$1 @ 0x18034EAD0 (GamingOverlayExperienceManager--SendGamepadCommand$_ResumeCoro$1.c)
 *     ?UpdateNexusShellExclusiveValue@NexusPolicyManager@@AEAAX_N@Z @ 0x18035B1C8 (-UpdateNexusShellExclusiveValue@NexusPolicyManager@@AEAAX_N@Z.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180198438 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

char __fastcall NexusPolicyManager::IsLegacyNexusEnabled(NexusPolicyManager *this)
{
  unsigned int v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  if ( SHRegGetDWORD(HKEY_CURRENT_USER, L"Software\\Microsoft\\GameBar", L"LegacyGamepadXboxGuideButtonEnabled", &v3) >= 0
    && v3 )
  {
    return 1;
  }
  else
  {
    return *((_BYTE *)this + 24);
  }
}
