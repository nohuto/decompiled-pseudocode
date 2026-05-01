/*
 * XREFs of ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEB_W1PEAK@Z @ 0x1806A27FC
 * Callers:
 *     ?CreateGamingTaskViewControl@XamlGamingTaskViewHost@@AEAAPE$AAVGamingTaskView@Switcher@Experiences@ComposableShell@WindowsInternal@@XZ @ 0x1806A106C (-CreateGamingTaskViewControl@XamlGamingTaskViewHost@@AEAAPE$AAVGamingTaskView@Switcher@Experienc.c)
 *     ?GamingAccessibilityNexusChordPressed@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1806B48D0 (-GamingAccessibilityNexusChordPressed@-QIXamlMultitaskingViewController@@XamlAllUpViewController.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall SHRegGetDWORD(HKEY a1, const wchar_t *a2, const wchar_t *a3, unsigned int *a4)
{
  LSTATUS result; // eax
  DWORD v5; // [rsp+60h] [rbp+18h] BYREF
  int v6; // [rsp+64h] [rbp+1Ch]

  v6 = HIDWORD(a3);
  v5 = 4;
  result = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\GameBar",
             L"TaskSwitcherNexusInjectionEnabled",
             0x10u,
             0LL,
             a4,
             &v5);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
