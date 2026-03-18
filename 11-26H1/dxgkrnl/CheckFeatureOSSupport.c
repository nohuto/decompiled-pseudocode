/*
 * XREFs of CheckFeatureOSSupport @ 0x140288B70
 * Callers:
 *     IsFeatureEnabledUncached @ 0x140289AE4 (IsFeatureEnabledUncached.c)
 * Callees:
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline @ 0x14001B070 (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_NotifyResidency2__private_ReportDeviceUsage @ 0x140085984 (Feature_NotifyResidency2__private_ReportDeviceUsage.c)
 *     Feature_SyncPresentToRenderHwQOnly__private_IsEnabledDeviceUsageNoInline @ 0x14009D938 (Feature_SyncPresentToRenderHwQOnly__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UnifiedSchedulingModel__private_IsEnabledDeviceUsageNoInline @ 0x14009D990 (Feature_UnifiedSchedulingModel__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall CheckFeatureOSSupport(__int64 a1, __int64 a2, int a3)
{
  char v3; // cl
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int IsEnabledDeviceUsageNoInline; // eax

  v3 = *(_BYTE *)(a2 + 4) & 1;
  v4 = a3 - 32;
  if ( !v4 )
    return 0;
  v5 = v4 - 5;
  if ( !v5 )
    return 0;
  v6 = v5 - 4;
  if ( !v6 )
  {
    IsEnabledDeviceUsageNoInline = Feature_SyncPresentToRenderHwQOnly__private_IsEnabledDeviceUsageNoInline();
    return IsEnabledDeviceUsageNoInline != 0;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    IsEnabledDeviceUsageNoInline = Feature_UnifiedSchedulingModel__private_IsEnabledDeviceUsageNoInline();
    return IsEnabledDeviceUsageNoInline != 0;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    if ( v8 == 268435417 )
    {
      IsEnabledDeviceUsageNoInline = Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline();
      return IsEnabledDeviceUsageNoInline != 0;
    }
  }
  else
  {
    Feature_NotifyResidency2__private_ReportDeviceUsage();
    return 1;
  }
  return v3;
}
