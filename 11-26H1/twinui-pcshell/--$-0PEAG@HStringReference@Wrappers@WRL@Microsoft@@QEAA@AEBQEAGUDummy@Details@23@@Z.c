/*
 * XREFs of ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x180117530
 * Callers:
 *     ?LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1800CB114 (-LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopTabletModePolicy@@@Z @ 0x180109230 (-RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesk.c)
 *     ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18011285C (-GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collect.c)
 *     ?LoadAssignedAccessConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1801F8984 (-LoadAssignedAccessConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguratio.c)
 *     ?SubscribeToServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180251D10 (-SubscribeToServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?GetCurrentActiveQuietHoursProfileAllowedApps@GamingOverlayExperienceManager@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z @ 0x180348200 (-GetCurrentActiveQuietHoursProfileAllowedApps@GamingOverlayExperienceManager@@UEAAJPEAPEAU-$IVec.c)
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x1803FCC40 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 *     ?GetSecondaryTileLaunchArguments@TaskbarTelemetryHelper@@YAJPEBGPEAPEAG11@Z @ 0x180691A7C (-GetSecondaryTileLaunchArguments@TaskbarTelemetryHelper@@YAJPEBGPEAPEAG11@Z.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

HSTRING_HEADER *__fastcall Microsoft::WRL::Wrappers::HStringReference::HStringReference(
        HSTRING_HEADER *a1,
        const WCHAR **a2,
        unsigned int a3)
{
  HSTRING *v3; // r9
  const WCHAR *v5; // rcx
  unsigned __int64 v6; // rdx
  HRESULT StringReference; // eax
  int v8; // edx
  unsigned int v9; // r8d

  v3 = (HSTRING *)&a1[1];
  a1[1].Reserved.Reserved1 = 0LL;
  v5 = *a2;
  v6 = -1LL;
  do
    ++v6;
  while ( v5[v6] );
  if ( v6 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v6, a3);
    __debugbreak();
  }
  if ( (int)v6 + 1 < (unsigned int)v6 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v6, a3);
    __debugbreak();
  }
  StringReference = WindowsCreateStringReference(v5, v6, a1, v3);
  if ( StringReference < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)StringReference, v8, v9);
    JUMPOUT(0x1801175A6LL);
  }
  return a1;
}
