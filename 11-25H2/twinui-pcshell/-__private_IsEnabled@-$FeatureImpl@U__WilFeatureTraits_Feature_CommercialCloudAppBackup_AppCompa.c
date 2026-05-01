/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CommercialCloudAppBackup_AppCompatBackupOnStartFix@@@details@wil@@QEAA_NXZ @ 0x1805F3234
 * Callers:
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805EEB1C (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 *     ?JsonFileBelongsToThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEBG@Z @ 0x1805F0A58 (-JsonFileBelongsToThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_N.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CommercialCloudAppBackup_AppCompatBackupOnStartFix@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1805EF814 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CommercialC_ea_1805EF814.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CommercialCloudAppBackup_AppCompatBackupOnStartFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805F1FAC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CommercialCloudAppBackup_AppCompatBackupO.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_CommercialCloudAppBackup_AppCompatBackupOnStartFix>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CommercialCloudAppBackup_AppCompatBackupOnStartFix>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CommercialCloudAppBackup_AppCompatBackupOnStartFix>::ReportUsage(
    a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
