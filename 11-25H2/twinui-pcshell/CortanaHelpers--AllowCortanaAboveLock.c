/*
 * XREFs of CortanaHelpers::AllowCortanaAboveLock @ 0x1802A1E48
 * Callers:
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180254A30 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@@@Z @ 0x180254C9C (-ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@.c)
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803CB63C (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 *     ?IsShowOrToggleBlocked@XamlLauncherState@@AEBA_NXZ @ 0x1804550E0 (-IsShowOrToggleBlocked@XamlLauncherState@@AEBA_NXZ.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1804568D0 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x18014B510 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 */

char CortanaHelpers::AllowCortanaAboveLock()
{
  int v0; // eax
  unsigned int v1; // r9d
  char v2; // bl
  int PolicyInt; // eax
  int BOOLWithREGSAM; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v7; // [rsp+40h] [rbp+8h] BYREF

  v0 = SHWindowsPolicy(&POLID_AllowCortanaAboveLock);
  v2 = 0;
  if ( v0 == -1 )
  {
    v7 = 0;
    PolicyInt = PolicyManager_GetPolicyInt(L"AboveLock", L"AllowCortanaAboveLock", &v7);
    if ( PolicyInt < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1B,
        (int)"desktop\\internal\\shell\\inc\\private\\CortanaHelpers.h",
        (const char *)(unsigned int)PolicyInt);
      return 0;
    }
    if ( !v7 )
      return 0;
  }
  else if ( !v0 )
  {
    return 0;
  }
  v7 = 0;
  BOOLWithREGSAM = SHRegGetBOOLWithREGSAM(
                     HKEY_CURRENT_USER,
                     L"Software\\Microsoft\\Speech_OneCore\\Preferences",
                     L"VoiceActivationEnableAboveLockscreen",
                     v1,
                     &v7);
  if ( BOOLWithREGSAM >= 0 )
  {
    if ( v7 )
      return 1;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2B,
      (int)"desktop\\internal\\shell\\inc\\private\\CortanaHelpers.h",
      (const char *)(unsigned int)BOOLWithREGSAM);
  }
  return v2;
}
