/*
 * XREFs of ?IsLegacyNexusEnabled@NexusPolicyManager@@QEBA_NXZ @ 0x180361628
 * Callers:
 *     GamingOverlayExperienceManager::GameBarFseWarmLaunch$_ResumeCoro$1 @ 0x180347020 (GamingOverlayExperienceManager--GameBarFseWarmLaunch$_ResumeCoro$1.c)
 *     GamingOverlayExperienceManager::SendGamepadCommand$_ResumeCoro$1 @ 0x180353120 (GamingOverlayExperienceManager--SendGamepadCommand$_ResumeCoro$1.c)
 *     ?UpdateNexusShellExclusiveValue@NexusPolicyManager@@AEAAX_N@Z @ 0x180361BD0 (-UpdateNexusShellExclusiveValue@NexusPolicyManager@@AEAAX_N@Z.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180190638 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
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
