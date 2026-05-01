/*
 * XREFs of ??0hstring@param@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801BCD78
 * Callers:
 *     ?GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@UShellViewAnimationProperties@3UI@WindowsUdk@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18026D23C (-GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@W.c)
 *     ?GetJsonStorageFile@JsonGameMruManager@@AEBA?AUStorageFile@Storage@Windows@winrt@@XZ @ 0x180299DD0 (-GetJsonStorageFile@JsonGameMruManager@@AEBA-AUStorageFile@Storage@Windows@winrt@@XZ.c)
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@@Z @ 0x1803B4C7C (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x1805D3610 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 *     _lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_::operator() @ 0x1805E421C (_lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_--operator().c)
 *     ?GetTargetAppExtensionHelper@CopilotHotkeyManager@@AEAA?AUPropertyDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UPropertySet@Collections@Foundation@Windows@winrt@@@Z @ 0x18062641C (-GetTargetAppExtensionHelper@CopilotHotkeyManager@@AEAA-AUPropertyDetails@@V-$basic_string@GU-$c.c)
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@@Z @ 0x180626954 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV-$tip_test@.c)
 *     ?IsTargetAppPackageInstalled@CopilotHotkeyManager@@QEAA_NXZ @ 0x18063241C (-IsTargetAppPackageInstalled@CopilotHotkeyManager@@QEAA_NXZ.c)
 *     CopilotHotkeyManager::LaunchCustomUriAsync$_ResumeCoro$1 @ 0x180632670 (CopilotHotkeyManager--LaunchCustomUriAsync$_ResumeCoro$1.c)
 *     CopilotHotkeyManager::LaunchCustomUriForResultsAsync$_ResumeCoro$1 @ 0x1806328B0 (CopilotHotkeyManager--LaunchCustomUriForResultsAsync$_ResumeCoro$1.c)
 *     ?SchemaNameAreRegisteredProtocol@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z @ 0x1806344E8 (-SchemaNameAreRegisteredProtocol@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z.c)
 *     ??0UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180667714 (--0UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$basic_string@GU-$char_trai.c)
 *     ?Uri@UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEBA?AU0Foundation@56@XZ @ 0x1806678A8 (-Uri@UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEBA-AU0Foundation@56@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::param::hstring::hstring(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r10
  __int64 v3; // r8

  v2 = a2[2];
  if ( a2[3] > 7uLL )
    a2 = (_QWORD *)*a2;
  v3 = 0LL;
  if ( (_DWORD)v2 )
  {
    if ( *((_WORD *)a2 + (unsigned int)v2) )
      abort();
    *(_DWORD *)(a1 + 8) = 1;
    v3 = a1 + 8;
    *(_DWORD *)(a1 + 12) = v2;
    *(_QWORD *)(a1 + 24) = a2;
  }
  *(_QWORD *)a1 = v3;
  return a1;
}
