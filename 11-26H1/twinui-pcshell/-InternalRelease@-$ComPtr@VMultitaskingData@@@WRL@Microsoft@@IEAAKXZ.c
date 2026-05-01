/*
 * XREFs of ?InternalRelease@?$ComPtr@VMultitaskingData@@@WRL@Microsoft@@IEAAKXZ @ 0x1804AC788
 * Callers:
 *     ??$MakeAndInitialize@VMultitaskingData@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopPinnedApps@@AEAPEAUIVirtualDesktopNotificationService@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUISnapServiceProvider@@AEAPEAUIApplicationViewIconLoader@@AEAW4SwitchItemFilterBehavior@@@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingData@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopPinnedApps@@AEAPEAUIVirtualDesktopNotificationService@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUISnapServiceProvider@@AEAPEAUIApplicationViewIconLoader@@AEAW4SwitchItemFilterBehavior@@@Z @ 0x1804AC360 (--$MakeAndInitialize@VMultitaskingData@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicatio.c)
 *     ??1?$ComPtr@VMultitaskingData@@@WRL@Microsoft@@QEAA@XZ @ 0x1804AC538 (--1-$ComPtr@VMultitaskingData@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?MultitaskingData_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIVirtualDesktopThumbnailWindowFilter@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveSettingsCache@@PEAUISnapServiceProvider@@PEAUIApplicationViewIconLoader@@W4SwitchItemFilterBehavior@@AEBU_GUID@@PEAPEAX@Z @ 0x1804AC7B0 (-MultitaskingData_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibil.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingData@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1804AC960 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingDat.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<MultitaskingData>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingData>::Release(v1);
  }
  return result;
}
