/*
 * XREFs of ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180190638
 * Callers:
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18004ECD4 (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 *     ?s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x18005D838 (-s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z.c)
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x1800A82B0 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ?LookUpPrintScreenSetting@CScreenClippingExperienceManager@@AEAAXXZ @ 0x1801C8040 (-LookUpPrintScreenSetting@CScreenClippingExperienceManager@@AEAAXXZ.c)
 *     ?RegisterHotkeys@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1801DDB74 (-RegisterHotkeys@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ?IsScreenSizeRequirementMet@DeviceCapabilitiesW@Internal@Windows@@YA_NW4Capability@123@@Z @ 0x180200FC0 (-IsScreenSizeRequirementMet@DeviceCapabilitiesW@Internal@Windows@@YA_NW4Capability@123@@Z.c)
 *     ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18024B8F8 (-OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     CLauncherTipContextMenu::RunMigrationTasksAsyncHelper$_ResumeCoro$1 @ 0x18027B660 (CLauncherTipContextMenu--RunMigrationTasksAsyncHelper$_ResumeCoro$1.c)
 *     _lambda_203a32cbd1766f67226f85b07542c037_::operator() @ 0x1803198A4 (_lambda_203a32cbd1766f67226f85b07542c037_--operator().c)
 *     GamingOverlayExperienceManager::GameBarFseWarmLaunch$_ResumeCoro$1 @ 0x180347020 (GamingOverlayExperienceManager--GameBarFseWarmLaunch$_ResumeCoro$1.c)
 *     ?IsLegacyNexusEnabled@NexusPolicyManager@@QEBA_NXZ @ 0x180361628 (-IsLegacyNexusEnabled@NexusPolicyManager@@QEBA_NXZ.c)
 *     ?ShouldNexusLongPressOpenTaskSwitcher@NexusPolicyManager@@QEBA_NXZ @ 0x180361958 (-ShouldNexusLongPressOpenTaskSwitcher@NexusPolicyManager@@QEBA_NXZ.c)
 *     ?UpdateNexusChordEnablement@NexusPolicyManager@@QEAAXXZ @ 0x180361AFC (-UpdateNexusChordEnablement@NexusPolicyManager@@QEAAXXZ.c)
 *     ?ComputeDesiredSize@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@PEBUtagRECT@@PEBW4DEVICE_SCALE_FACTOR@@@Z @ 0x180396A54 (-ComputeDesiredSize@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@PEBUtagRECT@@PEBW4DE.c)
 *     ?DetectAndMitigateSpartanSubdomainIssue@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1803B0A78 (-DetectAndMitigateSpartanSubdomainIssue@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?MitigateSpartanSubDomains@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1803B5B40 (-MitigateSpartanSubDomains@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?RefreshActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x1803BE970 (-RefreshActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJPEAUIShellExperienceView.c)
 *     ?GetSearchboxTaskbarMode@@YA?AW4SearchboxTaskbarMode@@XZ @ 0x1803C9570 (-GetSearchboxTaskbarMode@@YA-AW4SearchboxTaskbarMode@@XZ.c)
 *     ?CalculateFallbackSearchSize@@YA?AUSize@Foundation@Windows@winrt@@U1234@@Z @ 0x1803CF214 (-CalculateFallbackSearchSize@@YA-AUSize@Foundation@Windows@winrt@@U1234@@Z.c)
 *     ?OverlayTitlebarsInTabletMode@TitlebarOverlayHelpers@@YA_NXZ @ 0x180519C98 (-OverlayTitlebarsInTabletMode@TitlebarOverlayHelpers@@YA_NXZ.c)
 *     ?IsColorizationEnabled@GhostDivider@@AEAA_NXZ @ 0x18053C050 (-IsColorizationEnabled@GhostDivider@@AEAA_NXZ.c)
 *     ?IsTransparencyEnabled@GhostDivider@@AEAA_NXZ @ 0x18053C09C (-IsTransparencyEnabled@GhostDivider@@AEAA_NXZ.c)
 *     ?EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@VFlyoutView@@@std@@XZ @ 0x1805F4838 (-EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$share.c)
 *     ?subscribe_to_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1805F87B0 (-subscribe_to_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAU.c)
 *     ?EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z @ 0x1805FB90C (-EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z.c)
 *     ?subscribe_to_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180643870 (-subscribe_to_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIS.c)
 *     ?_MatchesPreviousFailure@CCriticalFailureHandler@@AEBA_NJPEBGIPEA_K1@Z @ 0x18067A808 (-_MatchesPreviousFailure@CCriticalFailureHandler@@AEBA_NJPEBGIPEA_K1@Z.c)
 *     ?SHRegGetDWORDWithDefault@@YAXPEAUHKEY__@@PEBG1KPEAK@Z @ 0x18067AD98 (-SHRegGetDWORDWithDefault@@YAXPEAUHKEY__@@PEBG1KPEAK@Z.c)
 *     ?IsServer@HideWallpaperIconsObject@@AEAA_NXZ @ 0x180683854 (-IsServer@HideWallpaperIconsObject@@AEAA_NXZ.c)
 *     ?v_GetPinStreamVersion@CTaskbandPin@@UEAAKXZ @ 0x18068A550 (-v_GetPinStreamVersion@CTaskbandPin@@UEAAKXZ.c)
 *     ?v_GetRemovedChangeCount@CTaskbandPin@@MEAAKXZ @ 0x18068A5B0 (-v_GetRemovedChangeCount@CTaskbandPin@@MEAAKXZ.c)
 *     ?_GetRemovedGlobalChangeCount@CPinnedList@@IEAAKXZ @ 0x180699A54 (-_GetRemovedGlobalChangeCount@CPinnedList@@IEAAKXZ.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall SHRegGetDWORD(HKEY a1, const unsigned __int16 *a2, const unsigned __int16 *a3, unsigned int *a4)
{
  LSTATUS result; // eax
  DWORD v5[6]; // [rsp+40h] [rbp-18h] BYREF

  v5[0] = 4;
  result = RegGetValueW(a1, a2, a3, 0x10u, 0LL, a4, v5);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
