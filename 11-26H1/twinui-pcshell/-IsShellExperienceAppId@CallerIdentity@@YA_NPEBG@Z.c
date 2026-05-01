/*
 * XREFs of ?IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z @ 0x18002E6B4
 * Callers:
 *     ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x18002E834 (-IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV-$shared_ptr@UAppUsageData.c)
 *     ?LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18002F490 (-LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Wind.c)
 *     ?_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ @ 0x1801FB0D8 (-_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ.c)
 *     ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x180679928 (-EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ.c)
 *     ?ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity@@YAJPEBG@Z @ 0x18067A12C (-ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity.c)
 * Callees:
 *     <none>
 */

char __fastcall CallerIdentity::IsShellExperienceAppId(LPCWCH lpString2, const unsigned __int16 *a2)
{
  char result; // al
  __int64 i; // rbx
  LPCWCH lpString1[11]; // [rsp+30h] [rbp-58h]

  lpString1[0] = L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App";
  lpString1[1] = L"Microsoft.Windows.StartMenuExperienceHost_cw5n1h2txyewy!App";
  lpString1[2] = L"Microsoft.Windows.StartMenuExperienceHost_cw5n1h2txyewy!FullTrustApp";
  lpString1[3] = L"5b04b775-356b-4aa0-aaf8-6491ffea5602_6f5w9sgpe6vgt!WP";
  lpString1[4] = L"StartAppVS_xbqbv2ksdy6ng!App";
  lpString1[5] = L"Microsoft.Windows.Cortana_cw5n1h2txyewy!ppleae38af2e007f4358a809ac99a64a67c1";
  lpString1[6] = L"Microsoft.Cortana_8wekyb3d8bbwe!ppleae38af2e007f4358a809ac99a64a67c1";
  lpString1[7] = L"MicrosoftWindows.Client.CBS_cw5n1h2txyewy!CortanaUIFullTrustApp";
  lpString1[8] = L"MicrosoftWindows.Search_cw5n1h2txyewy!CortanaUIFullTrustApp";
  lpString1[9] = L"HoloShell_cw5n1h2txyewy!HoloShell";
  result = 0;
  for ( i = 0LL; (unsigned int)i < 0xA; i = (unsigned int)(i + 1) )
  {
    if ( CompareStringOrdinal(lpString1[i], -1, lpString2, -1, 1) == 2 )
      return 1;
    result = 0;
  }
  return result;
}
